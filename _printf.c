#include "main.h"

/**
 * _printf - prints output as per format
 * @format: string with 0+ directives
 * @...: the varied type args to print within string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    int bytes = 0;
    char *format_string;
    va_list args_list;

    format_string = malloc(strlen(format) + 1);
    strcpy(format_string, format);

    va_start(args_list, format);
    bytes = handle_format(format_string, args_list);
    va_end(args_list);

    return (bytes);
}