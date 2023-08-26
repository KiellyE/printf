#include "main.h"
/**
 * xstring_speci - prints a exclusuive string.
 * @val: argum ent.
 * Return: the length of the string.
 */

int xstring_speci(va_list val)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_std_output('\\');
			_std_output('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_std_output('0');
				len++;
			}
			len = len + HEX_helper_printf(cast);
		}
		else
		{
			_std_output(s[i]);
			len++;
		}
	}
	return (len);
}
