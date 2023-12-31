#include "main.h"

/**
 * bin_speci - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int bin_speci(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_std_output(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_std_output('0');
	}
	return (cont);
}
