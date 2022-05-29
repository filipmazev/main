$(function () {
    var $header = $("#Title_Text");
    var header = ['Mazev F.', 'Coding', 'Photography', 'Design', 'All in one place'];
    var position = -1;
    
    !function loop() {
        position = (position + 1) % header.length;
        $header.html(header[position])
        .fadeIn(3000)
        .delay(3000)
        .fadeOut(3000, loop);
    }();
});

/* function bgChanger(){
    if(this.scrollY > this.innerHeight / 4){
        document.body.classList.add("bg-active");
        document.body.classList.remove("Title-Text-Container");
    }
    else{
        document.body.classList.remove("bg-active");
    }
}

window.addEventListener("scroll", bgChanger); */