#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function to prints strings, followed by a new line.
 * @separator: String to be printed between strings.
 * @n: Number of strings passed to the function.
 * @...: Number of strings to be printed.
 * Description: Don't print if separator is NULL, If one of
 * the strings is NULL,
 * (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
