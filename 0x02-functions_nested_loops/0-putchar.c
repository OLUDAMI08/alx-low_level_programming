#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 * author: oludami08
 * date: 12 sept 2022
 * Return: always 0 (success)
 */
int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(s[i]);
	return (0);
}
