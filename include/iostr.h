/**
 * @file  iostr.h
 * @version 6
 * @author Nicholas Florian
 * @date November 2017 - November 2018
 * @brief File containing the function definitions of the strhandler
 */

#ifndef io_str
#define io_str

/** Max - defines the max input size
 **/
#define MAX  80

/**Function to read user input
 *@return user input string
 **/
char* softenStringInput();

/**read user input
 *@return user input int
 **/
int softenIntInput();

/**check if string can be a letter
 *@pre meant for selecting options from 0 and up
 *@return the int it becomes, or -1 if not
 *@param in - the string the user wants to check
 **/
int softenInt(char *in);

#endif