#include "main.h"

/*
 * print alphabet - print the alphabet in lowercase
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
