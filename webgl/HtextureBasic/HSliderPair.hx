package;
// HaxeUI stuff
import haxe.ui.components.HorizontalSlider;
import haxe.ui.containers.VBox;
import haxe.ui.containers.HBox;
import haxe.ui.components.Label;
import haxe.ui.util.Color;
import haxe.ui.events.UIEvent;

class HSliderPair extends VBox {
    public var dx: Float;
    public var dy: Float;
    public var label: Label;
    public function new() {
        super();
        backgroundColor = 0xD3D3D3;
        addLabel();
        height = 60;
        addColorSlider( function( v: Float ){ dx = v; } );
        addColorSlider( function( v: Float ){ dy = v; } );
    }
    function addLabel(){
        label = new Label();
        addComponent( label );
    }
    function addColorSlider( setValue: Float->Void ){
        var slider = new HorizontalSlider();
        slider.backgroundColor = 0xc0c0c0;
        slider.pos = 100.0;
        slider.min = 0.0;
        slider.max = 300.0;
        slider.onChange = function( e ){
            setValue( slider.pos );
            dispatch(new UIEvent(UIEvent.CHANGE));
        }
        addComponent( slider );
    }
}