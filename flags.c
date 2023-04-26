#include "main.h"

char *hash_flag(char specifier, int arg)
{
    char *buffer, val[64];
    int b = 0, i;

    buffer = malloc(64);

    switch (specifier)
    {
        case 'o':
            buffer[b++] = '0';
            sprintf(val, "%o", arg);
            for (i = 0; val[i]; i++)
                buffer[b++] = val[i];
            break;
        case 'x':
            buffer[b++] = '0';
            buffer[b++] = 'x';
            sprintf(val, "%x", arg);
            for (i = 0; val[i]; i++)
                buffer[b++] = val[i];
            break;
        case 'X':
            buffer[b++] = '0';
            buffer[b++] = 'X';
            sprintf(val, "%X", arg);
            for (i = 0; val[i]; i++)
                buffer[b++] = val[i];
            break;
    }
    buffer[b] = '\0';
    return (buffer);
}