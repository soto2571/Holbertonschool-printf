#include "main.h"
/**
 * printf_unsigned - prints an unsigned integer
 * @args: argument containing the integer to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	/** Va a manejar y convertir los numeros a negativos*/
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	/**Printea cada unsigned int*/
	if (num > 0)
	{
		/** Determina la magnitud de numeros multiplicandolo a la 10 */
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n; /*Resetea num al int original*/
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0'); /**printea el digito*/
			num = num - (digit * exp); /** Cambia num */
			exp = exp / 10; /** Discrementa la magnitud */
			i++; /** incrementa al siguiente digito*/
		}
	}
	_putchar(last + '0'); /** imprime el ultimo digito */

	return (i); /** devuelve el numero de caracteres impresos */
}
