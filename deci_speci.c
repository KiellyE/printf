#include "main.h"

/**
 * deci_speci - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int deci_speci(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_std_output('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_std_output(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_std_output(last + '0');

	return (i);
}
