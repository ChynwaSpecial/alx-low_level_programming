#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int a = 0;
	char *string, *ch = "";
	va_list fileList;

	va_start(fileList, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", ch, va_arg(fileList, int));
					break;
				case 'i':
					printf("%s%i", ch, va_arg(fileList, int));
					break;
				case 'f':
					printf("%s%f", ch, va_arg(fileList, double));
					break;
				case 's':
					string = va_arg(fileList, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", ch, string);
					break;
				default:
					a++;
					continue;
			}
			ch = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(fileList);
}
