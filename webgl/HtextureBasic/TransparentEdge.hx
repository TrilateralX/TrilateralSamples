/*  Not currently used
var result = new Image();
var img3 = new Image();
public function resizeImage( img, w, h ){
    result.width = w;
    result.height = h;
    var canvas: CanvasElement = js.Browser.document.createCanvasElement();
    canvas.width = w;
    canvas.height = h;
    canvas.getContext('2d').drawImage( img, 0, 0, w, h);
    result.src = canvas.toDataURL();
    return result;
}
public inline
function transparent( data: Uint8ClampedArray, i: Int ){
    var r = 255;
    var g = 255;
    var b = 255;
    var a = 0;
    data[ i ] = r;
    data[ i + 1 ] = g;
    data[ i + 2 ] = b;
    data[ i + 3 ] = a;
}
public function transparentEdge() {
    var ctx = mainSheet.cx;
    ctx.drawImage( img, 0, 0 );
    final imageData = ctx.getImageData( 0, 0, img.width, img.height );
    final data = imageData.data;
    var j = 1;
    var i = 0;
    while( i < data.length ){
        var top    = i < img.width*4*2;
        var bottom = i > data.length - 1 - img.width*4;
        var sides  = i % ( img.width ) == 0;
        if( top || bottom ) transparent( data, i );
        if( sides ){
            transparent( data, i );
            transparent( data, i + 4 );
            var w2 = img.width*4 - 8;
            transparent( data, i + w2 );
            transparent( data, i + w2 + 4 );
        }
        i+= 4;
    }
    ctx.putImageData( imageData, 0, 0);
    img3.src = mainSheet.canvas2D.toDataURL();
    var img2 = resizeImage( img3, img.width, img.height );
    img = img2;
    ctx.clearRect(0, 0, img.width, img.height);
}
*/