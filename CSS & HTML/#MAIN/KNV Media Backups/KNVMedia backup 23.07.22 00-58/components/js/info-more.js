const project_info_toggle1 = document.querySelector(".info-btn1");
const project_info1 = document.querySelector(".content1");

project_info_toggle1.addEventListener("click", function(){
    project_info1.classList.toggle("info-active");

    document.getElementById("info-more1").textContent === '−' ? 
    document.getElementById("info-more1").textContent = '+' : 
    document.getElementById("info-more1").textContent = '−';
});

const project_info_toggle2 = document.querySelector(".info-btn2");
const project_info2 = document.querySelector(".content2");

project_info_toggle2.addEventListener("click", function(){
    project_info2.classList.toggle("info-active");

    document.getElementById("info-more2").textContent === '−' ? 
    document.getElementById("info-more2").textContent = '+' : 
    document.getElementById("info-more2").textContent = '−';
});

const project_info_toggle3 = document.querySelector(".info-btn3");
const project_info3 = document.querySelector(".content3");

project_info_toggle3.addEventListener("click", function(){
    project_info3.classList.toggle("info-active");

    document.getElementById("info-more3").textContent === '−' ? 
    document.getElementById("info-more3").textContent = '+' : 
    document.getElementById("info-more3").textContent = '−';
});

const project_info_toggle4 = document.querySelector(".info-btn4");
const project_info4 = document.querySelector(".content4");

project_info_toggle4.addEventListener("click", function(){
    project_info4.classList.toggle("info-active");

    document.getElementById("info-more4").textContent === '−' ? 
    document.getElementById("info-more4").textContent = '+' : 
    document.getElementById("info-more4").textContent = '−';
});
