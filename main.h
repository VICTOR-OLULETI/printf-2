#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
<<<<<<< HEAD
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
=======

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
    int plus;
    int space;
    int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
    char c;
    int (*f)(va_list ap, flags_t *f);
} ph;

/* print_nums */
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

/* print_bases */
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* get_flag */
int get_flag(char s, flags_t *f);

/* print_alpha */
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);

/* print_address */
int print_address(va_list l, flags_t *f);

/* print_percent */
int print_percent(va_list l, flags_t *f);

>>>>>>> f330be97df8bbfe29b2f2f010e6b1aad5178200e

#endif
