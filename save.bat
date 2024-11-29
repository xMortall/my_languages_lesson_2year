@echo off

REM Obtém a data atual no formato dd/MM/yyyy
for /f "tokens=2 delims==" %%I in ('wmic os get localdatetime /value ^| find "="') do set "datetime=%%I"
set "currentDate=%datetime:~6,2%/%datetime:~4,2%/%datetime:~0,4%"

REM Mensagem de commit
set "commitMessage=upd - %currentDate%"

REM Adiciona todos os arquivos, realiza o commit e faz o push
git add .
git commit -m "%commitMessage%"
git push

REM Mensagem final
echo Commit realizado com sucesso: %commitMessage%
pause
