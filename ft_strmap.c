#include "ft_lib.h"
#include <stdio.h>
#include "helpers/symbol_to_upper.c"
#include "ft_strlen.c"
#include "ft_memalloc.c"

char *ft_strmap(char const *s, char (*f)(char)) {
    if (s && f) {
        size_t len = ft_strlen(s);
        char *res = ft_memalloc(len * sizeof(char));
        size_t i = 0;
        while (s[i] != '\0') {
          res[i] = f(s[i]);
          i++;
        }
        return res;
    }
}

int main() {

    char res[50] = "lorem ipsum dolor sit amet";
    char *res2 = ft_strmap(res, symbol_to_upper2);

    printf("%s\n%s\n", res, res2);

  return 0;
}