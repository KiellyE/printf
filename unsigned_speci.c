#include "main.h"
/**
 * unsigned_speci - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
 */
int unsigned_speci(va_list args)
{
	unsigned int in = va_arg(args, unsigned int);
	int num, last = in % 10, digit, exp = 1;
	int  i = 1;

	in = in / 10;
	num = in;

	if (last < 0)
	{
		_std_output('-');
		num = -num;
		in = -in;
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
		num = in;
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