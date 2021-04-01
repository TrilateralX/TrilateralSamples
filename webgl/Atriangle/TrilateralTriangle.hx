package;

// To trace on screen
import kitGL.glWeb.DivertTrace;
import kitGL.glWeb.Ply;
import trilateral3.Trilateral;
import trilateral3.drawing.Pen;
import trilateral3.geom.FlatColorTriangles;
import trilateral3.nodule.PenArrColor;

import trilateral3.drawing.StyleEndLine;
import trilateral3.drawing.Sketch;
import trilateral3.drawing.StyleSketch;

function main(){
    var divertTrace = new DivertTrace();
    new TrilateralTriangle( 1000, 1000 );
    trace("TrilateralTriangle example");
}
class TrilateralTriangle extends Ply {
    public var pen: Pen;
    public var penColor = new PenArrColor();
    var p0: Int;
    var p1: Int;
    public function new( width: Int, height: Int ){
        super( width, height, false );
    }
    override
    public function draw(){
        dataGLcolor   = { get_data: penColor.get_data
                        , get_size: penColor.get_size };
        pen = penColor.pen;
        pen.currentColor = 0xFFFFFFFF;
        p0 = cast pen.pos;
        pen.triangle2DFill( 300, 300
                          , 400, 300
                          , 400, 400, 0xFFFFFF00 );
        pen.triangle2DFill( 100, 100
                          , 500, 500
                          , 100, 500 );
        pen.triangle2DFill( 100, 100
                          , 500, 100
                          , 500, 500, 0xFFFF0000 );
        p1 = cast pen.pos;
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
        p1 = cast pen.pos;
        
    }
    override
    public function renderOnce(){
        super.renderOnce();
        drawShape( p0, p1 );
    }
}