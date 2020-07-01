package;
// Color pallettes
import pallette.simple.QuickARGB;
// To trace on screen
import kitGL.glLime.InterleaveAlterGL;
import kitGL.glLime.InterleaveDataGL;
import trilateral3.Trilateral;
import trilateral3.drawing.Pen;
import trilateral3.geom.FlatColorTriangles;
import trilateral3.nodule.PenNodule;
import trilateral3.shape.Regular;
import trilateral3.structure.RegularShape;
import trilateral3.shape.StyleRegular;
import trilateral3.shape.IndexRange;
import trilateral3.color.ColorInt;
import trilateral3.structure.ARGB;
import trilateral3.drawing.StyleEndLine;
import trilateral3.drawing.Sketch;
import trilateral3.drawing.StyleSketch;

import trilateral3.shape.Shaper;
import trilateral3.drawing.TriangleAbstract;
import trilateral3.shape.IndexRange;
import trilateral3.Trilateral;
// Color pallettes
import pallette.metal.Gold;
// SVG path parser
import justPath.*;
import justPath.transform.ScaleContext;
import justPath.transform.ScaleTranslateContext;
import justPath.transform.TranslationContext;
import trilateral3.drawing.Fill;

import kitGL.glLime.setup.MainLime;
import kitGL.glLime.setup.IAppGL;

class TrilateralLimeRotateMove extends InterleaveAlterGL {
    var triangle: IndexRange;
    var all: IndexRange;
    var curr: TriangleAbstract;
    var theta = 0.;
    var dx = [];
    var dy = [];
    public var pen: Pen;
    public var penNodule = new PenNodule();
    public function new( width: Int, height: Int ){
        super( width, height );
        trace('TrilateralLimeRotateMove');
    }
    override
    public function draw(){
        interleaveDataGL = { get_data: cast penNodule.get_data, get_size: cast penNodule.get_size };
        pen = penNodule.pen;
        curr = pen.triangleCurrent;
        var start = pen.pos;
        var len = add2DTriangle( pen.drawType, 300, 100, 100, 300, 500, 300 );
        var end = start + len - 1 ;
        var len = add2DTriangle( pen.drawType, 300, 100, 100, 300, 500, 300 );
        end += len;
        triangle = { start: Std.int( start ), end: Std.int( end ) };
        var red = 0xFFFF0000;
        pen.pos = start; // reset pos since colors interleaved
        pen.colorTriangles( red, triangle.length );
        
        
        var green = 0xFF00FF00;
        len = 0;
        start = pen.pos;
        for( i in 0...1000 ){
            len += add2DTriangle( pen.drawType, 30, 10, 10, 30, 50, 30 );
            pen.pos--;
            x = Math.random()*1000;
            y = Math.random()*1000;
            dx.push( 3*(Math.random()-0.5) );
            dy.push( 3*(Math.random()-0.5) );
            pen.color3Current.argbA = Std.int( 4294967295 * Math.random() );
            pen.color3Current.argbB = Std.int( 4294967295 * Math.random() );
            pen.color3Current.argbC = Std.int( 4294967295 * Math.random() );
            rotateCentre( x + 30, y + 30, Math.random()*Math.PI*2 );
            pen.pos++;
        }
        all = { start: Std.int( start ), end: Std.int( pen.pos-1 ) };
        pen.colorTriangles( green, triangle.length );
    }
    override
    public function renderDraw(){
        pen.pos = triangle.start;
        x = 500 - 100*Math.sin( theta );
        y = 500 + 100*Math.cos( theta );
        pen.pos = triangle.start + 1;
        rotateCentre( 300, 300, Math.PI/100 );
        theta += ( Math.PI/100 );
        // animate all the triangles
        var count = 0;
        for( i in all.start...all.end ){
            pen.pos = i;
            x += dx[ count ];
            y += dy[ count ];
            if( x > 1000 || x < 0 ) {
                dx[ count ] = -dx[ count ];
                x += dx[ count ];
            }
            if( y > 1000 || y < 0 ){
                dy[ count ] = -dy[ count ];
                y += dy[ count ];
            }
            count ++;
        }
    }
    // Not ideal but reverses matrix transforms 
    public function rotateCentre( vx: Float, vy: Float, v: Float ){
        curr.rotate( (vx-1000)/1000, -(vy-1000)/1000, v );
    }
    var x( get, set ): Float;
    public function get_x(): Float {
        return curr.x*1000+1000;
    }
    public function set_x( v: Float ): Float {
        v = (v-1000)/1000;
        curr.x = v;
        return v;
    }
    var y( get, set ): Float;
    public function get_y(): Float {
        return -(curr.y*1000-1000);
    }
    public function set_y( v: Float ): Float {
        v = -(v-1000)/1000;
        curr.y = v;
        return v;
    }
}