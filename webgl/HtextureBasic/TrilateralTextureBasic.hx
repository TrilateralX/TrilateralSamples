package;

// HaxeUI stuff
import haxe.ui.HaxeUIApp;
import haxe.ui.Toolkit;
import haxe.ui.components.HorizontalSlider;
import haxe.ui.components.VerticalSlider;
import haxe.ui.containers.VBox;
import haxe.ui.containers.HBox;
import haxe.ui.components.Label;
import haxe.ui.core.Component;
import haxe.ui.macros.ComponentMacros;
import haxe.ui.components.CheckBox;
import haxe.ui.util.Color;
import haxe.ui.containers.Group;
import haxe.ui.components.OptionBox;

import RGBAcomponent;
import HSliderPair;
import ShapeSelector;
import js.Browser;
import js.html.Element;

import kitGL.glWeb.PlyUV;
import kitGL.glWeb.Ply;
import kitGL.glWeb.DataGL;
import kitGL.glWeb.ImageGL;
import js.Browser;
import js.html.CanvasElement;
import js.lib.Uint8ClampedArray;
// Color pallettes
import pallette.simple.QuickARGB;
import pallette.metal.Gold;

// Sketching
import trilateral3.drawing.Pen;
import trilateral3.geom.FlatColorTriangles;
import trilateral3.nodule.PenTexture;
import trilateral3.nodule.PenColor;
import trilateral3.shape.Shaper;
import trilateral3.drawing.TriangleAbstract;
import trilateral3.drawing.TriangleAbstractUV;
import trilateral3.drawing.Color3Abstract;
import trilateral3.drawing.Nymph;
import trilateral3.shape.IteratorRange;
import trilateral3.Trilateral;

import dsHelper.flatInterleave.FloatColorTrianglesUV;

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

import hxGeomAlgo.Tess2;

import js.html.ImageElement;
import js.html.Image;
// To trace on screen
import kitGL.glWeb.DivertTrace;

import HaxeLogo;

function main(){
    new TrilateralTextureBasic( 1000, 1000 );
    var divertTrace = new DivertTrace();
}
class TrilateralTextureBasic extends PlyUV {
    public var nymphStarOutline: Nymph;
    public var nymphStarFill:    Nymph;
    public var nymphKiwiOutline: Nymph;
    public var nymphKiwiFill:    Nymph;
    public var bgStarOutline     = 0xFFFFFFFF;
    public var bgStarFill        = 0xFFFFFFFF;
    public var bgKiwiOutline     = 0xFFFFFFFF;
    public var bgKiwiFill        = 0xFFFFFFFF;
    public var pen: Pen;
    public var starOutlineShow   = true;
    public var starFillShow      = true;
    public var kiwiOutlineShow   = true;
    public var kiwiFillShow      = true;
    public var sliderU: Float = 0;
    public var sliderV: Float = 0;
    public var sliderX: Float = 0;
    public var sliderY: Float = 0;
    public var sliderARGB: Int = 0xFFFFFFFF;
    public var sliderBgARGB: Int = 0xFFFFFFFF;
    public var outlineStarRange: IteratorRange;
    public var fillStarRange:    IteratorRange;
    public var outlineKiwiRange: IteratorRange;
    public var fillKiwiRange:    IteratorRange;
    public var penPaint = new PenTexture();
    //public var penNodule = new PenNodule();
    public function new( width: Int, height: Int ){
        super( width, height );
        trace( 'draw' );
        imageLoader.loadEncoded( [ HaxeLogo.png, 'font1AlphaWhite.png' ],[ 'haxelogo','font1AlphaWhite' ] );
    }
    
    public function drawn( img: Image ){
        this.img = img;
        return img;
    }
    override
    public function draw(){
        sliderSetup();
        
        img =  imageLoader.imageArr[ 0 ];
        var w            = img.width;
        var h            = img.height;
        //mainSheet.cx.drawImage( img, 0, 0, w, h );  // this line should not be needed!!
        dataGL           = { get_data: penPaint.get_data
                           , get_size: penPaint.get_size };
        pen              = penPaint.pen;
        var start = pen.pos;
        pen.useTexture   = true;
        pen.currentColor = Red;//
        
        var sketch       = new Sketch( pen, StyleSketch.Fine, StyleEndLine.no );
        sketch.width     = 8;
        
        pen.z2D = -0.1;
        var posMin = Std.int( pen.pos );
        //outlineStarRange = { start: Std.int( pen.pos ), end: 0 };
        drawStar( sketch, 3 );
        pen.z2D = 0.2;
        
        outlineStarRange = posMin...Std.int( pen.pos -1 );
        nymphStarOutline = Nymph.iterNymph( pen, outlineStarRange );
        
        //fillStarRange = { start: Std.int( pen.pos ), end: 0 };
        posMin = Std.int( pen.pos );
        triangulate( pen, sketch, polyK );
        fillStarRange = posMin...Std.int( pen.pos -1 );
        nymphStarFill = Nymph.iterNymph( pen, fillStarRange );
        
        //pen.useTexture   = false;
        pen.currentColor = Green;
        pen.z2D = -0.1;
        var sketch       = new Sketch( pen, StyleSketch.Fine, StyleEndLine.both );
        sketch.width     = 8;
        //outlineKiwiRange = { start: Std.int( pen.pos ), end: 0 };
        posMin = Std.int( pen.pos );
        drawBird( sketch );
        outlineKiwiRange = posMin...Std.int( pen.pos -1 );
        nymphKiwiOutline = Nymph.iterNymph( pen, outlineKiwiRange );
        /*
    tess2;
    polyK;
    poly2tri;
        */
        //fillKiwiRange = { start: Std.int( pen.pos ), end: 0 };
        posMin = Std.int( pen.pos );
        triangulate( pen, sketch, tess2 );
        fillKiwiRange = posMin...Std.int( pen.pos -1 );
        nymphKiwiFill = Nymph.iterNymph( pen, fillKiwiRange );
        transformUV( gl, program, uvTransform, [ 2.,0.,0.
                                               , 0.,2.,0.
                                               , 0.,0.,1.] );
        //trace( penNodule.colorTriangles.prettyEverything().split('\n').join('<br>') );
    }
    public function drawBird( sketch: Sketch ){
        var scaleTranslateContext = new ScaleTranslateContext( sketch, 0, 0, 1.5, 1.5 );
        var p            = new SvgPath( scaleTranslateContext );
        p.parse( bird_d );
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
    override
    public function renderDraw(){
        var aRange: IteratorRange = 
        switch( shapeSelected ){
            case 'staroutline':
                nymphStarOutline.dMoveXYUV( sliderX, sliderY, sliderU, sliderV );
                nymphStarOutline.setColor( sliderARGB );
                bgStarOutline = sliderBgARGB;
                outlineStarRange;
            case 'starfill':
                nymphStarFill.dMoveXYUV( sliderX, sliderY, sliderU, sliderV );
                nymphStarFill.setColor( sliderARGB );
                bgStarFill = sliderBgARGB;
                fillStarRange;
            case 'kiwioutline':
                nymphKiwiOutline.dMoveXYUV( sliderX, sliderY, sliderU, sliderV );
                nymphKiwiOutline.setColor( sliderARGB );
                bgKiwiOutline = sliderBgARGB;
                outlineKiwiRange;
            case 'kiwifill':
                nymphKiwiFill.dMoveXYUV( sliderX, sliderY, sliderU, sliderV );
                nymphKiwiFill.setColor( sliderARGB );
                bgKiwiFill = sliderBgARGB;
                fillKiwiRange;
            default:
                null;
        }
        if( starOutlineShow ) drawShape( outlineStarRange.start, outlineStarRange.max, bgStarOutline );
        if( starFillShow )    drawShape( fillStarRange.start,    fillStarRange.max, bgStarFill       );
        if( kiwiOutlineShow ) drawShape( outlineKiwiRange.start, outlineKiwiRange.max, bgKiwiOutline );
        if( kiwiFillShow )    drawShape( fillKiwiRange.start,    fillKiwiRange.max, bgKiwiFill       );
    }
    public var shapeSelected: String;
    public function sliderSetup(){
        Toolkit.init();
        var vbox = new VBox();
        vbox.paddingLeft = 5;
        vbox.paddingTop = 5;
        vbox.ready();
        Browser.document.body.appendChild( vbox.element );
        var shapeSelector = new ShapeSelector();
        vbox.addComponent( shapeSelector );
        shapeSelector.onChange = function( e ){
             var ob = cast(e.target, OptionBox);
             if (ob.selected) {
                shapeSelected = ob.id;
                trace('${ob.id} selected!');
             }
        };
        var sliderPairUV = new HSliderPair();
        sliderPairUV.label.text = ' image u,v position';
        vbox.addComponent( sliderPairUV );
        sliderPairUV.onChange = function( e ){
            sliderU = sliderPairUV.dx;
            sliderV = sliderPairUV.dy;
        }
        var sliderPairXY = new HSliderPair();
        sliderPairXY.label.text = ' vector x,y position';
        vbox.addComponent( sliderPairXY );
        sliderPairXY.onChange = function( e ){
            sliderX = sliderPairXY.dx;
            sliderY = sliderPairXY.dy;
        }
        var shapeBgcolor = new RGBAcomponent();
        shapeBgcolor.label.text = ' Background Color ';
        vbox.addComponent( shapeBgcolor );
        shapeBgcolor.onChange = function( e ){
            sliderBgARGB = ( toHexInt( shapeBgcolor.sAlpha ) << 24 ) 
                     | ( toHexInt( shapeBgcolor.sRed ) << 16 ) 
                     | ( toHexInt( shapeBgcolor.sGreen ) << 8 ) 
                     |   toHexInt( shapeBgcolor.sBlue );
        }
        var starTextureColor = new RGBAcomponent();
        starTextureColor.label.text = 'Selected Texture Color ';
        vbox.addComponent( starTextureColor );
        starTextureColor.onChange = function( e ){
             sliderARGB = ( toHexInt( starTextureColor.sAlpha ) << 24 ) 
                     | ( toHexInt( starTextureColor.sRed ) << 16 ) 
                     | ( toHexInt( starTextureColor.sGreen ) << 8 ) 
                     |   toHexInt( starTextureColor.sBlue );
        }
        var checkBoxImgAlpha = new CheckBox();
        checkBoxImgAlpha.text = ' no image alpha  ';
        checkBoxImgAlpha.backgroundColor = 0xD3D3D3;
        checkBoxImgAlpha.onClick = function ( e ){
            if( checkBoxImgAlpha.selected ){
                notAlpha();
            } else {
                withAlpha();
            }
        }
        vbox.addComponent( checkBoxImgAlpha );
        
        var checkBoxHideStarOutline = new CheckBox();
        checkBoxHideStarOutline.text = ' hide star outline  ';
        checkBoxHideStarOutline.backgroundColor = 0xD3D3D3;
        checkBoxHideStarOutline.onClick = function ( e ){
            starOutlineShow = !checkBoxHideStarOutline.selected;
        }
        vbox.addComponent( checkBoxHideStarOutline );
        
        var checkBoxHideStarFill = new CheckBox();
        checkBoxHideStarFill.text = ' hide star fill  ';
        checkBoxHideStarFill.backgroundColor = 0xD3D3D3;
        checkBoxHideStarFill.onClick = function ( e ){
            starFillShow = !checkBoxHideStarFill.selected;
        }
        vbox.addComponent( checkBoxHideStarFill  );
        
        var checkBoxHideKiwiOutline = new CheckBox();
        checkBoxHideKiwiOutline.text = ' hide kiwi outline  ';
        checkBoxHideKiwiOutline.backgroundColor = 0xD3D3D3;
        checkBoxHideKiwiOutline.onClick = function ( e ){
            kiwiOutlineShow = !checkBoxHideKiwiOutline.selected;
        }
        vbox.addComponent( checkBoxHideKiwiOutline  );
        
        var checkBoxHideKiwiFill = new CheckBox();
        checkBoxHideKiwiFill.text = ' hide kiwi fill  ';
        checkBoxHideKiwiFill.backgroundColor = 0xD3D3D3;
        checkBoxHideKiwiFill.onClick = function ( e ){
            kiwiFillShow = !checkBoxHideKiwiFill.selected;
        }
        vbox.addComponent( checkBoxHideKiwiFill  );
    }
    inline
    function toHexInt( c: Float ): Int
        return Math.round( c * 255 );
    var bird_d = "M210.333,65.331C104.367,66.105-12.349,150.637,1.056,276.449c4.303,40.393,18.533,63.704,52.171,79.03c36.307,16.544,57.022,54.556,50.406,112.954c-9.935,4.88-17.405,11.031-19.132,20.015c7.531-0.17,14.943-0.312,22.59,4.341c20.333,12.375,31.296,27.363,42.979,51.72c1.714,3.572,8.192,2.849,8.312-3.078c0.17-8.467-1.856-17.454-5.226-26.933c-2.955-8.313,3.059-7.985,6.917-6.106c6.399,3.115,16.334,9.43,30.39,13.098c5.392,1.407,5.995-3.877,5.224-6.991c-1.864-7.522-11.009-10.862-24.519-19.229c-4.82-2.984-0.927-9.736,5.168-8.351l20.234,2.415c3.359,0.763,4.555-6.114,0.882-7.875c-14.198-6.804-28.897-10.098-53.864-7.799c-11.617-29.265-29.811-61.617-15.674-81.681c12.639-17.938,31.216-20.74,39.147,43.489c-5.002,3.107-11.215,5.031-11.332,13.024c7.201-2.845,11.207-1.399,14.791,0c17.912,6.998,35.462,21.826,52.982,37.309c3.739,3.303,8.413-1.718,6.991-6.034c-2.138-6.494-8.053-10.659-14.791-20.016c-3.239-4.495,5.03-7.045,10.886-6.876c13.849,0.396,22.886,8.268,35.177,11.218c4.483,1.076,9.741-1.964,6.917-6.917c-3.472-6.085-13.015-9.124-19.18-13.413c-4.357-3.029-3.025-7.132,2.697-6.602c3.905,0.361,8.478,2.271,13.908,1.767c9.946-0.925,7.717-7.169-0.883-9.566c-19.036-5.304-39.891-6.311-61.665-5.225c-43.837-8.358-31.554-84.887,0-90.363c29.571-5.132,62.966-13.339,99.928-32.156c32.668-5.429,64.835-12.446,92.939-33.85c48.106-14.469,111.903,16.113,204.241,149.695c3.926,5.681,15.819,9.94,9.524-6.351c-15.893-41.125-68.176-93.328-92.13-132.085c-24.581-39.774-14.34-61.243-39.957-91.247c-21.326-24.978-47.502-25.803-77.339-17.365c-23.461,6.634-39.234-7.117-52.98-31.273C318.42,87.525,265.838,64.927,210.333,65.331zM445.731,203.01c6.12,0,11.112,4.919,11.112,11.038c0,6.119-4.994,11.111-11.112,11.111s-11.038-4.994-11.038-11.111C434.693,207.929,439.613,203.01,445.731,203.01z";
}