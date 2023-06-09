#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

char *hash_flag(char specifier, int arg);
char *buffer_char(char specifier, char print_me);
char *buffer_str(char specifier, char *str);
char *buffer_number(char specifier, int num);
char *buffer_pointer(char specifier, void *);

/* modify string */
char *print_white(char *str);
char *print_reverse(char *str);
char *print_rot13(char *str);
char *convert_to_binary(int num);

int _printf(const char *format, ...);
int handle_format(char *format, va_list args);

#endif
