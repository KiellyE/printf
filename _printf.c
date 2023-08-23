#include "main.h"

int _printf(const char *format, ...)
{
    int all_characters_printed = 0;
    va_list args_list;

    if (format == NULL)
        return (-1);

    va_start(args_list, format);

    while (*format)
    {
        if (*format != '%')
   {
            write(1, format, 1);
            all_characters_printed++;
        }
        else
        {
            format++;
            if (*format == '\0')
                break;

            if (*format == '%')
            {
                write(1, format, 1);
                all_characters_printed++;
            }
            else if (*format == 'c')
            {
                char c = va_arg(args_list, int);
                write(1, &c, 1);
                all_characters_printed++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args_list, char*);
                int str_len = 0;

                while (str[str_len] != '\0')
                    str_len++;

                write(1, str, str_len);
                all_characters_printed += str_len;
            }
        }
        format++;
    }
    va_end(args_list);

    return all_characters_printed;
}
