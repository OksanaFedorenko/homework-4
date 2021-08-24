/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strcmp.c"
#include "./helpers/constants.c"
#include "./helpers/compare_strings.c"*/
#include "mylib.h"

char *ft_strcat(char *str1, const char *str2)
{
    char *begin = str1;
    while (*str1)
        str1++;
 
    while (*str1++ = *str2++);
 
    *str1 = '\0';
    return begin;
}

/*int main() 
{
    char str1[100] = "Hello world ";
    char str2[100] = "Hello world ";

    ft_strcat(str1, long_string);
    strcat(str2, long_string);

    //compare custom function and library function
    compare_strings(str1, str2);
}*/