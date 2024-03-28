#include "main.h"

/**
 * printf_char - prints a char.
 * @val: The args containing the char to print
 * Return: 1.
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int); /** recupera el character argument de va_list */
	_putchar(s); /** printea el char*/
	return (1); /** Retorna 1*/
}
