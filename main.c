#include "ft_lib.h"
/*#include <ctype.h>
#include <stdio.h>
//#include "./helpers/compare.c"*/
//#include "ft_strlen.c"
#include "ft_memalloc.c"
#include "ft_memdel.c"
#include "ft_strnew.c"
#include "ft_strdel.c"
#include "ft_strclr.c"

int main()
{

 //ft_memalloc and ft_memdel test
 void *buffer = ft_memalloc(50);
 if (buffer != NULL) {
    printf("Memory allocated successfully!\n");
 }

 ft_memdel(&buffer);
 if (buffer == NULL) {
    printf("Memory is freed!\n");
 }

 // ft_strnew test
 char *string = ft_strnew(50);
 printf("%s\n", string);

 // ft_strdel test
ft_strdel(&string);
 if (string == NULL) {
    printf("String is deleted!\n");
 }

// ft_strclr test
char str[20] = "Lorem ipsum";
ft_strclr(str);
printf("%s\n", str);

return 0;
}