#include "main.h"
#include <stdarg.h>

/**
 * Func_mag - function control
 * @c: character
 * @argp: varaiadic list
 * Decription: calls function when character is found
 * Return: count of printrd character 
 */

int func_mag(char chr, va_list argp)
{
	int cnt = 0;

	cnt = _scan(chr, argp);
	if (chr == 'p')
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
int _scan(char chr, va_list argp)
{
	int cnt = 0;

	switch (chr)
	{

		case 'd':
		case 'i':
			cnt += _sign(argp, 10);
			break;
		case 'o':
			cnt += _unsign(argp, 8);
			break;
		 case 'b':
                        cnt += _unsign(argp, 2);
                        break;
                case 'c':
                        cnt += print_char(argp);
                        break;
		case 'u':
                        cnt += _unsign(argp, 10);
                        break;
                case 'x':
                        cnt += base16_upper_lower(argp, "0123456789abcdef");
                        break;
                case 'X':
                        cnt += base16_upper_lower(argp, "0123456789ABCDEF");
                        break;
		case 'r':
			cnt += print_rev(argp);
			break;
		case 'R':
			cnt += print_rot13(argp);
			break;
	
		default:
			cnt = -1;
	}
	return (cnt);
}
