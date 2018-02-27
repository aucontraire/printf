# Custom printf function

## Files and functions
* **holberton.h**: header file
  * typedef struct fmt (fmt_t)
  * BUFFER_SIZE
* **printf.c**: main custom _printf function
  * _char *cs(char c)_ - convert char to str
  * _char *none(char c)_ - no match found for format but % found
  * _int _printf(const char *format, ...)_ - custom printf function
* **_strlen.c**
  * _int _strlen(char *string)_ - gets string length
* **get_ops.c**
  * _char *(*get_ops(char omar))(va_list)_ - getting format options
* **memalloc.c**
  * _void _putchar(char *buffer, int size)_ - writes the string to stdout
  * _char *_memcpy(char *dest, char *src, unsigned int n, unsigned int buffer)_ - copies specified memory
  * _int memalloc(char *buff, int len2, char *buffer_2, int len1, double *total)_ - allocates to buffer
* **get_char.c**
  * _char *ch(va_list c)_ - get char from arguments
* **get_str.c**
  * _char *str(va_list *s)_ - get string from arguments
* **get_int.c**
  * _char *_int(va_list integ)_ - convert integer to a string
* **get_mod.c**
  * _char *modulo(void)_ - returns modulo
* **get_unsign.c**
  * _char *_ui(va_list unsign)_ - convert ui to string
* **get_rot.c**
  * _char *rot13(va_list str)_ - convert rot13
* **get_oct.c**
  * _char *_octal(va_list args)_ - get octal
* **get_rev.c**
  * _char *_rev(va_list args)_ - get rev
