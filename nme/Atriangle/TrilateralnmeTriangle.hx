package;

// TODO: change kitGL.nme to kitGL.glNme when code is working better.

import kitGL.nme.InterleaveAlterGL;
import kitGL.nme.InterleaveDataGL;

//import nme.app.NmeApplication;
import nme.app.Window;
// Color pallettes
import pallette.simple.QuickARGB;
// SVG path parser
import justPath.*;
import justPath.transform.ScaleContext;
import justPath.transform.ScaleTranslateContext;
import justPath.transform.TranslationContext;
// Sketching
import trilateral3.drawing.StyleEndLine;
import trilateral3.drawing.Sketch;
import trilateral3.drawing.StyleSketch;
import trilateral3.drawing.Fill;
import trilateral3.drawing.Pen;

import trilateral3.Trilateral;
import trilateral3.geom.FlatColorTriangles;
import trilateral3.nodule.PenNodule;
import trilateral3.shape.Shaper;
import trilateral3.drawing.TriangleAbstract;
import trilateral3.drawing.Color3Abstract;
import trilateral3.shape.IndexRange;
import trilateral3.shape.Regular;
import trilateral3.color.ColorInt;
import trilateral3.structure.ARGB;

// To trace on screen
#if js
import kitGL.glWeb.DivertTrace;
#end

class TrilateralnmeSVG extends InterleaveAlterGL {
    
    public var pen: Pen;
    public var currentTriangle: TriangleAbstract;
    public var currentColor:    Color3Abstract; // can only use with interleave.
    public var penNodule = new PenNodule();
    public var regular: Regular;
    
    public
    function new( window: Window ){
       super( window );
    }
    override
    public function draw(){
        interleaveDataGL = { get_data: penNodule.get_data, get_size: penNodule.get_size };
        pen = penNodule.pen;
        pen.addTriangle( 100, 100, 0
                       , 500, 500, 0
                       , 100, 500, 0 );
        pen.addTriangle( 100, 100, 0
                       , 500, 100, 0
                       , 500, 500, 0);
        pen.addTriangle( 300, 300, 0
                       , 400, 300, 0
                       , 400, 400, 0);
        // start coloring from second triangle
        pen.pos = 1;
        pen.colorTriangles( 0xFFFF0000, 1 ); // Red
        pen.colorTriangles( 0xFFFFFF00, 1 ); // Yellow
        // drawing a border 
        var sketch = new Sketch( pen, StyleSketch.Fine, StyleEndLine.both ); // ending not working at moment
        //pen.currentColor = 0xFF00FFFF; <- not working... need to check.
        sketch.width = 30;
        var start = pen.pos;
        sketch.moveTo( 50, 50 );
        sketch.lineTo( 550, 50 );
        sketch.lineTo( 550, 550 );
        sketch.lineTo( 50, 550 );
        sketch.lineTo( 50, 50 );
        var end = pen.pos;
        pen.pos = start;
        var numberTriangles = Std.int( end-start );
        pen.colorTriangles( 0xFF0000FF, numberTriangles ); // color border Blue
    }
    override
    public function renderDraw(){
        // don't modify the triangle
    }
}