package;
import kitGL.gluon.Glwrapper;
import kitGL.gluon.Animate;
function main(){
    var animate          = new Animate();
    var glWrapper        = new Glwrapper();
    var trilateralTri    = new TrilateralEllipse( glWrapper.gl );
    trilateralTri.setup();
    glWrapper.onFrame    = trilateralTri.render;
    glWrapper.onStop     = animate.stop;
    animate.onEnterFrame = glWrapper.mainLoop;
    animate.start();
}