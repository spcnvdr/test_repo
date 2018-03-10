/********************************************************************
 * A simple program that prints the number of characters in each    *
 * argument. Think of it as a program version of strlen.            *
 ********************************************************************/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	if(argc == 1){
		fprintf(stderr, "Usage: %s STRING...\n", argv[0]);
		fprintf(stderr, "Print the length of the STRING(s)\n");
		return(1);
	}

	size_t len;

	while(--argc){
		len = strlen(*(++argv));
		printf("%s: %zu\n", *argv, len);
	}

	return(0);
}


