#include "main.h"

/**
 * printf_HEX - prints an unsigned int as a hexadecimal.
 * @val: arguments containing the unsigned int.
 * Return: counter.
 */
int printf_HEX(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	/** Determina la cantidad de numeros en la representacion Hexadecimal*/
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++; /** incrementa por el ultimo digito*/

	/**Crea espacio en la memoria para que el array guarde el numero hexadecimal*/
	array = malloc(counter * sizeof(int));

	/** Llena el array con numeros hexadecimales*/
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	/** Printea los numeros hexadecimales */
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7; /** Convierte con ASCII*/
		_putchar(array[i] + '0'); /**Printea los numeros*/
	}
	free(array);
	return (counter); /**Retorna los numeros printeados*/
}
