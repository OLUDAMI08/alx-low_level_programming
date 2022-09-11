#include <stdio.h>

/**
 * main - Entry point
 * author: oludami08
 * date: 11 sept 2022
 * Return: always 0 (success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		if (num != '9')
		{

			putchar(num);
			putchar(',');
			putchar(' ');

		}
		else
			putchar(num);
}
