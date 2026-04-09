#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	if (argc == 1){
		printf("no flag provied");
	}
	char buffer[100];
	// 0 is to check for stdin from standard lib
	if (atoi(argv[1]) == 0){
		fread(buffer, sizeof buffer, 20, stdin);
	}
	// 1 is to check for stdin from posix
	if (atoi(argv[1]) == 1){
		read(0, buffer, sizeof buffer);
	}
	printf("from stdin: %s", buffer);
	return 1;
}
