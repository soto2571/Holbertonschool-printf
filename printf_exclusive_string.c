#include "main.h"
/**
 * printf_exclusive_string - Prints a string, replacing non-printable character
 * with hexadecimal escapes.
 * @val: The args containing the string to print.
 * Return: The number of characters printed.
 */

int printf_exclusive_string(va_list val)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(val, char *); /** Recopila el string arg*/
	if (s == NULL)
		s = "(null)"; /** Manejamos el NULL str*/

	/** Itera por cada caracter del string*/
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
		/** Printea hexadeximal para los caracteres no printable*/
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_aux(cast);
		}
		else /**Printea los caracteres*/
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
