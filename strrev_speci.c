#include "main.h"

/**
 * strrev_speci - function that prints a strig in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int strrev_speci(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_std_output(s[i]);
	return (j);
}
