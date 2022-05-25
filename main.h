#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int p_int(va_list arg);
int p_unsigned(va_list arg);
int _printf(const char *format, ...);
int p_char(va_list arg);
int p_str(va_list arg);
int p_percent(void);
void p_binary(unsigned int n, unsigned int* printed);
int p_ToBinary(va_list arg);
int p_oct(va_list arg);
int p_IntToHex(unsigned int num, char _case);
int p_hex_base(va_list arg, char _case);
int p_hex(va_list arg);
int p_HEX(va_list arg);
int p_STR (va_list arg);

/**
 * struct identifierStruct - struct definition 
 * @indentifier: type
 * @printer: function to print
 */
typedef struct specifierStruct
{
char *specifier;
int (*printer)(va_list);
} specifierStruct;

#endif
