/*#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>*/
#include "mylib.h"

void ft_memdel(void **ap)
{
    if (*ap != NULL) {
        free(*ap);
        *ap = NULL;
    }
}