#include "main.h"
/**
 * str_speci - prints a string.
 * @val: argument.
 * Return: the length of the string.
 */

int str_speci(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		i = 0;
		while (i < len)
		{
			_std_output(s[i]);
			i++;
		}
		return (len);
	}
	else
	{
		len = _strlen(s);
		i = 0;
		while (i < len)
		{
			_std_output(s[i]);
			i++;
		}
		return (len);
	}
}
