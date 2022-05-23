#include "main.h"
#include <stdlib.h>
#include <unistd.h>


/**
 * _putchar - character output
 * @c: character
 * Return:  1 else 0
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
/**
 *cnvrt_to - convert numbers
 *decimal, octal, hexadecimal, binary etc..
 *@rep: char ;
 *@num: num to of char to change
 *@base: base to num
 *Return: pointer
 */
char *cnvrt_to(char representation[], unsigned int num, int base)
{
        char *p;
        static char buff[128];
        int mod = 0;

        p = &buff[127];
        *p = '\0';

        do {
                mod = num % base;
                *--p = representation[mod];
                num /= base;
        } while (num != 0);
        return (p);
}
