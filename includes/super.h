#include <stdio.h>
#include <stdlib.h>

#include "shell.h"

#define HEADER_SELF "super.h"
#define SHELLENGINE "superEngine"

#define VERSION "1.0.0"
#define SUPER_FRAMEWORK_VERSION "0.10-build*0fc4b4"


void shellInit() {
    printf("Launching SuperShell\n\n");
    printf("SuperSH version v%s (shell framework v%s , Super Framework v%s)\n",VERSION, SHELL_FRAMEWORK_VERSION, SUPER_FRAMEWORK_VERSION);
}