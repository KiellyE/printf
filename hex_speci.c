#include "main.h"

/**
<<<<<<< HEAD:hex_speci.c
 * hex_speci - prints hexadecimal number to stdout.
 * @val: arguments.
 * Return: counter strigs.
 */
int hex_speci(va_list val)
=======
 * HEX_speci - prints an hexadecimal number to stdout.
 * @val: arguments.
 * Return: counter value.
 */
int HEX_speci(va_list val)
>>>>>>> 8496b050916467884da584074c58c67b00b76f73:HEX_speci.c
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
<<<<<<< HEAD:hex_speci.c
			array[i] = array[i] + 39;
=======
			array[i] = array[i] + 7;
>>>>>>> 8496b050916467884da584074c58c67b00b76f73:HEX_speci.c
		_std_output(array[i] + '0');
	}
	free(array);
	return (counter);
}
