#ifndef HEADER_HOLBERTON
#define HEADER_HOLBERTON
#include <stdarg.h>
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);

int print_base16_upper_lower(va_list argp, char *representation);
int loop_format(va_list arg, const char *string);
int func_call_mag(char chr, va_list argp);
int func_percent(int *flg, char chr);

int _printf(const char *format, ...);
char *convert_to(char representation[], unsigned int num, int base);
int func_mag(char c, va_list argp);
int print_ptr(va_list argp);
int print_rot13(va_list argp);
int print_rev(va_list argp);

int _switch(char c, va_list argp);
int print_character(va_list argp);
int print_sign(va_list argp, int base);
int print_unsign(va_list argp, int base);
int print_string(va_list argp);
#endif
