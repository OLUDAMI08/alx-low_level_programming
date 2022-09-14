#include "main.h"

/**
 * print_alphabet - a function that print 10 times the alphabet
 * author: oludami08
 * date: 13 sept 2022
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
