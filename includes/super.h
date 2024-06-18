#include <stdio.h>
#include <stdlib.h>

#include "shell.h"

#define HEADER_SELF "super.h"
#define SHELLENGINE "superEngine"

//Version strings
#define VERSION "1.0.0"
#define SUPER_FRAMEWORK_VERSION "0.10-build*0fc4b4"
#define INPUT_HANDLER_VERSION "1.0.0.01-build*e35b8a"

void shellInit() {
    printf("Launching SuperShell\n\n");
    printf("SuperSH version v%s (shell framework v%s , Super Framework v%s)\n",VERSION, SHELL_FRAMEWORK_VERSION, SUPER_FRAMEWORK_VERSION);
}

void shellInputHandler() {
	printf("Input Handler v%c", INPUT_HANDLER_VERSION);
}
