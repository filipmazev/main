function textLoader() { 
	this.init =  function(attribute, lng){
		this.attribute = attribute;
		this.lng = lng;	
	}

	this.process = function(){
				_self = this;
				var xrhFile = new XMLHttpRequest();

				xrhFile.open("GET", "./Components/text.json", false);
				xrhFile.onreadystatechange = function ()
				{
					if(xrhFile.readyState === 4)
					{
						if(xrhFile.status === 200 || xrhFile.status == 0)
						{
							var LngObject = JSON.parse(xrhFile.responseText);
							var allDom = document.getElementsByTagName("*");

							for(var i =0; i < allDom.length; i++){
								var elem = allDom[i];
								var key = elem.getAttribute(_self.attribute);
                                
                                if(i === 0){ initCards(LngObject); if(typeof Storage !== "undefined"){ InteractionTranslator(LngObject); } }
								
								if(key != null) {
									 elem.innerHTML = LngObject[key];
								}
							}
					 
						}
					}
				}
				xrhFile.send();
    }
}

function textLoad(){
	var loader = new textLoader();
	var currentLng = 'en';
	var attributeName = 'data-tag';
	loader.init(attributeName, currentLng);
	loader.process(); 
}

