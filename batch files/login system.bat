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
mkdir C:\Users\"%user%"\Documents\userinfo
echo %user%>C:\Users\"%user%"\Documents\userinfo\winuser.txt 
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
echo.
ping localhost -n 2 >nul 
echo %user%>C:\Users\%user%\Documents\userinfo\winuser.txt
start C:\Users\%user%\Music\music\LP\"LP - Muddy Waters Audio.mp3"
cls 
ping localhost -n 2 >nul 
echo HELLO WORLD
pause
exit 














