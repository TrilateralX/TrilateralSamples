package;
import trilateral3.nodule.PenPaint;
import trilateral3.drawing.Pen;
import trilateral3.reShape.QuadDepth;
class ImageGrid{
    public var penTexture: Pen;
    public var quadDepth: QuadDepth;
    public var penPaint = new PenPaint();
    public var imageTransform = [ 1.,0.,0.
                                , 0.,1.,0.
                                , 0.,0.,1.];
    public var dw:     Float;
    public var dh:     Float;
    public var ratio:  Float  = 1.;
    public var stageW: Float  = 1000;
    public var stageH: Float  = 1000;
    public var scale:  Float  = 2.;
    public var asileW: Int    = 10;
    public var asileH: Int    = 10;
    public var imageH: Int    = 100;
    public var imageW: Int    = 100;
    public var space:  Float  = 0.;
    public function new( penPaint: PenPaint ){
        penTexture = penPaint.pen;
    }
    public function createGrid( px: Float, py: Float
                              , imageW: Float, imageH: Float
                              , asileW: Int, asileH: Int ){
        this.asileW = asileW;
        this.asileH = asileH;
        this.imageW = imageW;
        this.imageH = imageH;
        calculateFactors();
        quadDepth = new QuadDepth( penTexture );
        quadDepth.space = space;
        quadDepth.grid( pX, pY, dw, dh, asileW, asileH );
        imageTransform = [ scale,0.,0.
                         , 0.,scale/ratio,0.
                         , 0.,0.,1.];
    }
    inline 
    function calculateFactors(){
        ratio = imageH/imageW;
        dw = stageW/nW;
        dh = stageH*ratio/nH;
    }
}