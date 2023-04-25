#include "main.h"

/**
 * handle_format - goes through @format, linking modifiers to args
 * @format: the string with 0+ directives
 * @args: the list of arguements to print
 * Return: number of characters printed
 */
int handle_format(char *format, va_list args)
{
    char *buffer;
    int i = 0, bytes = 0;

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    buffer = buffer_char(format[i], va_arg(args, int));
                    break;
                case 's':
                case 'S':
                case 'r':
                case 'R':
                    buffer = buffer_str(format[i], va_arg(args, char *));
                    break;
                case 'd':
                case 'i':
                case 'b':
                case 'u':
                case 'o':
                case 'x':
                case 'X':
                    buffer = buffer_number(format[i], va_arg(args, int));
                    break;
                case 'p':
                    buffer = buffer_pointer(format[i], va_arg(args, void *));
                    break;
                default:
                    buffer = buffer_char('c', format[i]);
            }
            bytes += write(1, buffer, strlen(buffer));
            i++;
            continue;
        }
        buffer = buffer_char('c', format[i++]);
        bytes += write(1, buffer, 1);
    }
    return (bytes);
}