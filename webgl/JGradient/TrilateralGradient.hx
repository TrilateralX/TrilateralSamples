package;
// Color pallettes
import pallette.simple.QuickARGB;
import kitGL.glWeb.Ply;
import kitGL.glWeb.DataGL;
// Sketching
import trilateral3.drawing.Pen;
import trilateral3.nodule.PenNodule;
// To trace on screen
import kitGL.glWeb.DivertTrace;

function main(){
    new TrilateralGradient( 1000, 1000 );
    var divertTrace = new DivertTrace();
    trace("TrilateralGradient example");
}
class TrilateralGradient extends Ply {
    public var pen: Pen;
    public var penNodule = new PenNodule();
    public var theta = 0.;
    public function new( width: Int, height: Int ){
        super( width, height );
    }
    override
    public function draw(){
        dataGL = { get_data: penNodule.get_data, get_size: penNodule.get_size };
        pen = penNodule.pen;
        var colors = [ Violet, Indigo, Blue, Green, Yellow, Orange, Red ];
        var horizontal = true;
        pen.multiGradient( horizontal, 0., 0., 500., 500.
                         , colors, Pen.tweenWrap( quadEaseIn ) );
    }
    override
    public function renderDraw(){
        penNodule = new PenNodule();
        dataGL = { get_data: penNodule.get_data, get_size: penNodule.get_size };
        pen = penNodule.pen;
        // don't use too many colours as run out of triangles?
        var colors = [ Indigo, Red, Orange, Green ];
        var horizontal = true;
        pen.multiGradient( horizontal, 300.,300., 500., 500.
                         , colors, Pen.tweenWrap( quadEaseIn ), theta, 300+250, 300+250 );
        var colors = [ Violet, Yellow, Red ];
        pen.multiGradient( false, 0., 0., 500., 500.
                      , colors, Pen.tweenWrap( expEaseInOut ), 0, 350, 350 );
        theta += 0.1;
    }
    public static function quadEaseIn( t: Float, b: Float, c: Float, d: Float ): Float {
        return c * ( t /= d ) * t + b;
    }
    public static function expEaseInOut( t: Float, b: Float, c: Float, d: Float ): Float{
        if ( t == 0 ) return b;
        if ( t == d ) return b+c;
        if ( ( t /= d / 2 ) < 1 ) return c / 2 * Math.pow( 2, 10 * ( t - 1 ) ) + b - c * 0.0005;
        return c / 2 * 1.0005 * ( -Math.pow( 2, -10 * --t ) + 2 ) + b;
    }
}