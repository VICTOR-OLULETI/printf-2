#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * printIdentifiers - prints special characters
 * @next: character after the %
 * @arg: argument of the indentifier
 * Return: the number of characters to be printed
 */

int printIdentifiers(char next, va_list arg)
{
        int Index;

        identifierStruct functs[] = {
                {"c", print_char},
                {"s", print_str},
                {"d", print_int},
                {"i", print_int},
                {"u", print_unsigned},
                {"b", print_unsignedToBinary},
                {"o", print_oct},
                {"x", print_hex},
                {"X", print_HEX},
                {"S", print_STR},
                {NULL, NULL}
        };

        for (Index = 0; functs[Index].identifier != NULL; Index++)
        {
                if (functs[Index].identifier[0] == next)
                        return (functs[Index].printer(arg));
        }
        return (0);
}




/**
 * _printf - mimic printf from stdio
 * @format: character string composed of zero or more directives
 * Return: the number of characters printed
 * return -1 for incomplete identifier error
 */

int _printf(const char *format, ...)
{
        unsigned int i;
        int iden_Print = 0;
        int char_Print = 0;
        va_list arg;

        va_start(arg, format);
        if (format == NULL)
                return (-1);

        for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] != '%')
                {
                        _putchar(format[i]);
                        char_Print++;
                        continue;
                }
                if (format[i + 1] == '%')
                {
                        _putchar('%');
                        char_Print++;
                        i++;
                        continue;
                }
                if (format[i + 1] == '\0')
                        return (-1);

                iden_Print = printIdentifiers(format[i + 1], arg);
                if (iden_Print == -1 || iden_Print != 0)
                        i++;
                if (iden_Print > 0)
                        char_Print += iden_Print;

                if (iden_Print == 0)
                {
                        _putchar('%');
                        char_Print++;
                }
        }
        va_end(arg);
        return (char_Print);
}
