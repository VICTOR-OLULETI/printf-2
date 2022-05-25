#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_char - writes the character c to stdout
 * @arg: argument
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_int - prints an integer.
 * @arg: argument
 * Return: 0
 */

int print_int(va_list arg)
{
	unsigned int div = 1;
	unsigned i;
	unsigned rp;
	unsigned num = 0;
	int n = va_arg(arg, int);
	if (n < 0)
	{
		_putchar('-');
		num++;
		n *= -1;
}

for (i = 0; n / div > 9; i++, div *= 10)
;

for (; div >= 1; n %= div, div /= 10, num++)
{
	rp = n / div;
	_putchar('0' + rp);
}
return (num);
}



/**
 * print_STR - prints a string with a `S`
 * @arg: argument
 * Return: number of character printed
 */

int p_STR(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
else if (*str == '\0')
	return (-1);

for (i = 0; str[i]; i++)
{
	if ((str[i] < 32 && str[i] > 0) || str[i] >= 127)
	{
		_putchar('\\');
		_putchar('x');
		if (i < 16)
			_putchar('0');

		p_IntToHex(str[i], 'A');
	}
	else
		_putchar(str[i]);
}

return (i);
}

/**
 * print_str - prints a string with a `s` (lower case) specifier
 * @arg: argument
 * Return: number of character printed
 */

int print_str(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * p_unsigned - prints an unsigned int.
 * @arg: argument
 * Return: 0
 */

int print_unsigned(va_list arg)
{
	int div = 1;
	int i;
	int rp;
	unsigned int n = va_arg(arg, unsigned int);
	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		rp = n / div;
		_putchar('0' + rp);
	}
	return (i + 1);
}
