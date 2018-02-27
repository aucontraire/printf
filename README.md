# Custom printf function

## Files and functions
* **holberton.h**: header file
  * typedef struct fmt (fmt_t)
  * BUFFER_SIZE
* **printf.c**: main custom _printf function
  * char *cs(char c) - convert char to str
  * char *none(char c) - no match found for format but % found
  * int _printf(const char *format, ...) - custom printf function
* **_strlen.c**
  * int _strlen(char *string) - gets string length
* **get_ops.c**
  * char *(*get_ops(char omar))(va_list) - getting format options
* **memalloc.c**
  * void _putchar(char *buffer, int size) - writes the string to stdout
  * char *_memcpy(char *dest, char *src, unsigned int n, unsigned int buffer) - copies specified memory
  * int memalloc(char *buff, int len2, char *buffer_2, int len1, double *total) - allocates to buffer
* **get_char.c**
  * char *ch(va_list c) - get char from arguments
* **get_str.c**
  * char *str(va_list *s) - get string from arguments
* **get_int.c**
  * char *_int(va_list integ) - convert integer to a string
* **get_mod.c**
  * char *modulo(void) - returns modulo
* **get_unsign.c**
  * char *_ui(va_list unsign) - convert ui to string
* **get_rot.c**
  * char *rot13(va_list str) - convert rot13
* **get_oct.c**
  * char *_octal(va_list args) - get octal
* **get_rev.c**
  * char *_rev(va_list args) - get rev
