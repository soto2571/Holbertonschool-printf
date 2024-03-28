#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	/**Recopila los int the el args list*/
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	/** trabaja con numeros negativos */
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	/**Printea cada numero de int*/
	if (num > 0)
	{
		/** Determina la magnitud del numero a la 10 */
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		/** Resetea num al numero original positivo*/
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0'); /**printea el digito*/
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0'); /**printea el ultimo digito*/
	return (i); /** retorna la cantidad de caracteres printeados*/
}

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0'); /**printea el ultimo digito*/

	return (i); /**retorna el numero de caracteres printeados*/
}
