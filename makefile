compileShellConfigUtil: shellutil.c
	gcc shellutil.c -o shellutil

main: shellutil
	gcc main.c -o main
	echo "Build finished"
	echo "Linking dependencies (Shell Config Utility)"
	cp ./main /tmp/supershell/
	cp ./shellutil /tmp/supershell
	cp /tmp/shellutil/* ~/bin
	rm -r /tmp/shellutil
	echo "Install finished"