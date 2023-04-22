#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 2, len2;

	printf("ME:\n");
	len = _printf("Let's try t0 _pr1ntf 3 simple sentence\n");
	_printf("Character:[%c]\n", 'c');
	_printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");

	printf("\n\nPrintF:\n");
	len2 = printf("Let's try to printf a simple sentence\n");
	printf("Character:[%c]\n", 'c');
	printf("String:[%s]\n", "I am a string !");
	len2 = printf("Percent:[%%]\n");
	len2 += len;

	return (0);
}
