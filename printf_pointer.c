#include "main.h"

/**
 * printf_pointer - Prints the memory address of a pointer in
 * hexadecimal format
 * @val: arguments.
 * Return: counter.
 */
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		/** imprime "(nil)" si el pointer es NULL*/
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	/** convierte pointer a long int para buscar su representacion hexadecimal */
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');

	/**printea el valor hexadecimal thel pointer*/
	b = printf_hex_aux(a);
	return (b + 2); /** Add 2 por el "0x" prefix*/
}
