#include "main.h"

/**
 * printf_oct - Prints an unsigned integer as an octal number to the standard
 * output.
 * @val: arguments containing the unsigned int.
 * Return: counter.
 */
int printf_oct(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	/** calcula el numero de digitos en la representacion octal */
	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++; /**incrementa por el ultimo digito*/
	array = malloc(counter * sizeof(int));

	/** calcula y guarda cada digito octal en el array */
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	/** imprime cada digito del numero octal */
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0'); /** printea el digito*/
	}
	free(array);
	return (counter);
}
