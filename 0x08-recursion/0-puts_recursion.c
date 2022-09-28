#include "main.h"

/**
 * _put_recursion - function that prints a string,followed by a new line
 * @s:string
 * author: oludami08
 * date: 28th sept 2022
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s);
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
