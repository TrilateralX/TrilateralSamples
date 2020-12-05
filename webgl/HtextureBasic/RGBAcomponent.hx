package;
// HaxeUI stuff
import haxe.ui.components.VerticalSlider;
import haxe.ui.containers.HBox;
import haxe.ui.containers.VBox;
import haxe.ui.components.Label;
import haxe.ui.util.Color;
import haxe.ui.events.UIEvent;

class RGBAcomponent extends VBox {
    public var sRed:   Float = 0.;
    public var sBlue:  Float = 0.;
    public var sGreen: Float = 0.;
    public var sAlpha: Float = 0.;
    public var label: Label;
    public var hbox: HBox;
    public function new() {
        super();
        backgroundColor = 0xD3D3D3;
        height          = 130;
        addLabel();
        backgroundColor = 0xD3D3D3;
        hbox            = new HBox();
        addComponent( hbox );
        hbox.horizontalAlign="center";
        addColorSlider( 0xFF0000, function( v: Float ){ sRed   = v; } );
        addColorSlider( 0x00FF00, function( v: Float ){ sGreen = v; } );
        addColorSlider( 0x0000FF, function( v: Float ){ sBlue  = v; } );
        addColorSlider( 0xDCDCFF, function( v: Float ){ sAlpha = v; } );
    }
    function addLabel(){
        label = new Label();
        addComponent( label );
    }
    function addColorSlider( col: Color, setColor: Float->Void ){
        var slider = new VerticalSlider();
        slider.findComponent( "range-value" ).backgroundColor = col;
        slider.findComponent( "end-thumb"   ).backgroundColor = col;
        slider.backgroundColor = 0xc0c0c0;
        slider.pos             = 1.0;
        slider.min             = 0.0;
        slider.height          = 100;
        slider.max             = 1.0;
        slider.onChange = function( e ){
            setColor( slider.pos );
            dispatch(new UIEvent(UIEvent.CHANGE));
        }
        hbox.addComponent( slider );
    }
}