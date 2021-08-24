/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
//#include "ft_strcmp.c"
#include "./helpers/constants.c"
#include "./helpers/compare_strings.c"*/
#include "mylib.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len = ft_strlen(dest);
    size_t i;

    for (i = 0 ; i < n && src[i] != '\0' ; i++)
            dest[dest_len + i] = src[i];
        dest[dest_len + i] = '\0';

    return dest;
}

/*int main() 
{
    char dest1[20] = "000";
    char dest2[20] = "000";

    char dest3[20] = "000";
    char dest4[20] = "000";

    char app[10] = "12345";

    ft_strncat(dest1, app, 3);
    strncat(dest2, app, 3);

    ft_strncat(dest3, app, 10);
    strncat(dest4, app, 10);

    //compare custom function and library function
    compare_strings(dest1, dest2);
    compare_strings(dest3, dest4);
}*/