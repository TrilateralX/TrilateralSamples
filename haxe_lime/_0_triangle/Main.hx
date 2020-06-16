package;
import kitGL.glLime.setup.MainLime;
import kitGL.glLime.setup.IAppGL;
class Main extends MainLime {
    public
    function new(){
        #if js
        var divertTrace = new kitGL.glWeb.DivertTrace();
        #end
        appCreate = cast TrilateralLimeTriangle.new;
        super();
        
    }
}