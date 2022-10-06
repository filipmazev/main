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
        if(togglePopUpMessage === true){ document.querySelector('.pop-up-message').classList.toggle('pop-up-active'); toggleMessage = 1; }
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

// Cache selectors
var lastId,
 topMenu = $("#nav"),
 topMenuHeight = topMenu.outerHeight()+1,
 // All list items
 menuItems = topMenu.find('a').not('.navItem'),
 // Anchors corresponding to menu items
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
   }                   
});

const nav_more = document.querySelector(".nav-more");
const nav_more_container = document.querySelector(".nav-inner-1");
const arrow = document.querySelector(".arrow");
let nav_more_isOn = false;

nav_more.addEventListener("click", function(){
    if(!nav_more_isOn){
        nav_more_container.classList.toggle("nav-more-active");
        arrow.classList.toggle("up");
    }
    else{
        nav_more_container.classList.remove("nav-more-active");
        arrow.classList.remove("up");
        nav_more_isOn = false;
    }
});