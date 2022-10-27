#include "main.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */

unsigned int binary_to_uint(const char *b)
{
	int i, j, strlen = 0;
    int dec = 1;
    int total = 0;

    if (!b)
	    return (0);

    for (i = 0; b[i]; i++)
    {
        strlen++;
    }

    for (j = strlen - 1; j >= 0; j--)
    {
        if (b[j] == '1') 
        total = total + dec;
        dec = dec * 2;
    }
    return (total);
    
}

