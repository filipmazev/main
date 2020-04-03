@echo off
:A
color 17
echo ========================
echo !ENTER WINDOWS USERNAME!
echo ========================
echo !USERNAME IS %username%!
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
if exist C:\"Users"\"%user%"\"Documents"\userinfo\username.txt goto log2
if not exist C:\"Users"\"%user%"\"Documents"\userinfo\username.txt goto reg2
:reg2
if exist C:\"Users"\"%user%"\"Documents"\userinfo\password.txt goto log2
if not exist C:\"Users"\"%user%"\"Documents"\userinfo\password.txt goto reg3
:log2
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
if %chslog%== 3 goto reg3
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
echo !==========================================================================!
echo         A FILE NAMED "CONFIRMATION" HAS BEEN CREATED ON YOUR DESKTOP
echo  OPEN THE FILE AND TYPE IN "confirmation" TO CONFIRM YOUR ACCOUNT OWNERSHIP
echo !==========================================================================!
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
echo !==========================================================================!
echo         A FILE NAMED "CONFIRMATION" HAS BEEN CREATED ON YOUR DESKTOP
echo  OPEN THE FILE AND TYPE IN "confirmation" TO CONFIRM YOUR ACCOUNT OWNERSHIP
echo !==========================================================================!
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
if not %confirm%==%confirm2% goto A2v2
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
if not exist C:\Users\"%user%"\Documents\confirm2.txt goto A13
:A12
cd "C:\Users\"%user%"\Documents"
del confirm2.txt
goto A13
:A13
echo ===================================
echo           W E L C O M E
echo ===================================
echo CREATE POLONIEX ACCOUNT          (1)
echo ===================================
echo INSERT ETHERIUM WALLET CODE INFO (2)
echo ===================================
echo BACK                             (3)
echo ===================================
echo EXIT                             (4)
echo ===================================
set /p a13c=ENTER:
if %a13c%== 1 goto poloniex1
if %a13c%== 2 goto ethwallet1
if %a13c%== 3 goto logon
if %a13c%== 4 exit
goto A13
:poloniex1
echo.
start https://poloniex.com/signup 
pause
echo -enter required information 
echo -agree to terms of service
echo -pass re-captcha test
echo ========================================================
echo to go to gmail/yahoo mail press the co-responding number
echo ========================================================
echo GMAIL      (1)
echo =============
echo YAHOO MAIL (2)
echo =============
echo BACK       (3)
echo =============
echo EXIT       (4)
echo =============
set /p plnx1=ENTER:
if %plnx1%== 1 goto gmailstart 
if %plnx1%== 2 goto yahoomailstart 
if %plnx1%== 3 goto A13 
if %plnx1%== 4 exit 
:gmailstart
echo.
start https://accounts.google.com/ServiceLogin/signinchooser?service=mail&passive=true&rm=false&continue=https%3A%2F%2Fmail.google.com%2Fmail%2F&ss=1&scc=1&ltmpl=default&ltmplcache=2&emr=1&osid=1&flowName=GlifWebSignIn&flowEntry=ServiceLogin
pause
goto A13
:yahoomailstart
echo.
start https://login.yahoo.com/manage_account?.src=ym&.intl=us&.lang=en-US&authMechanism=primary&yid=&done=https%3A%2F%2Fmail.yahoo.com%2F&eid=100
pause
goto A13
:ethwallet1
echo.
echo A FOLDER NAMED CLAYMORE 9.7 WILL BE OPENED
echo -TO CONTINUE PRESS *ENTER*
pause
start C:\Users\"%user%"\Desktop\Claymore
echo -scroll down and you should see a .bat file named eth+sia
echo -right click it
echo -go to edit with notepad/notepad++
echo -find the text that should look something like this 
echo *-ewal 0xf6ab0d7a513fd70asdasddcc7081b3585fa74dd92.5*
echo -delete it
echo -replace it with your etherium wallet code that should come with your poloniex account
echo -after the text add a *.1* or any number of your choosing
echo -there should be a second simular text in the same bat file
echo -find the text file and delete it
echo -replace it with your poloniex account code
echo -add the same *.1* or any number of your choosing as in the first one
pause 
echo -if you followed everything corectli the text file should look like the following
echo *EthDcrMiner64.exe -epool eu1.ethermine.org:4444 -ewal 0xf6ab0d7a513fd7042109dasd7081b3585fa74dd92.1 -epsw x -dpool stratum+tcp://eu.siamining.com:7777 -dwal 2b378422c7a0aasdadcf689431840dcdabb77991e3c7a957684c0d97c2e1ecc19dc948ac6a6364.1 -dcoin sia
echo !WITH THE EXCEPTION OF A DIFERENT CODE FROM THIS ONE! 
pause 
echo ========
echo BACK  (1)
echo ========
echo EXIT  (2)
echo ========
set /p chseth=ENTER:
if %chseth%== 1 goto A13
if %chseth%== 2 exit
goto ethwallet1


