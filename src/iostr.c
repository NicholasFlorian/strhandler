#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "iostr.h"

#define MAX_ (MAX + 1)

int softenIntInput(){
    
    //var
	char *in;
	int softInt;

	
	//get input
	softInt = softenInt((in = softenStringInput()));
	

	free(in);

    return softInt;
}

int softenInt(char* in){
    
	//var
   	int len;

    len = strlen(in);


    //watch out for empty strings
    if(len == 0)
    	return -1;

    for(int i = 0; i < len; i++){

    	// '0' <= i <= '9' or i = '-' at start
    	if(i == 0){
    		if(!((48 <= in[i] && in[i] <= 57) || in[i] == 45))
    			return -1;
    	}
    	else{
    		if(!(48 <= in[i] && in[i] <= 57))
    			return -1;
    	}

    }


    return atof(in);
}

//untested
void softenString(char *in){

	in = realloc(in, sizeof(char) * (strlen(in) + 1));
}

char* softenStringInput(){
	
	//var
	char *lineptr;
	
	//set default off
	lineptr = malloc(sizeof(char) * 201);
	

	fgets(lineptr, 200, stdin);

	//soften input

	lineptr[strlen(lineptr) - 1] = '\0';
	lineptr = realloc(lineptr, sizeof(char) * (strlen(lineptr) + 1));
	
	return lineptr;
	
}
