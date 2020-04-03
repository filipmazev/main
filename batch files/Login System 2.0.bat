@Echo off
:A 
echo ==================================
echo          Enter username
echo username - %username% - username
echo          Enter username
echo ==================================
set /p user=Enter:
if not "%user%" == "%username%" goto A2
mkdir C:\Users\"%user%"\Documents\userinfotest2
cls 
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
goto A21
:A21 
ping localhost -n 2 >nul
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
echo ==============
echo LOGIN      (1) 
echo ==============
echo REGISTER   (2) 
echo ==============
echo SETTINGS   (3) 
echo ==============
echo EXIT       (4) 
echo ==============
set /p chs1=Enter:
if %chs1% == 1 goto logon
if %chs1% == 2 goto regtest
if %chs1% == 3 goto settings
if %chs1% == 4 exit 
cls
goto A
:settings
ping localhost -n 2 >nul
echo ==============
echo COLOR SETTINGS
echo ==============
echo BLUE       (1)
echo ==============
echo GREEN      (2)
echo ==============
echo YELLOW     (3)
echo ==============
echo PURPLE     (4)
echo ==============
echo RED        (5)   
echo ==============
echo BACK       (6)
echo ==============
echo EXIT       (7)
echo ==============
set /p clrchs=ENTER:
if %clrchs%== 1 goto bl
if %clrchs%== 2 goto gr
if %clrchs%== 3 goto ye
if %clrchs%== 4 goto pu
if %clrchs%== 5 goto re
if %clrchs%== 6 goto A21 
if %clrchs%== 7 exit 
goto settings
:gr 
color 02
goto A21
:bl
color 03
goto A21
:re
color 04
goto A21
:pu
color 05
goto A21
:ye 
color 06
goto A21
:A2 
echo Enter username does not match computer username 
echo   please enter correct username that matches 
pause 
goto A
:regtest 
if exist C:\Users\"%user%"\Documents\userinfotest2\username1.txt goto A3 
if not exist C:\Users\"%user%"\Documents\userinfotest2\username1.txt goto reg
goto regtest
:A3
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
if %chslog%== 4 goto A21
if %chslog%== 5 exit
goto A3
:forgot
ping localhost -n 2 >nul
echo ===================
echo FORGOT USERNAME (1)
echo ===================
echo FORGOT PASSWORD (2)
echo ===================
echo BACK            (3)
echo ===================
echo EXIT            (4)
echo ===================
set /p chs3=Enter:
if %chs3% == 1 goto forgotU
if %chs3% == 2 goto forgotP
if %chs3% == 3 goto A3
if %chs3% == 4 exit
goto forgot
:forgotU 
ping localhost -n 2 >nul
echo !===================================!
echo ! PASSWORD REQUIRED TO GET USERNAME !
echo !===================================!
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
set /p password3= <C:\Users\"%user%"\Documents\userinfotest2\password1.txt
set /p password4=Password:
if %password4% == %password3% goto forgotU2
if not %password4% == %password3% goto forgot 
goto forgotU
:forgotU2 
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
echo YOUR USERNAME:  
type C:\Users\"%user%"\Documents\userinfotest2\username1.txt
pause 
goto A3
:forgotP 
ping localhost -n 2 >nul
echo !===================================!
echo ! USERNAME REQUIRED TO GET PASSWORD !
echo !===================================!
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
set /p username3= <C:\Users\"%user%"\Documents\userinfotest2\username1.txt
set /p username4=Enter:
if %username4% == %username3% goto forgotP2
if not %username4% == %username3% goto forgot
goto forgotP 
:forgotP2 
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
echo YOUR PASSWORD:
type C:\Users\"%user%"\Documents\userinfotest2\password1.txt
pause 
goto A3 
:log4
ping localhost -n 2 >nul
echo !===============================================================!
echo                          ! WARNING !
echo TO MAKE A NEW ACCOUNT YOU MUST LOG IN WITH YOUR PREVIOUS ACCOUNT
echo  AFTER MAKING THE NEW ACCOUNT, YOUR OLD ACCOUNT WILL BE DELETED
echo         THIS LOGIN IS REQUIRED FOR SECURITY PURPOSE'S
echo !===============================================================!
echo continue?
set /p ans1000=(y/n):
if %ans1000%== y goto log5
if %ans1000%== n goto A3 
goto log4
:log5
pause
ping localhost -n 2 >nul
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
set /p username5= <C:\Users\"%user%"\Documents\userinfotest2\username1.txt
set /p password5= <C:\Users\"%user%"\Documents\userinfotest2\password1.txt
set /p username6=USERNAME:
set /p password6=PASSWORD:
if %username5%==%username6% goto password10
if not %username5%==%username6% goto logon3
:password10
if %password5%==%password6% goto confirmdel
if not %password5%==%password6% goto log5
:confirmdel
echo ===================================================================================================
echo ! C A U T I O N !    BY DOING THIS ACTION THE PREVIOUS ACCOUNT WILL BE DELETED    ! C A U T I O N ! 
echo ===================================================================================================
echo         please confrim the acction by typing "confirm" in the file thats about to open
pause 
ping localhost -n 2 >nul 
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
set /p confirm= <C:\Users\"%user%"\Desktop\confirm.txt 
echo %confirm%>C:\Users\"%user%"\Desktop\confirm.txt 
echo confirm>C:\Users\"%user%"\Documents\confirm2.txt
set /p confirm2= <C:\Users\"%user%"\Documents\confirm2.txt
echo %confirm2%>C:\Users\"%user%"\Documents\confirm2.txt
start C:\Users\%user%\Desktop\confirm.txt
echo !===============================================================================!
echo              A FILE NAMED "CONFIRM" HAS BEEN CREATED ON YOUR DESKTOP
echo        OPEN THE FILE AND TYPE IN "confirm" TO CONFIRM YOUR ACCOUNT OWNERSHIP
echo !===============================================================================!
pause
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
set /p confirm= <C:\Users\"%user%"\Desktop\confirm.txt 
echo %confirm%>C:\Users\"%user%"\Desktop\confirm.txt 
set /p confirm2= <C:\Users\"%user%"\Documents\confirm2.txt
echo %confirm2%>C:\Users\"%user%"\Documents\confirm2.txt
if %confirm%==%confirm2% goto clear2
if not %confirm%==%confirm2% goto confirmalt2 
:clear2
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
del C:\Users\"%user%"\Desktop\confirm.txt
del C:\Users\%user%\Documents\confirm2.txt
del C:\Users\"%user%"\Documents\userinfotest2\username1.txt
del C:\Users\"%user%"\Documents\userinfotest2\password1.txt
pause 
goto reg
:confirmalt2
echo ============================================================================================================
echo ! C A U T I O N ! MUST BE ENTERED              "confirm"                   MUST BE ENTERED ! C A U T I O N !
echo ============================================================================================================
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
del C:\Users\"%user%"\Desktop\confirm.txt
del C:\Users\%user%\Documents\confirm2.txt
pause 
goto A3
:reg 
ping localhost -n 2 >nul 
echo !=====================!
echo !   R E G I S T E R   ! 
echo !=====================!
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
if exist C:\Users\"%user%"\Documents\userinfotest2\username1.txt goto regalt
set /p username1=Username:
echo %username1%>C:\Users\"%user%"\Documents\userinfotest2\username1.txt
set /p password1=Password:
echo %password1%>C:\Users\"%user%"\Documents\userinfotest2\password1.txt
ping localhost -n 2 >nul 
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
echo %password1%>C:\Users\"%user%"\Documents\userinfotest2\password1.txt
echo %username1%>C:\Users\"%user%"\Documents\userinfotest2\username1.txt
echo your username is %username1%
echo your password is %password1%
echo confirm? 
set /p chs2=(Y\N):
if %chs2% == y goto confirm1
if %chs2% == n goto reg
goto reg
:confirm1 
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
set /p confirmation= <C:\Users\"%user%"\Desktop\confirmation.txt 
echo %confirmation%>C:\Users\"%user%"\Desktop\confirmation.txt 
echo confirmation>C:\Users\"%user%"\Documents\confirmation2.txt
set /p confirmation2= <C:\Users\"%user%"\Documents\confirmation2.txt
echo %confirmation2%>C:\Users\"%user%"\Documents\confirmation2.txt
start C:\Users\%user%\Desktop\confirmation.txt
echo !===============================================================================!
echo         A FILE NAMED "CONFIRMATION" HAS BEEN CREATED ON YOUR DESKTOP
echo  OPEN THE FILE AND TYPE IN "confirmation" TO CONFIRM YOUR ACCOUNT OWNERSHIP
echo !===============================================================================!
pause
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
set /p confirmation= <C:\Users\"%user%"\Desktop\confirmation.txt 
echo %confirmation%>C:\Users\"%user%"\Desktop\confirmation.txt 
set /p confirmation2= <C:\Users\"%user%"\Documents\confirmation2.txt
echo %confirmation2%>C:\Users\"%user%"\Documents\confirmation2.txt
if %confirmation%==%confirmation2% goto clear
if not %confirmation%==%confirmation2% goto confirmalt 
goto confirmation
:confirmalt
echo ============================================================================================================
echo ! C A U T I O N ! MUST BE ENTERED              "confirmation"              MUST BE ENTERED ! C A U T I O N !
echo ============================================================================================================
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
del C:\Users\"%user%"\Desktop\confirmation.txt
del C:\Users\%user%\Documents\confirmation2.txt
del C:\Users\"%user%"\Documents\userinfotest2\username1.txt
del C:\Users\"%user%"\Documents\userinfotest2\password1.txt
pause 
goto reg
:clear
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
del C:\Users\"%user%"\Desktop\confirmation.txt
del C:\Users\"%user%"\Desktop\confirmation2.txt
cls
goto logon 
:logon
if not exist C:\Users\"%user%"\Documents\userinfotest2\username1.txt goto logonexplain
if exist C:\Users\"%user%"\Documents\userinfotest2\username1.txt goto logon10
:logonexplain
echo !=================================================!
echo !NO USERNAME\PASSWORD FOUND, PLEASE REGISTER FIRST!
echo !=================================================!
pause 
goto reg
:logon10
ping localhost -n 2 >nul 
echo !===============!
echo !   L O G I N   !
echo !===============!
echo %user%>C:\Users\"%user%"\Documents\userinfotest2\user.txt
set /p username2= <C:\Users\"%user%"\Documents\userinfotest2\username1.txt
set /p password2= <C:\Users\"%user%"\Documents\userinfotest2\password1.txt
set /p username=USERNAME:
set /p password=PASSWORD:
if %username2%==%username% goto password1
if not %username2%==%username% goto logonalt2
:password1
if %password2%==%password% goto B
if not %password2%==%password% goto logonalt3
:logonalt2
echo ! USERNAME ENTERED IS WRONG !
pause
goto logon 
:logonalt3
echo ! PASSWORD ENTERED IS WRONG !
pause
goto logon
:B 
ping localhost -n 2 >nul
start  D:\"my first game"\gamemk.exe
exit 






 
