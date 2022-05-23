#include "main.h"
/**
 * print_char - prints character
 * @argp: parameter
 * Description: print character
 * Return: 1
 */
int print_char(va_list argp)
{
	int i;

	i = va_arg(argp, int);
	_putchar(i);

	return (1);
}



/**
 * base16_upper_lower - print upper and lower case in base 16
 * @argp: parameter
 *@rep: parameter
 * Description: This function represent parameter for print hexadecimal format
 * Return: number of characters
 */
int base16_upper_lower(va_list argp, char *rep)
{
        unsigned int i = 0, cnt = 0;
        char *str;

        i = va_arg(argp, unsigned int);
        str = cvrt_to(rep, i, 16);
        _puts(str);
        cnt = _strlen(str);
        return (cnt);

}

/**
 * _sign - print sign
 * @argp: va_list parameter
 * @base: base
 * Description: numbers and signed
 * Return: num of characters
 */
int _sign(va_list argp, int base)
{
	int cnt = 0;
	int i  = 0;
	char *str;

	i = va_arg(argp, int);
	if (i < 0)
	{
		i = -(i);
		_putchar('-');
		cnt += 1;
	}
	str = cvrt_to("0123456789ABCDEF", i, base);
	_puts(str);
	cnt += _strlen(str);
	return (cnt);
}
/**
 * _unsign - function will print  unsign
 * @arg: va_list parameter
 * @base: base
 * Description: print numbers without signed
 * Return: num of characters
 */
int _unsign(va_list argp, int base)
{
	int cnt = 0;
	unsigned int i;
	char *str;

	i = va_arg(argp, unsigned int);
	str = cvrt_to("0123456789ABCDEF", i, base);
	_puts(str);
	cnt = _strlen(str);

	return (cnt);

}
/**
 * _string - print string
 * @argp: parameter
 * Description:  string
 * Return: num of characters
 */
int _string(va_list argp)
{
	char *str;
	int cnt = 0;

	str = va_arg(argp, char *);
	if (!str)
	{
		str = "(null)";
		_puts(str);

		return (_strlen(str));
	}
	_puts(str);
	cnt = _strlen(str);
	return (cnt);
}
