#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "opstr.h"
//concat


void opcat(char* main, char* cat){

	//var
	char* final;
	int mainSize;
	int catSize;
	int totalSize;

	//assign
	mainSize 	= oplen(main);
	catSize 	= oplen(cat);
	totalSize 	= mainSize + catSize;
	final 		= malloc(sizeof(char) * totalSize + 1);

	for(int i = 0; i < mainSize - 1; i++)
		final[i] = main[i];

	for(int i = 0; i < catSize - 1; i++)
		final[i + mainSize] = cat[i];

	final[totalSize]= '\0';


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