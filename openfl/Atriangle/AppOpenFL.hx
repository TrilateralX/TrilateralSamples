package;

import flash.Lib;
import flash.display.Sprite;
import flash.events.Event;
import flash.events.KeyboardEvent;
import flash.ui.Keyboard;
import flash.display.Graphics;
import flash.Vector;
import trilateral3.nodule.FlashNodule;
import trilateral3.Trilateral;
import trilateral3.drawing.Pen;
import trilateral3.geom.FlatColorTriangles;
import trilateral3.nodule.HeapsG2Nodule;
import trilateral3.geom.FlatColorTriangles;
typedef ColorPalletInt = pallette.utils.ColorInt;
// REQUIRES HAXE 4.2
class AppOpenFL extends Sprite {
    public var pen: Pen;
    public var nodule = new FlashNodule(); // same as PenNodule without transform.
    public var tri: FlatColorTriangles;
    var g:                  Graphics;
    var viewSprite:         Sprite;
    var stageRadius:        Float = 570;
    public static function main(): Void { Lib.current.addChild( new AppOpenFL() ); }
    public function new(){
        super();
        viewSprite = new Sprite();
        g = viewSprite.graphics;
        addChild( viewSprite );
        pen     = nodule.pen;
        tri     = nodule.colorTriangles;
        addEventListener( Event.ENTER_FRAME, this_onEnterFrame );
        firstDraw();
    }
    
    function firstDraw(){
        draw();
        renderToSprite();
    }
    
    function this_onEnterFrame( event: Event ): Void {
        draw();
        renderToSprite();
    }
    
    function renderToSprite(){
        var s = 1.;
        var ox = -1.;
        var oy = 1.;
        g.clear();
        var currPos = tri.pos;
        for( i in 0...nodule.size ){
             tri.pos = i; // change the position.
             var col3 = pen.colorType.getTriInt();
             var colA: ColorPalletInt = col3.a;
             g.lineStyle( 0., colA, 0. );
             // can't easily do gradient
             g.moveTo( ox + tri.ax * s, oy + tri.ay * s );
             g.beginFill( colA, tri.alphaA );
             g.lineTo( ox + tri.ax * s, oy + tri.ay * s );
             g.lineTo( ox + tri.bx * s, oy + tri.by * s );
             g.lineTo( ox + tri.cx * s, oy + tri.cy * s );
             g.endFill();
         } 
         // reset pos afterwards probably not need
         tri.pos = currPos;
    }
    // override
    public
    function draw(){
        // draw stuff once
    }
    // override
    public
    function drawRender(){
        // draw stuff every frame
    }
}