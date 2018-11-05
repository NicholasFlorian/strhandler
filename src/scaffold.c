#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "iostr.h"
#include "opstr.h"

int main(int args, char **argv){
	
	//Var
	char* 	inTest1;
	char* 	inTest2;
	int 	inTest3;
	char*	mainTest4;
	char*	catTest4;


	//Test 1
	printf("\x1b[31m");
	printf("\nTest 1.\n");
	printf("\x1b[34m");

	printf("Testing iostr softenStringInput.\n");
	printf("Testing opstr oplen.\n");
	printf("Testing opstr opmem.\n\n");
	printf("\x1b[0m");

	printf("Input a string and see its result <length><bytes><String>.\n");
	printf("Type 'q' to quit:\n");

	while(strcmp((inTest1 = softenStringInput()), "q") != 0){
		
		//var
		int strSize;
		int memSize;

		strSize = 0;
		memSize = 0;


		strSize = oplen(inTest1);
		memSize = opmem(inTest1);

		printf("<%d><%d><%s>\n", strSize, memSize, inTest1);
		

		free(inTest1);
	}

	free(inTest1);


	//int input 
	printf("\x1b[31m");
	printf("\nTest 2.\n");
	printf("\x1b[34m");

	printf("\x1b[34m");
	printf("\nTesting iostr softenInt.\n\n");
	printf("\x1b[0m");

	printf("Input an int and see its result <int value>.\n");
	printf("Type 'q' to quit:\n");

	while(strcmp((inTest2 = softenStringInput()), "q") != 0){
		
		//var
		int intVal;

		intVal = 0;


		intVal = softenInt(inTest2);

		printf("<%d>\n", intVal);
		

		free(inTest2);
	}

	free(inTest2);
	

	//int input 
	printf("\x1b[31m");
	printf("\nTest 3.\n");
	printf("\x1b[34m");

	printf("\x1b[34m");
	printf("\nTesting iostr softenIntInput.\n\n");
	printf("\x1b[0m");

	printf("Input an int and see its result <int value>.\n");
	printf("type -66 to quit:\n");
		
	inTest3 = 0;
	for(int i = 0; inTest3 != -66; i++){

		inTest3 = softenIntInput();

		printf("<%d>\n", inTest3);
	}


	//test 5
	printf("\x1b[31m");
	printf("\nTest 4.\n");
	printf("\x1b[34m");

	printf("\x1b[34m");
	printf("\nTesting iostr opcat.\n\n");
	printf("\x1b[0m");

	printf("Input two Strings to see concat result <final>.\n");
	printf("Type 'q' to quit:\n");

	while(strcmp((mainTest4 = softenStringInput()), "q") != 0){
		  
		catTest4 = softenStringInput();
		opcat(mainTest4, catTest4);
		printf("<%s>\n", mainTest4);

		free(mainTest4);
	}


	


	return 0;
}
