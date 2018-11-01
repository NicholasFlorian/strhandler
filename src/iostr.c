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
	int softInt;
	
	
	softInt = 0;
	
    //use atof in order to convert
    softInt = atof(in);
    
    //return a flag for incorrect data
    
    /*
     * atof defualts to a value of 0 if the string
     * is not a valid number. If the user doesnt
     * enter 0 as the first character then it
     * returns -1.
     */
    
    if((int)in[0] != 0 && softInt == 0){
        
        //softenInt returns -1 for incorrect numbers
        free(in);
        return -1;
        
    }
    
    return softInt;
    
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
