#if useTypeDef
typedef NextToCore = {
    var width:  Int;
    var item:   Int;
    var target: Int;
}
#else
@:structInit
class NextToCore {
    public var width:  Int;
    public var item:   Int;
    public var target: Int;
    public function new( width: Int, item: Int, target: Int ){
    	this.width  = width;
    	this.item   = item;
    	this.target = target;
    }
}
#end
// usage 
// trace(({ width: 7, item: 8, target: 9 }:NextTo).check() );
@:forward
abstract NextTo( NextToCore ) from NextToCore {
    function new( nextToCore: NextToCore ){
        this = nextToCore;
    }
    public inline
    function check(): Bool {
        var colItem   = column( this.item );
    	var colTarget = column( this.target );
        var rowItem   = row( this.item, colItem );
        var rowTarget = row( this.target, colTarget );
        var sameCol = ( colItem == colTarget );
        var sameRow = ( rowItem == rowTarget );
        return if( sameCol ){
            above1() || below1();
        } else if( sameRow ){
            left1() || right1();
        } else {
            return false;
        }
    }
    public inline
    function increment(): Int {
        this.item = this.target + 1;
        if( check() ){
            return this.item;
        } else {
            return -1;
        }
    }
    public inline
    function decrement(): Int {
        return if( this.target == 0 ){
            -1;
        } else {
            this.item = this.target - 1;
            if( check() ){
               this.item;
            } else {
                -1;
            }
        }
    }
    public inline
    function nextRow(): Int {
        this.item = this.target;
        return this.item + this.width;
    }
    public inline
    function prevRow(): Int {
        var colTarget = column( this.target );
        return if( row( this.target, colTarget ) == 0 ){
            -1;
        } else {
            this.item = this.target - this.width;
        }
    }
    inline
    function column( val: Int ): Int {
        return val % this.width;
    }
    inline
    function row( val: Int, valColumn: Int ): Int {
        return cast ( val - valColumn )/this.width;
    }
    inline
    function above1(): Bool {
        return difTarget() == -this.width;
    }
    inline
    function below1(): Bool {
        return difTarget() == this.width;
    }
    inline
    function left1(): Bool {
        return difTarget() == -1;
    }
    inline
    function right1(): Bool {
        return difTarget() == 1;
    }
    inline 
    function difTarget():Int {
        return this.target - this.item;
    }
}