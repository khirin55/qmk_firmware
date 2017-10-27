REM Put this bat fil to the root of QMK_firmware folder
REM and run it with  dockqmk.bat <keyboard>
docker run -e keymap=default -e keyboard=%1 --rm -v %cd%:/qmk:rw edasque/qmk_firmware