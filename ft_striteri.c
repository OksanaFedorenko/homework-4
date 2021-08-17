#include "ft_lib.h"
#include <string.h>
#include <stdio.h>
#include "helpers/string_to_camel_case.c"


void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
   if (s && f) {
       size_t i = 0;
       while (s[i] != '\0') {
           f(i, &s[i]);
           i++;
       }
   }
}

int main() {

    char res[50] = "lorem ipsum dolor sit amet";
    ft_striteri(res, string_to_camel_case);

    printf("%s\n", res);

  return 0;
}