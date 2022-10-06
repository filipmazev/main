if( /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) { }
else{

let col = function(x, y, r, g, b){
    var gray = ((r+g+b) / 3) * 1.7; gray = gray > 255 ? 255 : gray; gray = gray < 230 ? 230 : gray;
    var tag = window.location.hash;

    if(tag === "#1" || tag === "" || tag === "#0"){ document.getElementById("1home").style.background =  "-webkit-linear-gradient(top, rgb(109,0,255), rgb(109,0,255), rgb(" + 255 + "," + g + "," + 255 + ")"; }
    if(tag === "#2"){ document.getElementById("2about").style.backgroundImage = "-webkit-linear-gradient(top, rgba(255,255,255,1), rgba(255,255,255,0.5), rgba(255,255,255,0), transparent), \n\
    -webkit-linear-gradient(bottom, rgb(" + gray + "," + gray + "," + gray + "), rgb(255,255,255), transparent)"; }
    if(tag === "#3"){ document.getElementById("3workings").style.background =  "-webkit-linear-gradient(top, rgb(0,0,0), rgb(0,0,0), rgb(" + (r*0.35) + "," + 0 + "," + (b*0.6) + ")"; }
    if(tag === "#4" || tag === "#3"){ document.getElementById("4contact").style.background =  "-webkit-linear-gradient(top, rgb(109,0,255), rgb(109,0,255), rgb(" + r + "," + g + "," + b + ")"; }
}

let R = function(x, y, t){ return ( Math.floor(135 + 44 * Math.cos( (x * x - y * y) / 300 + t ) ) ) }
let G = function(x, y, t){ return  ( Math.floor(155 + 44 * Math.sin( (x * x * Math.cos( t / 4 ) + y * y * Math.sin( t / 3 ) ) / 300 ) ) ) }
let B = function(x, y, t){ return  ( Math.floor(205 + 64 * Math.sin(5 * Math.sin( t / 9 ) + ( (x - 100) * (x - 100) + (y - 100) * (y-100) ) / 1100 ) ) ) }
let t = 0;

let run = function(){
    for(x = 0; x <= 35; x++){
        for(y = 0; y <= 35; y++){
            col(x, y, R(x, y, t), G(x, y, t), B(x, y, t) )
        }
    }

    t = t + 0.035
    window.requestAnimationFrame(run)
}

run() 
}