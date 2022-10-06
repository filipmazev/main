const header2 = document.querySelector(".h");
const hamburger = document.querySelector(".hamburger-on");
const navLinks = document.querySelector(".nav-links");
let hamburgerOpen = false;

window.addEventListener("scroll", function(){
    header2.classList.toggle("sticky", window.scrollY > 0);
});

hamburger.addEventListener("click", function(){

    if(!hamburgerOpen){
        navLinks.classList.toggle("show-navlinks");
        document.body.classList.toggle('lock-scroll');
    }
    else{
        hamburger.classList.remove("show-navlinks");
        document.body.classList.remove('lock-scroll');
        hamburgerOpen = false;
    }
});

const hamburger2 = document.querySelector(".hamburger-on");

hamburger2.addEventListener("click",()=>{
    hamburger2.classList.toggle("active");
});

var lastId,
 topMenu = $("#nav"),
 topMenuHeight = topMenu.outerHeight()+1,

 menuItems = topMenu.find('a').not('.navItem'),
 
 scrollItems = menuItems.map(function(){
   var item = $($(this).attr("href"));
    if (item.length) { return item; }
 });

menuItems.click(function(e){

    navLinks.classList.toggle("show-navlinks");
    document.body.classList.toggle('lock-scroll');
    hamburger2.classList.toggle("active");

    var href = $(this).attr("href"),
        offsetTop = href === "#" ? 0 : $(href).offset().top-topMenuHeight+1;
    $('html, body').stop().animate({ 
        scrollTop: offsetTop
    }, 50);
    e.preventDefault();
});

$(window).scroll(function(){
   var fromTop = $(this).scrollTop()+topMenuHeight;
   
   var cur = scrollItems.map(function(){
     if ($(this).offset().top < fromTop)
       return this;
   });

   cur = cur[cur.length-1];
   var id = cur && cur.length ? cur[0].id : "";
   
   if (lastId !== id) {
        lastId = id;
        menuItems
        .parent().removeClass("reached")
        .end().filter("[href=#"+id+"]").parent().addClass("reached");
        if(document.documentElement.clientWidth < 1450 && lastId != "") { window.location.hash = "#" + lastId.charAt(0); }
        if (typeof(sessionStorage) !='undefined'){ sessionStorage.setItem('scrollPosition', lastId.charAt(0)); }
   }                   
});
