/********************************************************************
 * A simple program that prints the number of characters in each    *
 * argument. Think of it as a program version of strlen.            *
 ********************************************************************/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	/* Check that we have at least one command */
	if(argc == 1){
		fprintf(stderr, "Usage: %s STRING...\n", argv[0]);
		fprintf(stderr, "Print the length of the STRING(s)\n");
		return(1);
	}

	/* Go through each argument and print its length */
	while(--argc){
		/* Increment argv to point to the next argument and skip
		 * argv[0] */
		argv++;
		printf("'%s': %zu\n", *argv, strlen(*argv));
	}

	return(0);
}
