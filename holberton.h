#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 * struct fmt - a structure containing a char to compare
 * @type: the char we want to compare to
 * @f: the address of the function
 */

typedef struct fmt
{
	char *type;
	char *(*f)();
} fmt_t;

int _printf(const char *format, ...);
void _putchar(char *buffer, int size);
int _strlen(char *string);
char *ch(va_list c);
char *str(va_list *s);
char *modulo(void);
char *_int(va_list integ);
char *_ui(va_list unsign);
char *rot13(va_list str);
char *_octal(va_list args);
char *_rev(va_list args);
char *binary(va_list args);
char *_memcpy(char *dest, char *src, unsigned int n, unsigned int buffer);
int memalloc(char *buff, int len2, char *buffer_2, int len1, double *total);
char *cs(char c);
char *(*get_ops(char omar))(va_list);
#endif
