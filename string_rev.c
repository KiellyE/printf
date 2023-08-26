#include "main.h"

/**
 * string_rev.c - function that prints a string in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */

int string_rev(va_list args)
{
	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
