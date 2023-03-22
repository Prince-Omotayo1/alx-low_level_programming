#include "main.h"
/**
 *  _islower - function to prints lower case
 *
 *  @c: Parameterr to be printed
 *
 *  Return: 1 if it is lower case, otherwise 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
