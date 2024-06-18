// SuperShell
// A Shell for the future

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// Custom Code
#include "includes/super.h"
#include "includes/shell.h"

// Variables
#define screenRes "screenkey.self.screenRes"

int main() {
    if (SHELL_FRAMEWORK_VERSION_INT != SUPER_FRAMEWORK_VERSION_INT) {
        printf("The header versions are mismatched. Cannot continue.");
        return 56;
    }
    shellInit();
    shellInputHandler();

    return 0;
}

