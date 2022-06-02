$(function () {
    var $header = $("#Title-Text");
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