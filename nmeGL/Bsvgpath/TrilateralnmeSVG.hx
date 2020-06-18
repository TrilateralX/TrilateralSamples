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

class TrilateralnmeTriangle extends InterleaveAlterGL {
    
    public var pen: Pen;
    public var currentTriangle: TriangleAbstract;
    public var currentColor:    Color3Abstract; // can only use with interleave.
    public var penNodule = new PenNodule();
    public var regular: Regular;
    
    var quadtest_d = "M200,300 Q400,50 600,300 T1000,300";
    var cubictest_d = "M100,200 C100,100 250,100 250,200S400,300 400,200";
    public
    function new( window: Window ){
       super( window );
    }
    override
    public function draw( pen: Pen ){
        interleaveDataGL = { get_data: penNodule.get_data, get_size: penNodule.get_size };
        pen = penNodule.pen;
        pen.currentColor = Blue;
        cubicSVG( pen );
        pen.currentColor = Blue;
        quadSVG( pen );
    }
    function cubicSVG( pen: Pen ){
        var sketch = new Sketch( pen, StyleSketch.Fine, StyleEndLine.both );
        sketch.width = 20;
        // function to adjust color of curve along length
        sketch.colourFunction = function( colour: Int, x: Float, y: Float, x_: Float, y_: Float ):  Int {
            return Math.round( colour-1*x*y );
        }
        var translateContext = new TranslationContext( sketch, 50, 200 );
        var p = new SvgPath( translateContext );
        p.parse( cubictest_d );
    }
    function quadSVG( pen: Pen ){
        var sketch = new Sketch( pen, StyleSketch.Fine, StyleEndLine.both );
        sketch.width = 5;
        // function to adjust width of curve along length
        sketch.widthFunction = function( width: Float, x: Float, y: Float, x_: Float, y_: Float ): Float{
            return width+0.008*2;
        }
        var translateContext = new TranslationContext( sketch, -100, 300 );
        var p = new SvgPath( translateContext );
        p.parse( quadtest_d );
    }
}