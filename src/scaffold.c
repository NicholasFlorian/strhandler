#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "iostr.h"
#include "opstr.h"

int main(int args, char **argv){
	
	//Var
	char* in;
	
	
	//main loop
	while(strcmp((in = softenStringInput()), "q") != 0){
		
		//var
		int strSize;
		int memSize;

		strSize = 0;
		memSize = 0;

		strSize = oplen(in);
		memSize = opmem(in);

		printf("<%d><%d><%s>\n", strSize, memSize, in);
		

		free(in);
	}


	free(in);
	
	return 0;
}
