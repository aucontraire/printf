#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_ops - getting format options
 * @omar: string being passed
 * Return: particular function resp to the string
 *
 */

char *(*get_ops(char omar))(va_list)
{
	int a;
	fmt_t ops[] = {
		{"c", *ch},
		{"s", str},
		{"%", modulo},
		{"d", _int},
		{"i", _int},
		{"u", _ui},
		/*{"o", _octal},*/
		{"r", _rev},
		{"R", rot13},
		{"b", binary},
		{NULL, NULL}
	};

	for (a = 0; ops[a].type; a++)
	{

		if (omar == *ops[a].type)
			return (ops[a].f);
	}

	return (NULL);
}
