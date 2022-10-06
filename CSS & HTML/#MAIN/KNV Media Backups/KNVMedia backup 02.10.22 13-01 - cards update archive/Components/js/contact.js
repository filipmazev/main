function WordCount(str) { 
    return str.trim().split(/\s+/).length;
}

function charCount(str){
    var count = 0;
    for (var i = 0; i < str.length; i++) {
        if (str[i] !== ' '){ count++; }
    } return count;
}

const validateEmail = (email) => {
    let regex = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    if(email.toLowerCase().match(regex)){ return true; } else { return false; }
};

function toggleContactBar(element, classToToggle1, classToToggle2, color, toggleClass, mode){ 
    element.style.setProperty('border-color', color, 'important'); element.style.setProperty('background', color, 'important');
    if(!classToToggle1.classList.contains(toggleClass)){
    if(mode === false){ classToToggle1.classList.add(toggleClass); classToToggle2.classList.add(toggleClass); } 
    else{ if(classToToggle1 !== null){ classToToggle1.classList.remove(toggleClass); } if(classToToggle2 !== null){ classToToggle2.classList.remove(toggleClass); } } }
}

function validateForm(){
    var checkMail = document.getElementById('email').value;
    var checkMessage = document.getElementById('message').value;
    var checkerMessage = 0, checkerMail = 0; const minWords = 3, minChar = 6;

    if(checkMessage === ""){ toggleContactBar(document.getElementById('hr-message'), document.querySelector(".hr-message"), document.querySelector(".input-message"), "#ff6961", "anim-wrong", false); checkerMessage = 1; }
    else if(WordCount(checkMessage) < minWords && charCount(checkMessage) < minChar){ toggleContactBar(document.getElementById('hr-message'), document.querySelector(".hr-message"), document.querySelector(".input-message"), "#ff6961", "anim-wrong", false); checkerMessage = 1; }
    else{ toggleContactBar(document.getElementById('hr-message'), document.querySelector(".hr-message"), document.querySelector(".input-message"), "white", "anim-wrong", true); checkerMessage = 0; }

    if(checkMail === ""){ toggleContactBar(document.getElementById('hr-mail'), document.querySelector(".hr-mail"), document.querySelector(".input-mail"), "#ff6961", "anim-wrong", false); checkerMail = 1; }
    else if(!validateEmail(checkMail)){ toggleContactBar(document.getElementById('hr-mail'), document.querySelector(".hr-mail"), document.querySelector(".input-mail"), "#ff6961", "anim-wrong", false); checkerMail = 1; }
    else{ toggleContactBar(document.getElementById('hr-mail'), document.querySelector(".hr-mail"), document.querySelector(".input-mail"), "white", "anim-wrong", true); checkerMail = 0; }

    return (checkerMessage === 0 && checkerMail === 0) ? true : false;
}

function sendMessage(){
    document.getElementById("contact_form").reset();
    document.getElementById('hr-message').style.borderColor = "white"; 
    document.getElementById('hr-message').style.background = "white";
    document.getElementById('hr-mail').style.borderColor = "white"; 
    document.getElementById('hr-mail').style.background = "white";  

    var ContactButton = document.getElementById('contact_button'); ContactButton.innerHTML = ContactButtonMessage2;
    setTimeout(function(){ ContactButton.innerHTML = ContactButtonMessage1; }, 1300);
}

function sendEmail(){
    document.getElementById("contact_form").classList.add("form-submited");

    if(validateForm() === true){
        if(document.getElementById("contact_form").classList.contains("form-submited")){ 
            document.getElementById("contact_form").classList.remove("form-submited"); 
        }

        var eName = document.getElementById('name').value;
        var eMail = document.getElementById('email').value;
        var eSubject = document.getElementById('subject').value;
        var eMessage = document.getElementById('message').value;
        var eBody = 'name: ' + eName + '<br/> email: ' + eMail + '<br/> message: ' + eMessage;

        Email.send({
            SecureToken: MySecureToken,
            To: ContactSendTo,
            From: ContactSendTo,
            Subject: eSubject === "" ? ContactDefaultSubject : eSubject,
            Body: eBody
        }).then(
            sendMessage()
        );
    }

    else { return false; }
}

/* for the modal: */

function validateModal(){
    var checkMailModal = document.getElementById('email-modal').value; var checkerMailModal = 0;

    if(checkMailModal === ""){ toggleContactBar(document.getElementById('hr-mail-modal'), document.querySelector(".hr-mail-modal"), document.querySelector(".input-mail-modal"), "#ff6961", "anim-wrong", false); checkerMailModal = 1; }
    else if(!validateEmail(checkMailModal)){ toggleContactBar(document.getElementById('hr-mail-modal'), document.querySelector(".hr-mail-modal"), document.querySelector(".input-mail-modal"), "#ff6961", "anim-wrong", false); checkerMailModal = 1; }
    else{ toggleContactBar(document.getElementById('hr-mail-modal'), document.querySelector(".hr-mail-modal"), document.querySelector(".input-mail-modal"), "#a3a3a3", "anim-wrong", true); checkerMailModal = 0; }

    return (checkerMailModal === 0) ? true : false;
}

function sendMessageModal(){
    document.getElementById("contact-form-modal").reset();
    document.getElementById('hr-mail-modal').style.borderColor = "#a3a3a3"; document.getElementById('hr-mail-modal').style.background = "#a3a3a3";  

    var ContactButtonModal = document.getElementById('modal-form-button'); if(ContactButtonModal !== null){ ContactButtonModal.innerHTML = ModalButtonMessage2;
    setTimeout(function(){ ContactButtonModal.innerHTML = ModalButtonMessage1; }, 1300); }

    var modalSelect = document.querySelector(".modal"); if(modalSelect !== null){ modalSelect.classList.add("modal-success");
    setTimeout(function(){ closeModal(modalSelect) }, 10000); }
}

function orderModal(){
    if(validateModal() === true){ var orderMessage = ModalOrderMessageStart + '\n'; var bundleTitle = document.querySelector(".modal .modal-header .modal-header-text"); if(bundleTitle !== null){ bundleTitle = bundleTitle.innerHTML; if(bundleTitle !== ""){ orderMessage += "bundle: " + bundleTitle.toLowerCase() + "\n"; } }
    document.querySelector(".order-items").querySelectorAll(".card-item:not(.item-removed)").forEach(function createOrder(item){ orderMessage += '•' + item.querySelector("p").innerHTML.toLowerCase() + '\n'; });
    if(document.getElementById("contact-form-modal").classList.contains("form-submited")){ document.getElementById("contact-form-modal").classList.remove("form-submited"); }

    Email.send({ SecureToken: MySecureToken, To: ContactSendTo, From: ContactSendTo, Subject: ContactDefaultSubject,
    Body: 'email: ' + document.getElementById('email-modal').value + '<br/> message: ' + orderMessage
    }).then( sendMessageModal() ); }
}