package;

import trilateral3.target.openfl.AppOpenFL;

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
// To trace on screen
#if js
import kitGL.glWeb.DivertTrace;
#end
function main(){
    #if js
    var divertTrace = new DivertTrace();
    #end
    trace("TrilateralOpenFLTriangle example");
    new TrilateralOpenFLTriangle();
}

class TrilateralOpenFLTriangle extends AppOpenFL {
    override
    public function draw(){
        trace('test');
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
        
    }
    /*
    // override this so it does not redraw every frame - oh dear this does not work!
    override
    public function update( dt: Float ){
    
    }
    */
}