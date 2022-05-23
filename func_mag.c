#include "main.h"
#include <stdarg.h>

/**
 * Func_mag - function control
 * @c: character
 * @argp: varaiadic list
 * Decription: calls function when character is found
 * Return: count of printrd character 
 */

int function_manager(char c, va_list argp)
{
	int cnt = 0;

	cnt = _scan(c, argp);
	if (c == 'p')
		cnt = print_ptr(argp);
	return (cnt);
}

/**
 *_switch - switch
 *@c: character to find
 *@arg: va_list type
 *Description: This function evaluate cases
 *Return: count of printed characters
 */
int _scan(char c, va_list arg)
{
	int cont = 0;

	switch (c)
	{
		case 'd':
		case 'i':
			cont += print_sign(arg, 10);
			break;
		case 'o':
			cont += print_unsign(arg, 8);
			break;
		 case 'b':
                        cont += print_unsign(arg, 2);
                        break;
                case 'c':
                        cont += print_character(arg);
                        break;
		case 'u':
                        cont += print_unsign(arg, 10);
                        break;
                case 'x':
                        cont += print_base16_upper_lower(arg, "0123456789abcdef");
                        break;
                case 'X':
                        cont += print_base16_upper_lower(arg, "0123456789ABCDEF");
                        break;
		case 'r':
			cont += print_rev(arg);
			break;
		case 'R':
			cont += print_rot13(arg);
			break;
	
		default:
			cont = -1;
	}
	return (cont);
}
