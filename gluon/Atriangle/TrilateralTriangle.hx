package;
import gluon.webgl.GLContext;
import kitGL.gluon.Ply;
import kitGL.gluon.DataGL;
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
import trilateral3.nodule.PenPaint;
import trilateral3.geom.FlatColorTriangles;
import trilateral3.nodule.PenNodule;

class TrilateralTriangle extends Ply {
    public var pen: Pen;
    public var penNodule = new PenNodule();
    public function new( gl: GLContext ){
        super( gl );
    }
    override
    public function draw(){
        dataGL           = { get_data: penNodule.get_data
                           , get_size: penNodule.get_size };
        pen              = penNodule.pen;
        pen.addTriangle( 100., 100., 0.
                       , 500., 500., 0.
                       , 100., 500., 0. );
        pen.addTriangle( 100., 100., 0.
                       , 500., 100., 0.
                       , 500., 500., 0. );
        pen.addTriangle( 300., 300., 0.
                       , 400., 300., 0.
                       , 400., 400., 0. );
        // start coloring from second triangle
        pen.pos = 0;
        pen.colorTriangles( 0xFFFFFF, 1 ); // White
        pen.colorTriangles( 0xFFFF0000, 1 ); // Red
        pen.colorTriangles( 0xFFFFFF00, 1 ); // Yellow
        // drawing a border 
        var sketch = new Sketch( pen, StyleSketch.Fine, StyleEndLine.both ); // ending not working at moment
        // pen.currentColor = 0xFF00FFFF;// <- not working... need to check.
        sketch.width = 30;
        var start = pen.pos;
        sketch.moveTo( 50., 50. );
        sketch.lineTo( 550., 50. );
        sketch.lineTo( 550., 550. );
        sketch.lineTo( 50., 550. );
        sketch.lineTo( 50., 50. );
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
    