This is our first team project creating a copy of printf.
(William Pellot, Sebastian Soto)

DESCRIPTION:
_printf replicates the printf command and all its functionality.

PROTOTYPE:
int _printf(const char *format, ...);

Example of usage:
#include <stdio.h>
#include "main.h"

_printf("%s\n", "Helllo World");
_printf("d\n", 42);
return (0);


