#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//concat


void opcat(char* main, char* cat){

	//var
	char* final;
	int mainSize;
	int catSize;
	int totalSize;


	//assign
	mainSize 	= strlen(main);
	catSize 	= strlen(cat);
	totalSize 	= mainSize + catSize;
	final = malloc(sizeof(char) * totalSize + 1);

	for(int i = 0; i < mainSize; i++)
		final[i] = main[i];

	for(int i = 0; i < catSize; i++)
		final[i + mainSize] = cat[i];

	free(cat);
	free(main);

	main = final;

}

int oplen(char* in){

	//var
	int len;


	//count
	for(len = 0; 1 == 1; len++)
		if(in[len] == '\0')
			break;

	return len;
}

int opmem(char* in){

	return oplen(in) + 1; // /sizeof(char);
}

//insert
//tokenize
//tokenize n
//regex?