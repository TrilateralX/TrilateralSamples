package;
import glfw.GLFW.*;
import gluon.webgl.GLContext;
import gluon.webgl.GLProgram;
import gluon.webgl.GLBuffer;

import kitGL.gluon.Shaders;
import kitGL.gluon.HelpGL;
import kitGL.gluon.BufferGL;

import trilateral3.Trilateral;
import trilateral3.drawing.Pen;
import trilateral3.geom.FlatColorTriangles;
import trilateral3.nodule.PenNodule;

class AppGL{
    public var gl: GLContext;
    public var program: GLProgram;
    public var pen: Pen;
    public var penNodule = new PenNodule();
    public var width:  Int;
    public var height: Int;
    public var buf: GLBuffer;
    public
    function new( width_: Int, height_: Int ){
        width = width_;
        height = height_;
    }
    inline
    public function createWindow(){
        if(glfwInit() != 0){
            var window = glfwCreateWindow(1000, 1000, "trilateralGluonChange", null, null);
            glfwMakeContextCurrent(window);
            gl = new gluon.webgl.native.GLContext();
            while (glfwWindowShouldClose(window) != GLFW_TRUE){
                setup();
                break;
            }
            while (glfwWindowShouldClose(window) != GLFW_TRUE){
              render();
              glfwPollEvents();
            }
        }else{
            throw 'GLFW init fail';
        }
    }
    inline
    function setup(){
        program = programSetup( gl, vertexString0, fragmentString0 );
        draw( penNodule.pen );
        buf = interleaveXYZ_RGBA( gl
                                , program
                                , cast penNodule.data
                                , 'vertexPosition', 'vertexColor', true );
        trace('setup');
    }
    // override this for drawing initial scene
    public
    function draw( pen: Pen ){
    }
    /*
    @:keep
    static public function onFrame() {
        cpp.vm.Gc.run(true);
        //var t_s = haxe.Timer.stamp();
        //appGL.render();
        trace('onFrame');
    }*/
    public
    function render(){
        clearAll( gl, width, height );
        renderDraw( penNodule.pen );
        gl.bindBuffer( BufferTarget.ARRAY_BUFFER, buf );
        gl.bufferSubData( BufferTarget.ARRAY_BUFFER, 0, cast penNodule.data );
        gl.useProgram( program );
        gl.drawArrays( DrawMode.TRIANGLES, 0, penNodule.size );
    }
    // override this for drawing every frame or changing the data.
    public
    function renderDraw( pen: Pen ){
    }
}