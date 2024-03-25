#include "main.h"
/**
 *_printf - print the text to the standard output
 *
 *@format: format specifier
 *Return: The string ask
 */
int _printf(const char *format, ...)
{
	unsigned int i, s_count, count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchr(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			putchr(va_arg(args, int));
			i++;

		}
		else if (format[i + 1] == 's')
		{
			s_count = putss(va_arg(args, char *));
			i++;
			count += s_count;
		}
		else if (format[i + 1] == '%')
		{
			putchr('%');
		}
		count += 1;
	}

	va_end(args);
	return (count);
}
