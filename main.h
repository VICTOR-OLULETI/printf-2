<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
=======
#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct print_struct - structure for printing various types
 * @t: type to print
 * @f: function to print
 */

typedef struct print_struct
{
	char *t;
	int (*f)(va_list);
} print_type;

>>>>>>> b81f9254e87383d98afe708d9aa0bc0e5072d4cd

int _putchar(char c);
int p_int(va_list arg);
int p_unsigned(va_list arg);
int _printf(const char *format, ...);
<<<<<<< HEAD
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
=======
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_S(va_list S);
int print_p(va_list p);
int (*check_specifier(const char *format))(va_list);
int print_hex(unsigned int n, unsigned int c);
int hex_print(char c);
int print_r(va_list r);
int print_R(va_list R);
>>>>>>> b81f9254e87383d98afe708d9aa0bc0e5072d4cd

#endif
