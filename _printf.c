#include "main.h"
/**
* _printf - this function calls other functions.
* @format: identifier to look for.
* Return: the length of the output.
*/

int _printf(const char *format, ...)
{
	func_handler fh[] = {
	{"%c", char_speci}, {"%s", str_speci}, {"%%", mdlus_speci},
	{"%i", int_speci}, {"%d", deci_speci}, {"%b", bin_speci},
	{"%u", unsigned_speci}, {"%o", octal_speci}, {"%x", hex_speci},
	{"%X", HEX_speci}, {"%S", xstring_speci}, {"%p", pointer_speci},
	{"%r", strrev_speci}, {"%R", rot13ed_speci}
	};

	int i = 0, h, length_printed = 0;
	va_list listed_args;

	va_start(listed_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Main:
	while (format[i] != '\0')
	{
		h = 13;
		while (h >= 0)
		{
			if (fh[h].id[1] == format[i + 1] && fh[h].id[0] == format[i])
			{
				length_printed += fh[h].f(listed_args);
				i+=2;
				goto Main;
			}
			h--;
		}
		_std_output(format[i]);
		length_printed++;
		i++;
	}
	va_end(listed_args);
	return (length_printed);
}
