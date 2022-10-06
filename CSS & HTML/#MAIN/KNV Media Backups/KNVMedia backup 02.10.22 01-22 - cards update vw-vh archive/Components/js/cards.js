const modalOpenButton = document.querySelectorAll('[data-modal-target]');
const modalCloseButton = document.querySelectorAll('[data-close-button]');
const overlay = document.getElementById('overlay');
const editButton = document.querySelectorAll('[data-edit-target]');

function generateModal(option){ document.querySelector(".modal .card-items").innerHTML = generatedDivsArray[option-1]; }
modalOpenButton.forEach(button => { button.addEventListener('click', () => { var cardTitle = button.parentElement.parentElement.querySelector(".card-title");  
var cardColor = button.parentElement.parentElement.querySelector(".card-banner"); if(cardColor !== null){ cardColor = getComputedStyle(cardColor).background;
if(document.querySelector(":root") !== null){ document.querySelector(":root").style.setProperty('--modal-color', cardColor); } }
var cardAccentColor = button.parentElement.parentElement.querySelector(".card-center h2"); if(cardAccentColor !== null){ cardAccentColor = getComputedStyle(cardAccentColor).color; 
if(document.querySelector(":root") !== null){ document.querySelector(":root").style.setProperty('--modal-accent-color', cardAccentColor); } }
var cardItemColor = button.parentElement.parentElement.querySelector(".card-items .card-item"); if(cardItemColor !== null){ cardItemColor = getComputedStyle(cardItemColor).background; 
if(document.querySelector(":root") !== null){ document.querySelector(":root").style.setProperty('--modal-items-color', cardItemColor); } }
if(cardTitle !== null){ if(cardTitle !== ""){ document.querySelector(".modal .modal-header .modal-header-text").innerHTML = cardTitle.innerHTML; } } openModal(document.querySelector(button.dataset.modalTarget)) }) });
overlay.addEventListener('click', () => { const modals = document.querySelectorAll('.modal.modalActive'); modals.forEach(modal => { closeModal(modal); }) })
modalCloseButton.forEach(button => { button.addEventListener('click', () => { const modal = button.closest('.modal'); closeModal(modal); }) })
function openModal(modal) { if (modal === null){ return; } modal.classList.add('modalActive'); overlay.classList.add('modalActive'); 
document.querySelectorAll('.modal-backdrop').forEach(function changeMode(item) { item.classList.add('modalActive'); }); }

function closeModal(modal) { if (modal === null){ return; }
if(modal.querySelector(".item-add-mode").querySelectorAll(".card-item:not(.bundle-option)") !== null){ addMenuOff(); }
if(modal.querySelector('.item-edit-mode') !== null){ editorMode(modal); } 
modal.classList.remove('modalActive'); overlay.classList.remove('modalActive'); 
document.querySelectorAll('.modal-backdrop').forEach(function changeMode(item){ item.classList.remove('modalActive'); }); 
if(document.querySelector(".modal-success") !== null){ document.querySelector(".modal").classList.remove("modal-success"); } }

function removableOptions(editor){
editor.querySelectorAll('.order-items .card-item:not(.item-removed):not(.bundle-option)').forEach(function editItems(item) { item.addEventListener('click', function removeClick(){
if(editor.querySelectorAll('.order-items .card-item:not(.item-removed)').length > 1){ item.querySelector('.item-remove').classList.toggle("hide-card"); 
item.classList.toggle("item-removed"); setTimeout(function(){ item.classList.toggle("hide-card"); }, 300); refreshAddList(); } 
else{ addMenuOff(); editor.querySelector('.item-edit-mode').classList.remove('item-edit-mode'); document.getElementById('add-item').remove(); 
editor.querySelectorAll('.edit-active').forEach(function editActive(item){ item.classList.remove('edit-active'); }); } }); }); }

editButton.forEach(button => { button.addEventListener('click', () => { editorMode(document.querySelector(button.dataset.editTarget)); }) });
function editorMode(editor){ if (editor === null){ return; } editor.querySelector(".edit-button").classList.toggle("edit-active"); 
var editModeMessage = editor.querySelector(".editModeMessage"); if(editModeMessage !== null){ editModeMessage.classList.toggle("edit-active"); }
editor.querySelector('.card-items').classList.toggle('item-edit-mode'); if(editor.querySelector('.card-items .add-item') === null){
editor.querySelector('.card-items').innerHTML += '<button class="add-item" id="add-item" onclick="toggleAddMenu();"> <p>+</p> </button>'; }
else{ document.getElementById('add-item').remove(); addMenuOff(); } removableOptions(editor); }

function calculateAddList(){ var orderOptionsArray = new Array(); var empty = new Array();
for(var i=0; i<cardOptionsExtras.length; i++){ orderOptionsArray.push(cardOptionsExtras[i]); }
var items = document.querySelector(".add-item"); if(items === null){ return empty; } items = items.parentElement; if(items === null){ return empty; } 
items = items.querySelectorAll(".card-item:not(.item-removed):not(.bundle-option) p"); if(items === null){ return empty; }
items.forEach(function readItems(item){ var option = item.innerHTML.toString().replace(/\s/g, '').toLowerCase(); for(var i=0; i<orderOptionsArray.length; i++){ 
if(orderOptionsArray[i].replace(/\s/g, '').toLowerCase() === option){ orderOptionsArray.splice(i, 1); } } }); return orderOptionsArray; }

function refreshAddList(){ if((document.querySelector(".add-item").parentElement.parentElement.querySelector(".item-add-mode").querySelectorAll(".card-item:not(.bundle-option)").length +
document.querySelector(".add-item").parentElement.parentElement.querySelector(".card-item:not(.item-removed .bundle-option)").querySelectorAll(".card-item:not(.item-removed):not(.bundle-option)").length) 
=== cardOptionsArray.length){ return; } var optionsArr = calculateAddList(); var divAddOptionsCreate="";
for(var i=0; i<optionsArr.length; i++){ divAddOptionsCreate += '<div class="card-item" data-add-option> <p> ' + optionsArr[i] + ' </p> <div class="item-add"> + </div> </div>'; }
if(document.querySelector(".item-add-mode") === null){ return; } document.querySelector(".item-add-mode").innerHTML = divAddOptionsCreate; 

const addOptionItems = document.querySelectorAll('[data-add-option]'); addOptionItems.forEach(button => { button.addEventListener('click', () => { 
document.querySelector(".order-items").innerHTML = '<div class="card-item extra-option"> <p> ' + button.querySelector("p").innerHTML + ' </p> <div class="item-remove"> <hr> </div> </div>\n' + document.querySelector(".order-items").innerHTML;    
var editor = button.parentElement.parentElement; button.remove(); removableOptions(editor); }) }); }

function toggleAddMenu(){ var addButton = document.querySelector(".add-item"); var addList = document.querySelector(".item-add-mode");
if(addList !== null){ addList.classList.toggle("item-add-mode-active"); refreshAddList(); }
if(addButton !== null){ addButton.classList.toggle("add-item-clicked"); addButton.querySelector("p").innerHTML = addButton.querySelector("p").innerHTML === "+" ? "X" : "+"; } } 
function addMenuOff(){ var addButton = document.querySelector(".add-item"); var addList = document.querySelector(".item-add-mode");
if(addList !== null){ addList.classList.remove("item-add-mode-active"); }
if(addButton !== null){ addButton.classList.remove("add-item-clicked"); addButton.querySelector("p").innerHTML = addButton.querySelector("p").innerHTML === "+" ? "X" : "+"; } }

gsap.registerPlugin(Flip); let cards = document.querySelectorAll('.card-hitbox');
cards.forEach(item => { item.addEventListener('click', function cardClicked(){ if(document.documentElement.clientWidth >= maxWidth) {
items = gsap.utils.toArray('.card-workings'); let state = Flip.getState(items, {props: "backgroundColor"}); document.querySelectorAll('.card-workings').forEach(card => {
if(!card.classList.contains("compact")){ card.classList.toggle("compact"); } 
if(card !== item.parentElement){ if(!card.classList.contains("open")){ card.classList.toggle("closed"); }
else{ card.classList.toggle("closed"); card.classList.toggle("open"); } }
else{ card.classList.toggle("open"); if(card.classList.contains("closed")){ card.classList.toggle("closed"); } } });
var closed = document.querySelectorAll('.closed'); if(closed !== null && closed.length > 0){ document.querySelectorAll('.card-workings').forEach(card => {
if(card.classList.contains("open") === false && card.classList.contains("closed") == false && card !== item.parentElement){ 
card.classList.toggle("closed"); if(!card.classList.contains("compact")){ card.classList.toggle("compact"); } }
if(card.classList.contains("open") && card.classList.contains("compact")){ card.classList.toggle("compact"); }
var orderMessageToggle = card.querySelector('.card-add-button .card-add-button-content'); 
if(card.classList.contains("open")){ orderMessageToggle.innerHTML = orderMessageToggle.innerHTML === CardOrderMessage ? "+" : CardOrderMessage; }
else if(!card.classList.contains("open")){orderMessageToggle.innerHTML = "+";  } }); }
Flip.from(state, { duration: .4, ease: "power1.inOut", absolute: true, nested: true }); } }); });
function closeCard(){ if(document.documentElement.clientWidth >= maxWidth) { items = gsap.utils.toArray('.card-workings'); let state = Flip.getState(items, {props: "backgroundColor"})
var closeCard = document.querySelector(".open"); closeCard.classList.toggle("open"); 
closeCard.classList.toggle("compact"); closeCard.querySelector('.card-add-button .card-add-button-content').innerHTML = "+";
document.querySelectorAll(".closed").forEach(function removeCLose(item){ item.classList.remove("closed"); });
Flip.from(state, { duration: .4, ease: "power1.inOut", absolute: true, nested: true }); } else return; }
