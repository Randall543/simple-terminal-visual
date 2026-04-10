#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	// get the data from the file 
	FILE* frame = fopen("./temp.txt", "r");
	char buffer[200];
	size_t file_read = fread(buffer, sizeof buffer, 195, frame);
	// close it as we'll work with the buffer from here on.
	fclose(frame);
	
	int number_of_loops = 4;
	for (int i = 0; i < number_of_loops; i++) {
		printf("iteration: %i\n", i);
		printf("%s", buffer);
		printf("\033[H\033[2J");
		sleep(3);
	}

	return 1;
}
