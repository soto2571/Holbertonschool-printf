#include "main.h"

/**
 * printf_oct - prints an octal number.
 * @val: arguments.
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
	counter++;
	array = malloc(counter * sizeof(int));

	/** calcula y guarda cada digito octal en el array */
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	/** imprime cada digito del numero octal en reversa */
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
