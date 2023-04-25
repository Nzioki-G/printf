#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 2, len2;
	unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    /*ui = (unsigned int)INT_MAX + 1024;*/
	ui = (unsigned int) 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
	_printf("%S\n", "Best\nSchool");
	_printf("%b\n", 98);
	


/*    printf("Unknown:[%r]\n");

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
*/
	return (0);
}
