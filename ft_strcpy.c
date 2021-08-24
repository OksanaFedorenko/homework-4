/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "./helpers/constants.c"
#include "ft_strcmp.c"
#include "ft_strlen.c"
#include "./helpers/make_buffer.c"
#include "./helpers/compare_strings.c"*/

char *ft_strcpy(char *dest, const char *source)
{
    int i;

    for (i = 0; i <= ft_strlen(source); i++)
    {
        dest[i] = source[i];
    }
    dest[i+1] = '\0';
}

/*int main()
{
    char *buffer1 = make_buffer((ft_strlen(short_string) + 1));
    char *buffer2 = make_buffer((ft_strlen(short_string) + 1));
    char *buffer3 = make_buffer((ft_strlen(long_string) + 1));
    char *buffer4 = make_buffer((ft_strlen(long_string) + 1));
    char *buffer5 = make_buffer((ft_strlen(very_long_string) + 1));
    char *buffer6 = make_buffer((ft_strlen(very_long_string) + 1));
 
    ft_strcpy(buffer1, short_string);
    strcpy(buffer2, short_string);

    ft_strcpy(buffer3, long_string);
    strcpy(buffer4, long_string);

    ft_strcpy(buffer5, very_long_string);
    strcpy(buffer6, very_long_string);

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