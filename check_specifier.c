#include "main.h"

/**
 * check_specifier - checks for specifier
 * @format: format string
 * @count: char to be printed
 * @i: format string iterator
 * @args: va_list
 * Return: count
 */

int (*check_specifier(const char *format))(va_list args)
{
	unsigned int a;
	print_type p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"S", print_S},
		{"p", print_p},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (a = 0; p[a].t != NULL; a++)
	{
		if (*(p[a].t) == *format)
			break;
	}

	return (p[a].f);
}
