#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * @args: The arg containing the string to print in reverse
 *
 * Return: the string
 */
int printf_srev(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";

	/** calcula el len del string */
	while (s[j] != '\0')
		j++;

	/** printea el string al reves */
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
