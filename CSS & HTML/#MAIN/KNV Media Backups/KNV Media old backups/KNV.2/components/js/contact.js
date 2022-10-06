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

function validateForm(){
    var checkMail = document.getElementById('email').value;
    var checkMessage = document.getElementById('message').value;
    var checkerMessage = 0, checkerMail = 0; const minWords = 3, minChar = 6;

    if(checkMessage === ""){ 
        document.getElementById('hr-message').style.borderColor = "#ff6961"; 
        document.getElementById('hr-message').style.background = "#ff6961"; 
        if(!document.querySelector(".hr-message").classList.contains("anim-wrong")){
        document.querySelector(".hr-message").classList.toggle("anim-wrong");
        document.querySelector(".input-message").classList.toggle("anim-wrong");
        }
        checkerMessage = 1; }
    
    else if(WordCount(checkMessage) < minWords && charCount(checkMessage) < minChar){ 
        document.getElementById('hr-message').style.borderColor = "#ff6961"; 
        document.getElementById('hr-message').style.background = "#ff6961"; 
        if(!document.querySelector(".hr-message").classList.contains("anim-wrong")){
            document.querySelector(".hr-message").classList.toggle("anim-wrong");
            document.querySelector(".input-message").classList.toggle("anim-wrong");
        }
        checkerMessage = 1;  }
   
    else{ 
        document.getElementById('hr-message').style.borderColor = "white"; 
        document.getElementById('hr-message').style.background = "white"; 
        if(document.querySelector(".hr-message").classList.contains("anim-wrong")){
        document.querySelector(".hr-message").classList.toggle("anim-wrong");
        document.querySelector(".input-message").classList.toggle("anim-wrong");
        }
        checkerMessage = 0; }



    if(checkMail === ""){ 
        document.getElementById('hr-mail').style.borderColor = "#ff6961"; 
        document.getElementById('hr-mail').style.background = "#ff6961"; 
        if(!document.querySelector(".hr-mail").classList.contains("anim-wrong")){
            document.querySelector(".hr-mail").classList.toggle("anim-wrong");
            document.querySelector(".input-mail").classList.toggle("anim-wrong");
        }
        checkerMail = 1; }
   
    else if(!validateEmail(checkMail)){ 
        document.getElementById('hr-mail').style.borderColor = "#ff6961"; 
        document.getElementById('hr-mail').style.background = "#ff6961"; 
        if(!document.querySelector(".hr-mail").classList.contains("anim-wrong")){
        document.querySelector(".hr-mail").classList.toggle("anim-wrong");
        document.querySelector(".input-mail").classList.toggle("anim-wrong");
        }
        checkerMail = 1; }
    
    else{ 
        document.getElementById('hr-mail').style.borderColor = "white";
        document.getElementById('hr-mail').style.background = "white"; 
        if(document.querySelector(".hr-mail").classList.contains("anim-wrong")){
        document.querySelector(".hr-mail").classList.toggle("anim-wrong");
        document.querySelector(".input-mail").classList.toggle("anim-wrong");
        }
        checkerMail = 0; }

    if(checkerMessage === 0 && checkerMail === 0){ 
        return true; 
    }
    else { return false; }
}

function sendMessage(){
    document.getElementById("contact_form").reset();

    document.getElementById('hr-message').style.borderColor = "white"; 
    document.getElementById('hr-message').style.background = "white";
    document.getElementById('hr-mail').style.borderColor = "white"; 
    document.getElementById('hr-mail').style.background = "white";  

    document.getElementById('contact_button').innerHTML = "SENT";
    setTimeout(function(){
    document.getElementById('contact_button').innerHTML = "SEND";
    }, 1300);
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
            SecureToken: '27d71393-5618-405e-90e3-b05fe111737e',
            To: 'filipmazev@gmail.com',
            From: 'filipmazev@gmail.com',
            Subject: eSubject === "" ? "Work inquiry" : eSubject,
            Body: eBody
        }).then(
            sendMessage()
        );
    }

    else { return; }
}