#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
void _puts(char *str);
int _strlen(char *str);
int _printf(const char *format, ...);
char *cnvrt_to(char rep[], unsigned int num, int base);
int func_mag(char chr, va_list argp);
int _scan(char chr, va_list argp);
int print_char(va_list argp);
int _sign(va_list argp, int base);
int _unsign(va_list argp, int base);
int _string(va_list argp);
int _ptr(va_list argp);
int print_rot13(va_list argp);
int print_rev(va_list argp);
int base16_upper_lower(va_list argp, char *rep);
int check(va_list argp, const char *str);
int fun_call_mag(char chr, va_list chr);
int func_percent(int *flg, char chr);

#endif
