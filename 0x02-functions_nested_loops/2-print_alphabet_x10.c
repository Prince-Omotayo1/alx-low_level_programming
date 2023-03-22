#include "main.h"
/**
 * print_alphabet_x10 - function that print 10x alphabets
 *
 * Return: always 0;
*/
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; j <= 10; i++)
	{
		for (j = 'a'; j <= '2'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
