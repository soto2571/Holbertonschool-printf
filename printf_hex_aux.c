#include "main.h"

/**
 * printf_hex_aux - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int printf_hex_aux(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0) /** calcula el numero de hexadecimales */
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));
	/** crea espacio y guarda hexadecimales */

	for (i = 0; i < counter; i++) /** convierte numeros a hexadecimales*/
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--) /** imprime disigtos en el array */
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array); /** libera la memoria asignada */
	return (counter);
}
