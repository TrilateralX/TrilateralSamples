package;
// Color pallettes
import pallette.simple.QuickARGB;
import kitGL.glWeb.Ply;
import kitGL.glWeb.PlyMix;
import kitGL.glWeb.DataGL;
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
import trilateral3.geom.FlatColorTriangles;
import trilateral3.nodule.PenColor;
// To trace on screen
import kitGL.glWeb.DivertTrace;

function main(){
    var divertTrace = new DivertTrace();
    trace("TrilateralSVG example");
    new TrilateralSVG( 1000, 1000 );
}
class TrilateralSVG extends Ply {
    var quadtest_d = "M200,300 Q400,50 600,300 T1000,300";
    var cubictest_d = "M100,200 C100,100 250,100 250,200S400,300 400,200";
    var pen: Pen;
    var penColor = new PenColor();
    var p0: Int;
    var p1: Int;
    public function new( width: Int, height: Int, ?animate: Bool ){
        super( width, height, false );
    }

    override
    public function draw(){
        trace('draw');
        dataGLcolor   = { get_data: penColor.get_data
                        , get_size: penColor.get_size };
        pen = penColor.pen;
        pen.currentColor = Blue;
        p0 = cast pen.pos;
        cubicSVG();
        pen.currentColor = Blue;
        quadSVG();
        p1 = cast pen.pos;
    }
    function cubicSVG(){
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
    function quadSVG(){
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
    override
    public function renderOnce(){
        //super.renderOnce();
        drawShape( p0, p1 );
    }
}