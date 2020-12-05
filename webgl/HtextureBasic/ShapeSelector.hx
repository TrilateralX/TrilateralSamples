package;
// HaxeUI stuff
import haxe.ui.containers.Group;
import haxe.ui.components.OptionBox;
import haxe.ui.components.Label;
import haxe.ui.util.Color;
import haxe.ui.events.UIEvent;

class ShapeSelector extends Group {
    public var label: Label;
    public function new() {
        super();
        backgroundColor = 0xD3D3D3;
        paddingLeft     = 5;
        paddingTop      = 5;
        paddingRight    = 5;
        paddingBottom   = 5;
        layoutName      = 'vertical';
        addLabel();
        label.text      = 'Shape Selection';
        addOption('star outline');
        addOption('star fill');
        addOption('kiwi outline');
        addOption('kiwi fill');
    }
    function addLabel(){
        label = new Label();
        addComponent( label );

    }
    function addOption( name: String ){
        var option  = new OptionBox();
        option.text = name;
        option.id   = name.split(' ').join('');
        addComponent( option );
    }
}