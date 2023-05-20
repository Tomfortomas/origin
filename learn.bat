@echo off
title for_my
echo %errorlevel%
if not %errorlevel% == 0 (echo 执行失败)
chcp 65001
echo 牛牛>trial.txt
echo ^> this is what i use>>trial.txt 
REM: this is a remark
REM: ren trial.txt trial.md
goto label
1 EQU 2
1 NEQ 2
1 LSS 2
1 GTR 2
1 GEQ 2
1 LEQ 2 

:label
if 1 LSS 2 (echo this is great)
for %%I in (*.txt) do echo %%I
for %%I in (*.txt) do ren %%I 1.md
pause 