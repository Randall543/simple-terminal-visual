#include <stdio.h>
#include <stdlib.h>
int main(){
	/*char* test = "***********************************************\n**********************************************\n********************************************************\n";*/
	FILE* frame = fopen("./temp.txt", "r");
	char buffer[200];

	size_t file_read = fread(buffer, sizeof buffer, 195, frame);

	printf("%s", buffer);

	return 1;
}
