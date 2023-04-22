#include "main.h"

/**
 * _print - produces output according to format specified
 * @format: the type/format of arguements to follow
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list(list);
	int bytes, i;
	char buffer[8], *str;

	va_start(list, format);
	bytes = 0;
	i = 0;
	/* write(fd, buf, count) */
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			switch(format[i])
			{
				case '%':
					buffer[0] = '%';
					bytes += write(1, buffer, sizeof(char));
					break;
				case 'c':
					sprintf(buffer, "%c", va_arg(list, int));
					bytes += write(1, buffer, sizeof(char));
					break;
				case 's':
					str = va_arg(list, char *);
					bytes += write(1, str, strlen(str));
					break;
				default:
					break;
			}
			i++;
			continue;
		}
		else
		{
			buffer[0] = format[i];
			bytes += write(1, buffer, sizeof(char));
			i++;
		}
	}
	va_end(list);
	return (bytes);
}
