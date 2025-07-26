#include "func.h"

void print_date() {
	time_t current_time = time(&current_time);
	char buffer[26];
	ctime_s(buffer, sizeof(buffer), &current_time);
	printf("Current time: %s", buffer);
}

void file_open() {
	FILE* file = NULL;
	char buffer[50];
	errno_t err = fopen_s(&file, "file.txt", "r");
	if (err != 0 || file == NULL) {
		printf("Open file error");
	}
	else {
		printf("File opened seccessufully\n");
		fgets(buffer, sizeof(buffer), file);
		printf("%s", buffer);
		fclose(file);
	}
}

