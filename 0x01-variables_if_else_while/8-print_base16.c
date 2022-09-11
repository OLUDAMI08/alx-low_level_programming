#include <stdio.h>

/**
 * main -Entry point
 * author: oludami08
 * date: 11 sept 2022
 * Return: always 0 (success)
 */

int main(void)
{

	int num;

	char alp;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (alp = 'a'; alp < 'f'; alp++)
		putchar(alp);

	putchar('\n');
	return (0);
}
