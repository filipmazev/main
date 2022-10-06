var bgLenght = "230%";

var gradientTween = new TimelineMax();
var $body = $("body");

if( /Android|webOS|iPhone|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) {
    bgLenght = "270%";

    var colors = [
      { top: "#6D00FF", mobile: "#eadaff", middle: "white", bottom: "white" },
      { top: "white", mobile: "white", middle: "white", bottom: "black" },
      { top: "black", mobile: "black", middle: "black", bottom: "#6D00FF" },
    ];
  
    for (let i = 0; i < colors.length; i++) {
      gradientTween.to($body, 1, {
        backgroundImage:
          "-webkit-linear-gradient(top, " +
          colors[i].top +
          " 0%, " +
          colors[i].mobile +
          " 20%, " +
          colors[i].middle +
          " 50%, " +
          colors[i].bottom +
          " 90%)"
      });
    }
}

else{
  var colors = [
    { top: "#6D00FF", middle: "white", bottom: "white" },
    { top: "white", middle: "white", bottom: "black" },
    { top: "black", middle: "black", bottom: "#6D00FF" }
  ];

  for (let i = 0; i < colors.length; i++) {
    gradientTween.to($body, 1, {
      backgroundImage:
        "-webkit-linear-gradient(top, " +
        colors[i].top +
        " 0%, " +
        colors[i].middle +
        " 60%, " +
        colors[i].bottom +
        " 90%)"
    });
  }
}

var ctrl = new ScrollMagic.Controller();

var gradientScene = new ScrollMagic.Scene({
  triggerElement: ".wrapper",
  triggerHook: 0,
  duration: bgLenght
})
  .addTo(ctrl)
  .setTween(gradientTween);

$(".section").each(function() {
  var scene = new ScrollMagic.Scene({
    triggerElement: this,
    triggerHook: "onCenter"
  })
  
    .addTo(ctrl);

  var currentTrigger = $(scene.triggerElement()).attr("id");
  console.log(currentTrigger);
});
