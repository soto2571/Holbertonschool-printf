#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: The args containing the unsigned int to print
 * Return: 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	/** iteracion sobre todos los bit de los numeros */
	for (i = 0; i < 32; i++)
	{
		/** Extrae el bit en la primera posicion*/
		p = ((a << (31 - i)) & num);

		/** Setea a 1 una vez que el primer non-zero bit se encuntrea*/
		if (p >> (31 - i))
			flag = 1;

		/**Printea la representacion binaria*/
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48); /** printea los digitos binarios*/
			cont++;
		}
	}
	if (cont == 0) /** si el numero es 0, se imprime un solo digito */
	{
		cont++;
		_putchar('0');
	}
	return (cont); /** se retorna el num total de digitos binarios */
}
