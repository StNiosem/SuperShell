#include <stdio.h>
#include <stdlib.h>

#include "shell.h"

#define HEADER_SELF "super.h"
#define SHELLENGINE "superEngine"

//Version strings
#define VERSION "1.0.0"

#define SUPER_FRAMEWORK_VERSION_FULL "0.10-build*0fc4b4"
#define SUPER_FRAMEWORK_VERSION_INT 2362

#define INPUT_HANDLER_VERSION_FULL "1.0.0.01-build*e35b8a"

void shellInit() {
    printf("Launching SuperShell\n\n");
    printf("SuperSH version v%s (shell framework v%s , Super Framework v%s)\n",VERSION, SHELL_FRAMEWORK_VERSION_FULL, SUPER_FRAMEWORK_VERSION_FULL);
}

void shellInputHandler() {
	printf("Input Handler v%s", INPUT_HANDLER_VERSION_FULL);
}
