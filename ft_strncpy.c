/*#include <string.h>
#include <stdio.h>
#include "helpers/constants.c"
#include "ft_strlen.c"
#include "helpers/make_buffer.c"
#include "helpers/compare_strings.c"*/
#include "mylib.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
        for ( ; i < n; i++)
            dest[i] = '\0';

        return dest;
 }


/*int main() 
{
  char *buffer1 = make_buffer((ft_strlen(short_string) + 1));
    char *buffer2 = make_buffer((ft_strlen(short_string) + 1));
    char *buffer3 = make_buffer((ft_strlen(long_string) + 1));
    char *buffer4 = make_buffer((ft_strlen(long_string) + 1));
    char *buffer5 = make_buffer((ft_strlen(very_long_string) + 1));
    char *buffer6 = make_buffer((ft_strlen(very_long_string) + 1));
 
    ft_strncpy(buffer1, short_string, 10);
    strncpy(buffer2, short_string, 10);

    ft_strncpy(buffer3, long_string, 25);
    strncpy(buffer4, long_string, 25);

    ft_strncpy(buffer5, very_long_string, 50);
    strncpy(buffer6, very_long_string, 50);

    //compare custom function and library function
    compare_strings(buffer1, buffer2);
    compare_strings(buffer3, buffer4);
    compare_strings(buffer5, buffer6);

    free(buffer1);
    free(buffer2);
    free(buffer3);
    free(buffer4);
    free(buffer5);
    free(buffer6);

    return 0;
}*/
