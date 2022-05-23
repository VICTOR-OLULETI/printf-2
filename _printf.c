#include "main.h"

/**
 *  _printf - prints %c and %s format specifier
 *  @format: format str
 *  Return: num of printed charaters
 */

int _printf(const char *format, ...)
{
	unsigned int a = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(valist, format);

	while (format[a])
	{
		for (; format[a] != '%' && format[a]; a++)
		{
			_putchar(format[a]);
			count++;
		}

		if (!format[a])
			return (count);

		f = check_specifier(&format[a + 1]);
		if (f != NULL)
		{
			count += f(valist);
			a += 2;
			continue;
		}
		if (!format[a + 1])
			return (-1);
		_putchar(format[a]);
		count++;
		if (format[a + 1] == '%')
			a += 2;
		else
			a++;
	}
	va_end(valist);
	return (count);
}
