#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: type char pointer
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}

/**
 * _strlenc - Returns the length of a constant string.
 * @s: type char pointer
 * Return: length of the string.
 */
int _strlenc(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
