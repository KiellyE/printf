#include "main.h"

/**
 * pointer_speci - prints an hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int pointer_speci(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_std_output(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_std_output('0');
	_std_output('x');
	b = hex_helper_printf(a);
	return (b + 2);
}
