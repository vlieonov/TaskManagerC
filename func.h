#ifndef FUNC
#include <stdio.h>
#include <time.h>
#include <ctime>
#define MAX_CHAR 200
#define INITIAL_BUFFER_SIZE 50
#define FILE_PATH "./file.txt"
#define PRIVATE static

struct LinkedList {
	int num;
	char* description;
	char* date;
	struct LinkedList* next;
};

void print_date();
void file_open();
#endif