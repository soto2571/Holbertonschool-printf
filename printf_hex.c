#include "main.h"

/**
 * printf_hex - Prints an unsigned integer as a lowercase hexadecimal
 * number to the standard output.
 * @val: arguments containing the unsigned integer to print.
 * Return: counter.
 */
int printf_hex(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	/** Determina la cantidad de numeros en representacion hexadecimal*/
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++; /**incrementa por el ultimo digito */
	array = malloc(counter * sizeof(int));

	/** guarda los hexadecimales en el array */
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	/** imprime los digitos hexadecimales*/
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39; /**convierte con ASCII*/
		_putchar(array[i] + '0'); /**printea los digitos*/
	}
	free(array);
	return (counter);
}
