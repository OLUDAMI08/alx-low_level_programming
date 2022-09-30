#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc: count
 * @argv: an array 
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
