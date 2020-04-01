Echo off

:A
echo .
echo hello there?How are you feeling today?
set /p emotion=
if %emotion%== great goto great
if %emotion%== good goto good
if %emotion%== bad goto bad
if %emotion%== sad goto Sad
if %emotion%== amazing goto amazing
goto A

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
if %okthen%== ok goto bye
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
if %then%== ok goto bye
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
if %okthen%== ok goto bye
if %okthen%== no goto whelltoobad

:badboy
echo.
echo whait,i changed my mind.
echo we can still talk
echo heres a nother question
echo whats your favorite browser
set /p browser=
if %browser%== chrome goto browser1
if %browser%== mozila goto bowser2
if %browser%== firefox goto bowser2

:browser1
echo.
echo thats my favorite one too
echo now,what operating system do you use?
set / os=
if %os%== windows10 goto os1
if %os%== windows8 goto os2
if %os%== windows7 goto os3
if %os%== ios goto os4
if %os%== linux goto os5
if %os%== android goto os6
if %os%== osx goto os7

:bowser2
echo.
echo many people like that one but i dont like it
echo now,what operating system do you use?
set / os=
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
if %goodbyeforever%== bye goto b2

:finnaly2
echo.
echo oh i thought you knew him
echo never mind then
echo and now for real will be saying goodbye to eachother
echo thanks for having this coversation with me
echo i love you for talking to me
echo for now bye and will see eachother later
set /p goodbyeforever=
if %goodbyeforever%== bye goto b2

:b2
ebomb:
 start %random% 













