#include "holberton.h"

/**
 * binary - get binary
 * @args: arguments
 * Return: string
 */

char *binary(va_list args)
{
	unsigned int pos, temp, result, bin, i;
	char *string;

	bin = va_arg(args, unsigned int);
	result = i = 0;
	pos = 1;
	while (bin)
	{
		result += (bin % 2) * pos;
		bin /= 2;
		pos *= 10;
		i++;
	}
	temp = i;
	pos /= 10;
	string = malloc(temp * sizeof(char) + 1);
	for (i = 0 ; i < temp; i++)
	{
		string[i] = ((result / pos) % 10) + '0';
		pos /= 10;
	}
	string[i] = '\0';
	return (string);
}
