#include "main.h"

/**
 *
 * print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha = 'a';
	
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar ('\n');
}
