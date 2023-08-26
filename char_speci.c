#include "main.h"

/**
 * char_speci function: this function prints a char.
 * @val: arguments.
 * Return value: 1.
 */
 int char_speci(va_list val)
{
	char c;

	c = va_arg(val, int);
	_std_output(c);
	return (1);
}
