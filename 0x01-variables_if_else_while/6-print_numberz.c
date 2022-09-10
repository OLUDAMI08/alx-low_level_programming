#include <stdio.h>
/**
 * main - Entry point
 * author: oludami08
 * date: 10th sept 2022
 * return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		putchar('\n');
		i++;
	}
	return (0);
}
