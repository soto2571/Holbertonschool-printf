#include "main.h"

/**
 * printf_HEX_aux - prints an hexgecimal number this is a helper
 * function for printf_HEX.
 * @num: number to print in HEX.
 * Return: counter.
 */
int printf_HEX_aux(unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	/** cuenta el numero de hexadecimales para representar el numero */
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++; /**incrementa por el ultimo digito*/
	array = malloc(counter * sizeof(int));

	/**Llena el array con los numeros hexadecimales */
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	/** Printea los numeros hexadecimales */
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7; /**Convierte con ASCII*/
		_putchar(array[i] + '0'); /**printea los numeros*/
	}
	free(array);
	return (counter);
}
