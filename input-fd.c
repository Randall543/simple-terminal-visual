#include <stdio.h>

int main(){
	char buffer[100];
	fread(buffer, sizeof buffer, 20, stdin);
	printf("from stdin: %s", buffer);
	return 1;
}
