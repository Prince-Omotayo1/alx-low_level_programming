#include "main.h"
/**
 * _isalpha - function that checks for alphabets
 *
 * @c: parameter to the checked
 *
 * Return: 1 if it is an alphabet or otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
