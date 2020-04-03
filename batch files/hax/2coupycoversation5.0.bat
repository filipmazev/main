Echo off

:A
echo .
echo hello there?How are you feeling today?
set /p emotion=
if %emotion%== great goto great
if %emotion%== good goto good
if %emotion%== bad goto bad
if %emotion%== sad goto Sad
goto A

:great
color 2
echo.
echo good,now what is you're name?
set /p name=
echo That's a beautifull name %name%!!!
echo, anyways, time to get serious %name%, what is your favorite videogame
set /p videogame=
if %videogame%==minecraft goto fucked
if %videogame%==csgo goto amazing
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
if %okthen%== ok goto bye
if %okthen%== no goto whelltoobad

:understand
echo.
echo why are you playing borderlands then
echo never mind,i dont need to know
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto bye
if %okthen%== no goto whelltoobad


:fuckeded
echo.
echo you still play that shit %name%?
set /p answer=
if %answer%== yes goto bad4u
if %answer%== no goto good4u

:amazing
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
if %okthen%== ok goto bye
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
if %okthen%== ok goto bye
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
if %okthen%== ok goto bye
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
if %videogame%==csgo goto amazing
if %videogame%==samp goto many
if %videogame%==lol goto mobagame
if %videogame%==league of legends goto mobagame

:mobagame
echo.
echo oh i know that one but i have never played it
echo can you excplain what type of game it is
set /p mobaexplained=
if %mobaexplained%== yes goto mobaexplained1
if %mobaexplained%== no goto explanation2

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
if %okthen%== ok goto bye
if %okthen%== no goto whelltoob

:thanks
echo.
echo thanks for excplaining but i need to go
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto bye
if %okthen%== no goto whelltoobad

:lier
echo.
echo why are you lying to me
echo i dont whant to talk to you anymore
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto bye
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
if %videogame%==csgo goto amazing
if %videogame%==samp goto many
if %videogame%==lol goto mobagame
if %videogame%==league of legends goto mobagame

:Sad 
color 5
echo.
echo veary sorry to hear that.Now what is your name?
set /p name=
echo That's a beautifull name %name%!!!
echo, anyways, time to get serious %name%, what is your favorite videogame
set /p videogame=
if %videogame%==minecraft goto fucked
if %videogame%==csgo goto amazing
if %videogame%==samp goto many
if %videogame%==lol goto mobagame
if %videogame%==league of legends goto mobagame

:dogs
echo.
echo mine is a dog too
echo i love dogs
echo i think you might too
echo we can talk later,ok?
set /p then=
if %then%== ok goto bye
if %then%== no goto whelltoobad

:bye
echo.
echo bye
set /p toobad=
if %toobad%= bye goto b

:whelltoobad
echo.
echo whell too bad i need to go
echo bye
set /p toobad=
if %toobad%= bye goto b

:cats
echo. I hate cats
echo.i dont want to talk to you
echo.bye
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto bye
if %okthen%== no goto whelltoobad

:else
echo.
echo whell you can tell me about it latter
echo i need to go now
echo we can talk later,ok?
set /p okthen=
if %okthen%== ok goto bye
if %okthen%== no goto whelltoobad

:b
ebomb:
Echo off
color 17
start %random% %random% %random% %random% %random% %random% %random% %random%






