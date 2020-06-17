package;
// Color pallettes
import pallette.simple.QuickARGB;
import pallette.metal.Gold;
import pallette.general.PalletteNine;
import pallette.utils.ColorInt;
// SVG path parser
import justPath.*;
import justPath.transform.ScaleContext;
import justPath.transform.ScaleTranslateContext;
import justPath.transform.TranslationContext;
import justPath.transform.ScaleTranslateContext;
// Sketching
import trilateral3.drawing.StyleEndLine;
import trilateral3.drawing.Sketch;
import trilateral3.drawing.StyleSketch;
import trilateral3.drawing.Fill;
import trilateral3.drawing.Pen;
// To trace on screen
import kitGL.glWeb.DivertTrace;
import kitGL.glWeb.InterleaveAlterGL;
import kitGL.glWeb.InterleaveDataGL;
import trilateral3.shape.Regular;
import trilateral3.structure.RegularShape;
import trilateral3.shape.StyleRegular;
import trilateral3.shape.IndexRange;
import trilateral3.color.ColorInt;
import trilateral3.structure.ARGB;

import trilateral3.Trilateral;
import trilateral3.drawing.Pen;
import trilateral3.geom.FlatColorTriangles;
import trilateral3.nodule.PenNodule;

typedef ColorPalletInt = pallette.utils.ColorInt;
typedef ColorT3Int = trilateral3.color.ColorInt;
function main(){
    new TrilateralRegularColor( 1000, 1000 );
    var divertTrace = new DivertTrace();
    trace("TrilateralRegularColor example");
}
class TrilateralRegularColor extends InterleaveAlterGL {
    var regular: Regular;
    var arr: Array<IndexRange> = [];
    var nines: Array<Int>;
    public var pen: Pen;
    public var penNodule = new PenNodule();
    public function new( width: Int, height: Int ){
        super( width, height );
    }
    override
    public function draw(){
        interleaveDataGL = { get_data: penNodule.get_data, get_size: penNodule.get_size };
        pen = penNodule.pen;
        regular = new Regular( pen );
        var c: Int = 1;//9*4;
        count = c;
        nines = PalleteNine.ARGB();
        var x = 0;
        var y = 0;
        var dx = 300;
        var dy = 200;
        arr[0] = regular.addRegular( { x: x + dx,   y: y + dy,   radius: 50, color: nines[ c ] },      SQUARE      );
        arr[1] = regular.addRegular( { x: x + dx,   y: y + 2*dy, radius: 50, color: nines[ c + 2] },   PENTAGON    );
        arr[2] = regular.addRegular( { x: x + dx,   y: y + 3*dy, radius: 50, color: nines[ c + 4] },   CIRCLE      );
        arr[3] = regular.addRegular( { x: x + dx,   y: y + 4*dy, radius: 50, color: nines[ c + 6] },   TRIANGLE    );
        arr[4] = regular.addRegular( { x: x + dx*2, y: y + dy,   radius: 50, color: nines[ c + 1 ] },  BAR         );
        arr[5] = regular.addRegular( { x: x + dx*2, y: y + 2*dy, radius: 50, color: nines[ c + 3] },   HEXAGON     );
        arr[6] = regular.addRegular( { x: x + dx*2, y: y + 3*dy, radius: 50, color: nines[ c + 5] },   ROUNDSQUARE );
        arr[7] = regular.addRegular( { x: x + dx*2, y: y + 4*dy, radius: 50, color: nines[ c + 7] },   STAR        );
    }
    var tick = 0;
    var range = 80.; // controls transition speed
    var dStep = 0.;
    var delayStart = 100;
    var count: Int;
    override
    public function renderDraw(){
        if( tick > delayStart ) {
            var currCount = count;
            for( i in 0...8 ){
                var startEnd = arr[i];
                pen.pos = startEnd.start;
                var col3 = pen.colorType.getTriInt();
                var colA: ColorPalletInt = col3.a;
                var nine: ColorPalletInt = cast nines[ count ];
                var col: Int = cast colA.blendRGB( nine, dStep );
                pen.colorTriangles( col, Std.int( startEnd.end - startEnd.start + 1 ) );
                count++;
            }
            if( tick % range == 0 ){ // after 50 increase count 
                count++;
                dStep = 0;//1./range;
                if( nines[ count ] == null ) count = 1;//9*4;
            } else {
                dStep += 1./range;
                count = currCount;
            }
        }
        tick++;
    }
}
