#include "main.h"

/**
 * fix_handlers - prints a char.
 * @val: arguments.
 * Return: 1.
 */

int fix_handlers(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
