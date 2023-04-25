#include "main.h"

/**
 * print_white - modifies a string such that it's white space is in ascii
 * @str: the string to consider
 * Return: string with 'visible' white space
 */
char *print_white(char *str)
{
	unsigned long int i;
	int s = 0, b = 0;
	char *buffer, *hex_str;

	buffer = malloc(2 * strlen(str) + 1);
	hex_str = malloc(sizeof(char) * 3);

	/* ascii values from 0-32 are whitespace chars */
	while (str[s])
	{
		if (str[s] > 32)
		{
			buffer[b++] = str[s++];
			continue;
		}
		sprintf(hex_str, "%02X", str[s++]);
		buffer[b++] = '\\';
		buffer[b++] = 'x';
		for (i = 0; i < strlen(hex_str); i++)
		{
			buffer[b] = hex_str[i];
			b++;
		}
	}
	buffer[b] = '\0';
	return (buffer);
}

/**
 * print_reverse - reverses a string
 * @str: string to reverse
 * Return: new string
 */
char *print_reverse(char *str)
{
	char *buffer;
	int len, b, s;

	len = strlen(str);
	buffer = malloc(len + 1);
	s = len - 1;
	for (b = 0; b < len; b++)
		buffer[b] = str[s--];
	buffer[b] = '\0';
	return (buffer);
}

/**
 * print_rot13 - rotates a string by 13 character so that a=n m=z
 * @str: the str to roatate
 * Return: new string rotated
 */
char *print_rot13(char *str)
{
	char *buffer, c;
	int i, len = strlen(str);

	buffer = malloc(len + 1);
	for (i = 0; i < len; i++)
	{
		c = str[i];
		if ((c >= 65 && c <= 77) || (c >= 97 && c <= 109))
			c += 13;
		else if ((c >= 78 && c <= 90) || (c >= 110 && c <= 122))
			c -= 13;
		buffer[i] = c;
	}
	buffer[i] = '\0';
	return (buffer);
}

/**
 * convert_to_binary - converts a number to binary
 * @num: the decimal number
 * Return: a string holding the binary number
 */
char *convert_to_binary(int num)
{
	char buffer[64];
	int i = 0;

	while (num >= 1)
	{
		buffer[i] = (num % 2) ? '1' : '0';
		num /= 2;
		i++;
	}
	buffer[i] = '\0';
	return (print_reverse(buffer));
}
