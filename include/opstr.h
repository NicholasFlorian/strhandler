/**
 * @file  opstr.h
 * @version 1
 * @author Nicholas Florian
 * @date November 2018
 * @brief File containing the function definitions of the strhandler
 */

#ifndef op_str
#define op_str

/** Memory controlled concatting function
 *@param first - first string (becomes concatted)
 *@param cat - string to add 
 **/
void opcat(char** first, char* cat);

/** Simple string length finder
 *@param in - string to measure
 **/
int oplen(char* in);

/** Memory controlled insert function
 *@param first - first string (becomes concatted)
 *@param cat - string to add
 **/
void opinsert(char* main, char* insert);

#endif
