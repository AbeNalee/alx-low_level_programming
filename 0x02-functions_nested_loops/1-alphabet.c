#include "main.h"

/**
* print_alphabet - Entry
* Return: always 0
*/
void print_alphabet(void)
{
	char c = 'a';

	for (c; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
