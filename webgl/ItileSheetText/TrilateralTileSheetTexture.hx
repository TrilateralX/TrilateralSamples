package;

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
import trilateral3.nodule.PenPaint;
import trilateral3.nodule.PenNodule;
import trilateral3.shape.Shaper;
import trilateral3.drawing.TriangleAbstract;
import trilateral3.drawing.TriangleAbstractUV;
import trilateral3.drawing.Color3Abstract;
import trilateral3.drawing.Nymph;
import trilateral3.shape.IndexRange;
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

function main(){
    new TrilateralTextureBasic( 1000, 1000 );
    var divertTrace = new DivertTrace();
}
class TrilateralTextureBasic extends PlyUV {
    public var nymphLetters:     Nymph;
    public var pen: Pen;
    public var allRange:         IndexRange;
    public var penPaint = new PenPaint();
    public function new( width: Int, height: Int ){
        super( width, height );
        trace( 'draw' );
        imageLoader.loadEncoded( [ 'font1AlphaWhite.png' ],[ 'font1AlphaWhite' ] );
    }
    
    public function drawn( img: Image ){
        this.img = img;
        return img;
    }
    override
    public function draw(){
        img =  imageLoader.imageArr[ 0 ];
        var w            = img.width;
        var h            = img.height;
        //mainSheet.cx.drawImage( img, 0, 0, w, h );  // this line should not be needed!!
        dataGL           = { get_data: penPaint.get_data
                           , get_size: penPaint.get_size };
        pen              = penPaint.pen;
        var start = pen.pos;
        pen.useTexture   = true;
        pen.currentColor = 0xff000000;//
        
        var sketch       = new Sketch( pen, StyleSketch.Fine, StyleEndLine.no );
        sketch.width     = 8;
        pen.z2D = -0.1;
        allRange = { start: Std.int( pen.pos ), end: 0 };
        nymphLetters = new Nymph( pen, allRange );
        var inputStr = 'Trilateral3';
        letterGrid( img, inputStr );
        allRange.end = Std.int( pen.pos );
        var count = 0;
        var val: Float;
        var curr = pen.triangleCurrent;
        for( i in allRange.start...allRange.end ){
             count = Math.floor( i/2 );
             pen.pos = i;
             val = 100 + 80*count;
             curr.x = (val-1000)/1000;
             val = 500;
             curr.y = -(val-1000)/1000;
        }
        transformUV( gl, program, uvTransform, [ 2.,0.,0.
                                               , 0.,2.,0.
                                               , 0.,0.,1.] );
    }
    var theta = 0.;
    override
    public function renderDraw(){
        nymphLetters.setColor( 0xFF000000 + Math.round( 0xFF*theta ) );
        var curr = pen.triangleCurrent;
        var val = 0.;
        for( i in allRange.start...allRange.end ){
             pen.pos = i;
             val = 500 + 20* Math.sin( theta );
             curr.y = -(val-1000)/1000;
             theta += Math.PI/10;
        }
        drawShape( allRange.start, allRange.end, 0 );// 0x0f000000 );
    }
    inline
    function letterGrid( img: Image, letter: String ){
        var noW = 10;
        var noH = 10;
        var dw = img.width*2/11;
        var dh = img.height*2/11;
        for( charNo in 0...letter.length ){
            var charCode = letter.charCodeAt( charNo );
            var id = charCode - 97 + 65;
            var row           = Math.floor( id/noW );
            var col           = id - row*noH;
            var dx = col*dw - 6;
            var dy = row*dw - 6; // dw here seems wrong needs more effort.
            //   A   B
            //   D   C
            // A B D
            // B C D
            var A = { x: dx,         y: dy };
            var B = { x: dx + dw, y: dy };
            var C = { x: dx + dw, y: dy + dh - 4 };
            var D = { x: dx,         y: dy + dh - 4}
            pen.triangle2DFill( A.x, A.y, B.x, B.y, D.x, D.y );
            pen.triangle2DFill( B.x, B.y, C.x, C.y, D.x, D.y );
        }
    }
}