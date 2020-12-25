package;
// Color pallettes
import pallette.simple.QuickARGB;
import kitGL.glWeb.PlyMix;
import kitGL.glWeb.DataGL;
// Sketching
import trilateral3.drawing.Pen;
import trilateral3.nodule.PenPaint;
import trilateral3.nodule.PenNodule;
import trilateral3.shape.IndexRange;
import kitGL.glWeb.ImageGL;
import kitGL.glWeb.BufferGL;
import trilateral3.drawing.StyleEndLine;
import trilateral3.drawing.Sketch;
import trilateral3.drawing.StyleSketch;
import trilateral3.drawing.Fill;
import kitGL.glWeb.GL;
import trilateral3.reShape.RangeShaper;
// To trace on screen
import kitGL.glWeb.DivertTrace;

function main(){
    new TrilateralMix( 1000, 1000 );
    var divertTrace = new DivertTrace();
    trace("TrilateralMix example");
}
class TrilateralMix extends PlyMix {
    public var penColor: Pen;
    public var penNoduleColor = new PenNodule();
    public var penTexture: Pen;
    public var penNoduleTexture = new PenPaint();
    public var theta = 0.;
    public var firstGrad: IndexRange;
    public var outlineStarRange: IndexRange;
    public var fillStarRange:    IndexRange;
    public var bgStarOutline     = 0xFFFFFFFF;
    public var bgStarFill        = 0xFFFFFFFF;
    public var starOutlineShaper: RangeShaper;
    var colors = [ Violet, Indigo, Blue, Green, Yellow, Orange, Red, Red ];
    var horizontal = true;
    public var sketch: Sketch;
    public function new( width: Int, height: Int ){
        super( width, height );
        trace( 'draw' );
        imageLoader.loadEncoded( [ HaxeLogo.png ],[ 'haxelogo' ] );
    }
    override
    public function draw(){
        trace( 'draw ');
        img =  imageLoader.imageArr[ 0 ];
        var w            = img.width;
        var h            = img.height;
        //mainSheet.cx.drawImage( img, 0, 0, w, h );  // this line should not be needed!!
        
        
        dataGLcolor   = { get_data: penNoduleColor.get_data, get_size: penNoduleColor.get_size };
        dataGLtexture = { get_data: penNoduleTexture.get_data, get_size: penNoduleTexture.get_size };
        
        penColor = penNoduleColor.pen;
        penColor.currentColor = Red;
        
        
        penTexture = penNoduleTexture.pen;
        penTexture.useTexture   = true;
        penTexture.currentColor = Green;
        firstGrad = { start: cast penColor.pos, end: 0 };
        penColor.multiGradient( horizontal, 0., 0., 500., 500.
                         , colors, Pen.tweenWrap( quadEaseIn ) ); 
        firstGrad.end = cast penColor.pos;
                         
        sketch       = new Sketch( penTexture, StyleSketch.Fine, StyleEndLine.no );
        sketch.width     = 8;
        penTexture.z2D = -0.1;
        outlineStarRange = { start: Std.int( penTexture.pos ), end: 0 };
        drawStar( sketch, 3 );
        penTexture.z2D = 0.2;
        outlineStarRange.end = Std.int( penTexture.pos -1 );
        fillStarRange = { start: Std.int( penTexture.pos ), end: 0 };
        triangulate( penTexture, sketch, polyK );
        fillStarRange.end = Std.int( penTexture.pos -1 );
        transformUVArr = [ 2.,0.,0.
                         , 0.,2.,0.
                         , 0.,0.,1.];
        starOutlineShaper = new RangeShaper( penTexture, outlineStarRange ); 
    }
    override
    public function renderDraw(){
        var colors2 = [ Violet, Indigo, Blue, Green, Yellow, 0xFF000000 + Math.round( 0xFFFFFF*Math.cos( theta/3000 )), 0xFF000000 + Math.round( 0xFFFFFF*Math.sin( theta/5000 )), Red ];
        var horizontal = true;
        penColor.pos = 0;
        penColor.multiGradient( horizontal, 0., 0., 500. + 100*Math.sin( theta/10), 500.
                         , colors2, Pen.tweenWrap( quadEaseIn ) ); 
        theta += 0.1;
        var dx = 20*Math.sin( theta * Math.PI/10 );
        starOutlineShaper.setXY( {x: dx, y:0. } );
        drawColorShape( firstGrad.start, firstGrad.end );
        drawTextureShape( outlineStarRange.start, outlineStarRange.end, bgStarOutline );
        drawTextureShape( fillStarRange.start,    fillStarRange.end, bgStarFill       );
    }
    public function drawStar( sketch: Sketch, size: Float ){
        var s = size;
        sketch.moveTo( 121*s, 111*s );
        sketch.moveTo( 150*s, 25*s );
        sketch.lineTo( 179*s, 111*s );
        sketch.lineTo( 269*s, 111*s );
        sketch.lineTo( 197*s, 165*s );
        sketch.lineTo( 223*s, 251*s );
        sketch.lineTo( 150*s, 200*s );
        sketch.lineTo( 77*s,  251*s );
        sketch.lineTo( 103*s, 165*s );
        sketch.lineTo( 31*s,  111*s );
        sketch.lineTo( 121*s, 111*s );
        sketch.lineTo( 150*s, 25*s );
        sketch.lineTo( 179*s, 111*s );
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