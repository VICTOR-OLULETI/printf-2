#include "main.h"
#include <stdarg.h>

/**
 * _ptr - print_base16_upper_lower
 * @arg: va_list parameter
 * Description: This function print address pointer
 * in representation parameter for print hexadecimal format
 * Return: address pointer
 */

int _ptr(va_list argp)
{
	int cnt, n, i;
	unsigned long int d, buff;
	char c[100];

	d = (unsigned long int)va_arg(argp, void*);
	buff = d;
	cnt = 1;
	i = 0;

	if (!d)
	{
		_puts("(nil)");
		return (5);
	}
	while (buff)
	{
		buff /= 16;
		cnt++;
	}
	c[cnt + 1] = '\0';
	while (d > 0)
	{
		n = (d % 16);
		if (n >= 0 && n <= 9)
			c[cnt] = ((char)(n + '0'));
		else
			c[cnt] = ((char)(n + 'W'));
		cnt--;
		d /= 16;
	}
	c[0] = '0';
	c[1] = 'x';

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	return (i);
}

/**
 * _rot13 - prints a string using rot13
 * @arg: list of arguments from _printf
 * Return: length of the printed string
 */
int _rot13(va_list argp)
{
	register short i, j;
	char rt13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char RT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(argp, char *);

	if (!str)
	{
		return (-1);
	}

	for (j = 0; str[j]; j++)
	{
		if (str[j] < 'A' || (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z')
			_putchar(str[j]);
		else
		{
			for (i = 0; i <= 52; i++)
				if (str[j] == rt13[i])
					_putchar(RT13[i]);
		}
	}
	return (j);
}

/**
 * _rev - string  reverse
 * @argp: argument _printf
 * Return: length
 */
int _rev(va_list argp)
{
	int i = 0;
	int j;
	char *str = va_arg(argp, char *);

	if (!str)
	{
		return (-1);
	}

	while (str[i])
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}

	return (i);
}
