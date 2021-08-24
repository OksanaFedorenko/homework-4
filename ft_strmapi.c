#include "mylib.h"
/*#include <stdio.h>
#include "helpers/string_to_camel_case.c"
#include "ft_strlen.c"
#include "ft_memalloc.c"*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    if (s && f) {
        size_t len = ft_strlen(s);
        char *res = ft_memalloc(len * sizeof(char));
        size_t i = 0;
        while (s[i] != '\0') {
          res[i] = f(i, s[i]);
          i++;
        }
        return res;
    }
}

/*int main() {

    char res[50] = "lorem ipsum dolor sit amet";
    char *res2 = ft_strmapi(res, string_to_camel_case2);

    printf("%s\n%s\n", res, res2);

  return 0;
}*/