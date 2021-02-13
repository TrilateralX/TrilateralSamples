package;
// Color pallettes
import pallette.simple.QuickARGB;
import js.Browser;
import js.html.MouseEvent;
import js.html.Event;
import js.html.Image;
import js.html.KeyboardEvent;
import kitGL.glWeb.PlyMix;
import kitGL.glWeb.DataGL;
import haxe.Timer;
// Sketching
import trilateral3.drawing.Pen;
import trilateral3.nodule.PenPaint;
import trilateral3.nodule.PenNodule;
import trilateral3.shape.IteratorRange;
import kitGL.glWeb.ImageGL;
import kitGL.glWeb.BufferGL;
import trilateral3.drawing.StyleEndLine;
import trilateral3.drawing.Sketch;
import trilateral3.drawing.StyleSketch;
import trilateral3.drawing.Fill;
import kitGL.glWeb.GL;
import trilateral3.reShape.RangeShaper;
import trilateral3.reShape.QuadShaper;
import trilateral3.structure.XY;
import trilateral3.reShape.QuadDepth;

import trilateral3.geom.Transformer;
import trilateral3.matrix.Vertex;
import trilateral3.Trilateral;

// To trace on screen
import kitGL.glWeb.DivertTrace;
import NextTo;
function main(){
    new TrilateralSliderPuzzle( 1000, 1000 );
    var divertTrace = new DivertTrace();
    trace("TrilateralSliderPuzzle example");
}
class TrilateralSliderPuzzle extends PlyMix {
    public var penColor:            Pen;
    public var penNoduleColor       = new PenNodule();
    public var penTexture:          Pen;
    public var penNoduleTexture     = new PenPaint();
    public var theta                = 0.;
    public var quadDepth:           QuadDepth;
    public var firstRange:          IteratorRange;
    public var pieces               = new Array<QuadShaper>();
    public var origPositions        = new Array<XY>();
    public var curPositions         = new Array<XY>();
    public var mouseVertex:         Vertex;
    public var emptyPos:            XY;
    public var historyCount         = new Array<Int>();
    //var movePiece                   = 1;
    var colors                      = [ Violet, Indigo, Blue, Green, Yellow, Orange, Red, Red ];
    var horizontal                  = true;
    public var sketch:              Sketch;
    //var pixelRatio:                 Float;
    var wasHit:                     Bool = true;
    var ratio:                      Float;
    var nW:                         Int = 7;
    var nH:                         Int = 4;
    var dw:                         Float;
    var dh:                         Float;
    var loop                        = 0;
    var first1                      = true;
    var itemCounter:                Int;
    public
    function new( width: Int, height: Int ){
        super( width, height );
        //pixelRatio = Browser.window.devicePixelRatio;
        trace( 'draw' );
        imageLoader.loadEncoded( [ TableCloth.png ],[ 'tableCloth' ] );
        //imageLoader.loadEncoded( [ HaxeLogo.png ],[ 'haxeLogo' ] );
    }
    inline
    function showImageOnCanvas( img: Image, wid: Int, hi: Int ){
        mainSheet.cx.drawImage( img, 0, 0, wid, hi );
    }
    inline
    function setupDrawingPens(){
        setupNoduleBuffers();
        penInits();
    }
    // connects data buffers to pen drawing.
    inline
    function setupNoduleBuffers(){
        dataGLcolor   = { get_data: penNoduleColor.get_data
                        , get_size: penNoduleColor.get_size };
        dataGLtexture = { get_data: penNoduleTexture.get_data
                        , get_size: penNoduleTexture.get_size };
    }
    inline
    function penInits(){
        penColor = penNoduleColor.pen;
        penColor.currentColor = 0xFFFFFFFF;
        penTexture = penNoduleTexture.pen;
        penTexture.useTexture   = true;
        penTexture.currentColor = 0xffFFFFFF;
    }
    override
    public function draw(){
        trace( 'arrow keys or mouse for direction');
        trace( 'space to muddle');
        trace( 'enter to solve');
        trace( 'delete to undo');
        img =  imageLoader.imageArr[ 0 ];
        var w            = img.width;
        var h            = img.height;
        #if MsliderPuzzle_showImageOnCanvas showImageOnCanvas( img, w, h ); #end
        setupDrawingPens();
        
        //nW = 1;
        //nH = 1;
        //ratio = 400/300;
        ratio = 262/371;
        dw = 1000/nW;
        dh = 1000*ratio/nH;
        
        quadDepth = new QuadDepth( penTexture );
        quadDepth.space = 1;
        quadDepth.grid( 100, 200, dw, dh, nW, nH );
        mainSheet.mouseDownSetup();
        mainSheet.mouseDownXY = mouseDownXY;
        mainSheet.mouseUpXY   = mouseUpXY;
        mainSheet.mouseMoveXY = mouseMoveXY;
        keyDownSetup();
        #if MsliderPuzzle_showCheckerboard checkerBoard(); #end
        //traceLayout();
        alphaLast();
        //hideLast();
        quadDepth.toTop( last );//, 2*nH*nW-2 );
        transformUVArr = [ 2.,0.,0.
                         , 0.,2./ratio,0.
                         , 0.,0.,1.];
    }
    inline
    function traceLayout(){
        quadDepth.traceBegins( nW );
    }
    inline
    function alphaLast(){
        quadDepth.alphaQuad( last, 0.1 );
    }
    inline
    function hideLast(){
        quadDepth.hideQuad( last );
    }
    // for testing hide checkerboard
    inline
    function checkboard(){
        for( i in quadDepth.quadRange ) if( i % 2 == 1 ) quadDepth.hideQuad( i );
    }
    inline
    function keyDownSetup(){
        var doc = Browser.document;
        doc.onkeydown = keyDown;
    }
    inline
    function keyboardInt( e: KeyboardEvent ){
        return mainSheet.keyboardInt( e );
    }
    inline
    function keyDown( e: KeyboardEvent ) {
        var keyCode = keyboardInt( e );
        if( movePiece ) return;
        if( keyCode == KeyboardEvent.DOM_VK_BACK_SPACE ){
            step = 0.07;
            back();
        }
        switch( keyCode ){
            case KeyboardEvent.DOM_VK_LEFT:
                step = 0.12;
                right();
            case KeyboardEvent.DOM_VK_RIGHT:
                step = 0.12;
                left();
            case KeyboardEvent.DOM_VK_DOWN:
                step = 0.12;
                up();
            case KeyboardEvent.DOM_VK_UP:
                step = 0.12;
                down();
            default: 
        }
        if( keyCode == KeyboardEvent.DOM_VK_SPACE ){
            step = 0.16;
            allRandom();
        }
        if( keyCode == KeyboardEvent.DOM_VK_RETURN ){
            step = 0.16;
            allBack();
        }
    }
    inline
    function allBack(){
        if( movePiece ) {
            Timer.delay( allBack, 50 );
        } else {
            if( historyCount.length != 0 ){
                back();
                Timer.delay( allBack, 50 );
            }
        }
    }
    var randomTotal = 0;
    inline
    function allRandom(){
        if( movePiece ) {
            Timer.delay( allRandom, 50 );
        } else {
            if( randomTotal != nW*nH*3 ){
                randomMove();
                randomTotal++;
                Timer.delay( allRandom, 50 );
            }
        }
    }
    inline
    function back(){
        var countNo = historyCount.pop();
        moveTile( countNo, false );
    }
    inline
    function randomMove(){
        var v = Std.random( 4 );
        switch( v ){
            case 0: left();
            case 1: right();
            case 2: down();
            case 3: up();
            default: randomMove();
        }
    }
    inline
    function left(){
        var countNo = ({ width:  nW
                       , item:   last
                       , target: last }: NextTo ).decrement();
        return if( countNo != -1 ){
            moveTile( countNo, true );
            true;
        } else {
            false;
        }
    }
    inline
    function right(){
        var countNo = ({ width:  nW
                       , item:   last
                       , target: last }: NextTo ).increment();
        return if( countNo < nW*nH && countNo != -1 ) {
            moveTile( countNo, true );
            true;
        } else {
            false;
        }
    }
    inline
    function down(){
        var countNo = ({ width:  nW
                       , item:   last
                       , target: last }: NextTo ).nextRow();
        return if( countNo < nW*nH && countNo != -1 ) {
            moveTile( countNo, true );
            true;
        } else {
            false;
        }
    }
    inline
    function up(){
        var countNo = ({ width:  nW
                       , item:   last
                       , target: last }: NextTo ).prevRow();
        return if( countNo != -1 ){
            moveTile( countNo, true );
            true;
        } else {
            false;
        }
    }
    /*
    inline
    function mouseDownSetup(){
        var body = Browser.document.body;
        body.onmousedown = mouseDown;
        body.onmouseup = mouseUp;
    }
    inline
    function mouseUpSetup(){
        var body = Browser.document.body;
        body.onmousemove = null;
        body.onmousedown = mouseDown;
    }
    inline
    function mouseDownDisable(){
        Browser.document.body.onmousedown = null;
    }
    inline
    function mouseMoveSetup(){
        var body = Browser.document.body;
        body.onmousemove = mouseMove;
    }
    */
    /*
    inline
    function mouseXY( e: Event ): XY {
        return mainSheet.mouseXY( e );
    }
    */
    /*
    inline
    function mouseXY( e: Event ): XY {
        var p: MouseEvent = cast e;
        e.stopPropagation();
        e.preventDefault();
        return screenHit( { x: p.clientX, y: p.clientY } );
    }
    inline
    function screenHit( xy: XY ): XY {
        var x = xy.x * pixelRatio;
        var y = xy.y * pixelRatio;
        return { x: x, y: y };
    }
    */
    var last = 16;
    var tempX: Float;
    var tempY: Float;
    public function mouseDownXY( xy: XY ){
        if( movePiece ) return;
        movePiece = true;
        step = 0.06;
        /* #if trilateral_hitDebug 
              var dist = quadDepth.distHit( mxy.x, mxy.y );
              trace( dist ); #end */
        hitTile( xy );
    }
    
    public
    function mouseUpXY( xy: XY ){
        mainSheet.mouseDragStop();
    }
    
    public function mouseMoveXY( xy: XY ){
        if( movePiece ) return;
        if( wasHit ) {
            var px = xy.x - tempX;
            var py = xy.y - tempY;
            quadDepth.setXY( itemCounter, px, py );
        }
    }
    inline
    function hitTile( mxy: XY ){
        var results = quadDepth.fullHit( mxy.x, mxy.y );
        wasHit = results[0] != null;
        if( wasHit ) {
            mainSheet.mouseDownDisable();
            var countNo = results[ 0 ]; // since results are in depth order.    
            moveTile( countNo, true, mxy );
            mainSheet.mouseMoveSetup();
        }
    }
    inline
    function moveTile( countNo: Int, allowHistory: Bool, ?mxy: XY ){
        itemCounter = countNo;
        var xy = quadDepth.getXY( countNo );
        if( mxy != null ) storeHitOffset( xy, mxy );
        var closeToEmpty = ( { width:  nW
                             , item:   countNo
                             , target: last    }: NextTo ).check();
        if( closeToEmpty ){
            quadDepth.toTopCount( countNo );
            changeXY    = swapLasts();
            last        = quadDepth.getLast();
            penultimate = quadDepth.getPenultimate();
            pxy         = quadDepth.getXY( penultimate );
            movePiece   = true;
            // increase history if not going back
            if( allowHistory ) historyCount[ historyCount.length ] = penultimate;
        } else {
            movePiece = false;
        }
        
    }
    var penultimate: Int = 27;
    var pxy: XY;
    var movePiece = false;
    var changeXY: XY;
    var t = 0.;
    var step = 0.12;
    function movePenultimate(){
        if( !movePiece ) return;
        if( t <= 1. ){
            if( t == 0 ){
                var v = randomColor();
                switch( v ){
                    case 0:
                        quadDepth.argbQuad( penultimate, 0xFFFFFF99 );
                    case 1:
                        quadDepth.argbQuad( penultimate, 0xFF99FFFF );
                    case 2:
                        quadDepth.argbQuad( penultimate, 0xFFFF99FF );
                    case 3:
                        quadDepth.argbQuad( penultimate, 0xFF9999FF );
                    case 4:
                        quadDepth.argbQuad( penultimate, 0xFFFF9999 );
                    case 5:
                        quadDepth.argbQuad( penultimate, 0xFF99FF99 );
                }
                
            }
            var nx = easeOutSubtle( t, pxy.x-changeXY.x, changeXY.x, 1. );
            var ny = easeOutSubtle( t, pxy.y-changeXY.y, changeXY.y, 1. );
            
            quadDepth.setXY( penultimate, nx, ny );
            t+= step;
        } else{
            //trace( historyCount );
            quadDepth.setXY( penultimate, pxy.x, pxy.y );
            quadDepth.argbQuad( penultimate, 0xFFFFFFFF );
            t = 0;
            movePiece = false;
        }
    }
    var lastRnd = 0;
    inline 
    function randomColor(): Int {
        var col = Std.random( 6 );
        if( col == lastRnd ){
            return randomColor();
        } else {
            lastRnd = col;
            return col;
        }
    }
    inline
    function storeHitOffset( xy: XY, mxy: XY ){
        tempX = mxy.x - xy.x;
        tempY = mxy.y - xy.y;
    }
    override
    public function renderDraw(){
        if( movePiece ) movePenultimate();
        drawTextureShape( quadDepth.range.start, quadDepth.range.max, 0x00000000 );
        tempHackFix();
    }
    
    public function tempHackFix(){
        // need to work out why the color mode needs to be set each frame
        drawColorShape( 0, 0 );
    }
    public
    function swapLasts(): XY {
        var d1  = quadDepth.orderCount.length - 1; // last
        var d0  = d1 - 1; // penultimate
        var xy0 = quadDepth.depthPieces[ d0 ].xy;
        var xy1 = quadDepth.depthPieces[ d1 ].xy;
        var dx = xy0.x - xy1.x;
        var dy = xy0.y - xy1.y;
        var dxy: XY = { x: dx, y: dy };
        quadDepth.toTop( d0 ); // swaps last over
        quadDepth.justLocalTop( quadDepth.getPenultimate() );
        quadDepth.depthPieces[ d0 ].xy = xy0; // swap positions... later change to tween.
        quadDepth.depthPieces[ d1 ].xy = xy1;
        return dxy;
    }
    
    /*
    Uses one of penners tweening equations modified with hardcoded 's'  see:
    
    credit:

    Easing Equations v2.0
    September 1, 2003
    (c) 2003 Robert Penner, all rights reserved.
    This work is subject to the terms in http://www.robertpenner.com/easing_terms_of_use.html.
    
    */
    public inline function easeOutSubtle ( t : Float, b : Float, c : Float, d : Float ) : Float
    {
        var s = 0.1;
        return c * ( ( t = t / d - 1 ) * t * ( ( s + 1 ) * t + s) + 1 ) + b;
    }
}