/*#include <stdio.h>
#include "ft_memset.c"*/
#include "ft_lib.h"

char *ft_strnew(size_t size) {
    char *str = malloc(size * sizeof(char) + 1);
    if (str != NULL) {
      ft_memset(str, '\0', size);
      return str;
    }
    return NULL;
}