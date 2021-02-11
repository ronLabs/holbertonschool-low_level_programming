#include "holberton.h"

/**
 * _isupper : checks for uppercase character
 * @c : character
 * return : zero or one
 */
int _isupper(int c)
{
	if(c <= 90 && c >= 65)
		return(1);
	else
		return(0);
} 
