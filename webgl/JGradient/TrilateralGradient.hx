package;
// Color pallettes
import pallette.simple.QuickARGB;
import kitGL.glWeb.Ply;
import kitGL.glWeb.DataGL;
// Sketching
import trilateral3.drawing.Pen;
import trilateral3.nodule.PenColor;
import trilateral3.shape.IteratorRange;
// To trace on screen
import kitGL.glWeb.DivertTrace;

function main(){
    new TrilateralGradient( 1000, 1000 );
    var divertTrace = new DivertTrace();
    trace("TrilateralGradient example");
}
class TrilateralGradient extends Ply {
    public var penColor: Pen;
    public var penNoduleColor = new PenColor();
    public var theta = 0.;
    public var firstGrad: IteratorRange;
    public function new( width: Int, height: Int ){
        super( width, height );
    }
    override
    public function draw(){
        dataGLcolor = { get_data: penNoduleColor.get_data, get_size: penNoduleColor.get_size };
        penColor = penNoduleColor.pen;
        var colors = [ Violet, Indigo, Blue, Green, Yellow, Orange, Red ];
        var horizontal = true;
        penColor.multiGradient( horizontal, 0., 0., 500., 500.
                              , colors, Pen.tweenWrap( quadEaseIn ) );
    }
    override
    public function renderDraw(){
        penColor.pos = 0;
        // don't use too many colours as run out of triangles?
        var colors = [ Indigo, Red, Orange, Green ];
        var horizontal = true;
        var posMin =  cast penColor.pos;
        penColor.multiGradient( horizontal, 300.,300., 500., 500.
                         , colors, Pen.tweenWrap( quadEaseIn ), theta, 300+250, 300+250 );
        firstGrad = posMin...cast penColor.pos;
        var colors = [ Violet, Yellow, Red ];
        penColor.multiGradient( false, 0., 0., 500., 500.
                      , colors, Pen.tweenWrap( expEaseInOut ), 0, 350, 350 );
        theta += 0.1;
        var allGrad: IteratorRange = posMin...cast penColor.pos;
        drawShape( cast allGrad.start, cast allGrad.max );
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