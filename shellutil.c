// Shell Config Utility
// StNiosem, 2024. 

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define SHELL_CONFIG_UTIL_VERSION "1.0.0-build*8e9f3b"
#define COMMAND_CHOICE 0

#define COLOR_BOLD_RED "\033[0;31m"
#define COLOR_RESET "\033[0m"

int IsNullString(char command[]) {
	if (command == "") {
		printf("String is empty. Stopped\n");
		return 0;
	}
	else {
		return 1;
	}
}

int main() {
	printf("Shell Config Utility v%s", SHELL_CONFIG_UTIL_VERSION);
	scanf("Input Command Number: %s", COMMAND_CHOICE);
	if (isNullString(COMMAND_CHOICE) == 0) {
		printf("Null Choice. Terminating");	
	}

	if (COMMAND_CHOICE > 10) {
		printf("%s\n", COLOR_BOLD_RED);
		printf("%d is NOT a valid choice\n", COMMAND_CHOICE);
		printf("%s\n", COLOR_RESET);
	}
	
	return 0;
}
