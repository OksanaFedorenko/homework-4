/*#include <string.h>
#include <stdio.h>
//#include "ft_strlen.c"
//#include "helpers/compare_strings.c"*/
#include <bsd/string.h>
#include "mylib.h"

//size_t strlcat ( char * dst , const char * src , size_t size );

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len;
    size_t  slen;

    len = 0;
    slen = strlen(src);
    while (*dst && size > 0)
    {
        dst++;
        len++;
        size--;
    }
    while (*src && size-- > 1)
        *dst++ = *src++;
    if (size == 1 || *src == 0)
        *dst = '\0';
    return (slen + len);
}

/*int main() 
{
    char dest1[20] = "000";
    char dest2[20] = "000";

    char dest3[20] = "000";
    char dest4[20] = "000";

    char app[10] = "12345";

    ft_strlcat(dest1, app, 3);
    strlcat(dest2, app, 3);

    ft_strlcat(dest3, app, 10);
    strlcat(dest4, app, 10);

    printf("%s\n", dest1);
    printf("%s\n", dest2);
    printf("%s\n", dest3);
    printf("%s\n", dest4);

    //compare custom function and library function
    //compare_strings(dest1, dest2);
    //compare_strings(dest3, dest4);
}*/