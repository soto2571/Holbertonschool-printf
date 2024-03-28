#include "main.h"
/**
 * printf_rot13 - Encodes a string using ROT13 substitution cipher and
 * prints it.
 * @args: The argument containing the string to encode
 * Return: counter
 *
 */
int printf_rot13(va_list args)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	/** si el string es NULL, asignala a "(NULL)" */
	if (s == NULL)
		s = "(null)";

	/** Itera por cada caracter en el string */
	for (i = 0; s[i]; i++)
	{
		k = 0;
		/** Itera por el alfabeto para encontrar el ROT13 char */
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]); /** printea el ROT13 char */
				counter++;
				k = 1;
			}
		}
		/** Si el char no es alfabetico, printea sin cambios */
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
