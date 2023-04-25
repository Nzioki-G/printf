#include "main.h"

/**
 * buffer_char - stores a character in buffer
 * @specifier: the modifier of @arg
 * @arg: the character to hold in a buffer
 * Return: buffer write-able to stdout
 */
char *buffer_char(char specifier, char arg)
{
	char *buffer;

	buffer = malloc(sizeof(char) + 1);
	if (specifier == '%')
		buffer[0] = '%';

	buffer[0] = arg;
	buffer[1] = '\0';

	return (buffer);
}

/**
 * buffer_str - stores a string in buffer
 * @specifier: the modifier of @str
 * @str: buffer printable on write()
 * Return: string
 */
char *buffer_str(char specifier, char *str)
{
	char *buffer;

	buffer = malloc(strlen(str));
	if (specifier == 'S')
		buffer = print_white(str);
	else if (specifier == 'r')
		buffer = print_reverse(str);
	else if (specifier == 'R')
		buffer = print_rot13(str);
	else
		buffer = str;

	return (buffer);
}

/**
 * buffer_number - stores an number into buffer
 * @specifier: how to modify @num
 * @num: the number to hold in a buffer
 * Return: buffer write-able to stdout
 */
char *buffer_number(char specifier, int num)
{
	char *buffer;

	buffer = malloc(64);

	if (specifier == 'd')
		sprintf(buffer, "%d", num);
	else if (specifier == 'i')
		sprintf(buffer, "%i", num);
	else if (specifier == 'b')
		buffer = convert_to_binary(num);
	else if (specifier == 'o')
		sprintf(buffer, "%o", num);
	else if (specifier == 'u')
		sprintf(buffer, "%u", num);
	else if (specifier == 'x')
		sprintf(buffer, "%x", num);
	else if (specifier == 'X')
		sprintf(buffer, "%X", num);

	return (buffer);
}

/**
 * buffer_pointer - stores an address in buffer
 * @specifier: the modifier of @p
 * @p: an address
 * Return: string
 */
char *buffer_pointer(char specifier, void *p)
{
	char *buffer;
	char type[3];

	type[0] = '%';
	type[1] = specifier;
	type[2] = '\0';

	buffer = malloc(64);
	sprintf(buffer, type, p);
	return (buffer);
}
