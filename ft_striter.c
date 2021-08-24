/*#include "mylib.h"
#include <stdio.h>
#include "helpers/symbol_to_upper.c"*/
#include "mylib.h"

void ft_striter(char *s, void (*f)(char *)) {
   if (s && f) {
       size_t i = 0;
       while (s[i] != '\0') {
           f(&s[i]);
           i++;
       }
   }
}

/*int main() {

    char res[50] = "lorem ipsum dolor sit amet";
    ft_striter(res, symbol_to_upper);

    printf("%s\n", res);

  return 0;
}*/