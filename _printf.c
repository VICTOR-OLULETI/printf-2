#include "main.h"
/**
 * __print - the function act as printf function
 * Description: This function has some of the features of c printf
 * @format: pointer to chatacter to format
 * Return: number of character printed
 */

int _printf(const char *format, ...)
{
        const char *str;
        int cnt = 0;

        va_list argp;

        if (!format)
                return (-1);
        Va_start( argp, format);
        str = format;
        cnt = check(arg, str);
        va_end(arg);
        return (cnt);
}

/**
 * check - iterate through the string
 * @str: pointer from format
 * @arg: variadic list
 * Descption: function iterate through the string
 * Return: num of formated character
 */


int check(va_list arg, const char *string)
{
      int i = 0;
        int p_check = 0;
        int fm_cnt = 0;
        int cnt = 0;
        int chase = 0;
        int flg = 0;

        while (i < _strlen((char *)str) && *str != '\0')
        {
                char chr = str[i];
                if (chr == '%')
                {
                        i++;
                        flg++;
                        chr == str[i];
                        if (chr == '\0' && _strlen((char *)str) == 1)
                                return (-1);
                        if (chr == '\0')
                                return (cnt);
                        if (chr == '%')
                        {
                                flg++;
                        }
                        else
                        {
                                fm_cnt = func_mag(chr, arg);

                                if (fm_cnt >= 0 && fm_cnt != -1)
                                {
                                        i++;
                                        chr = str[i];
                                        if(chr == '%')
                                                flg--;
                                        cnt = cnt + fm_cnt;
                                        }
                                else if(fm_cnt == -1 && aux != '\n')
                                {
                                        cnt += _putchar('%');
                                }
                        }
                }
                p_check i = func_percent(&flg, chr);
                cnt += p_check;

                if (p_check == 0 && chr != '\0' && chr != '%')
                        cnt += _putchar(aux), i++;
                p_check = 0;
        }
        return (cnt);

}


/**
 * func_call_mag - call function
 * @chr: character
 * @arg: va_list arg
 * Description: function call func_mang
 */

int func_call_mag(char chr, va_list argp)
{
            int cnt = 0;

        cnt = func_mag(chr argp);

        return (cnt);
}
