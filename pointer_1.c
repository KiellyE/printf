#include "main.h"
#include <stdlib.h>

/**
 * pointer_1 - prints a hexadecimal number.
 * @num: the number to be printed.
 * Return: the number of characters printed.
 */
int pointer_1(unsigned long int num)
{
	int i;
	int *hexDigits;
	int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	hexDigits = (int *)malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		hexDigits[i] = temp % 16;
		temp /= 16;
	}

	for (i = counter - 1; i >= 0; i--)
	{
		if (hexDigits[i] > 9)
			hexDigits[i] = hexDigits[i] + 39;
		_putchar(hexDigits[i] + '0');
	}

	free(hexDigits);
	return counter;
}
