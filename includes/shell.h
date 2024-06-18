#include <stdio.h>
#include <stdlib.h>

#define SELF "super.h"

#define SHELL_FRAMEWORK_VERSION_FULL "0.0.1-build*7fd4b4"
#define SHELL_FRAMEWORK_VERSION_INT 1
#define SUPER_FRAMEWORK_VERSION_INT 1



void shellFramework() {
    printf("shellHandler v%s", SHELL_FRAMEWORK_VERSION_FULL);

}