#include "ft_lib.h"
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_memalloc.c"

int get_start(char const *s) {

    size_t i = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
        i++;
    }

    return i;
}

int get_end(char const *s) {

    int i;
    i = ft_strlen(s) - 1;

    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
        i--;
    }
    i++;

    return i;
}

char *ft_strtrim(char const *s) {

    if (s) {

    int len = (get_end(s) - get_start(s));
    char *str = ft_memalloc((len + 1) * sizeof(char));

    size_t j = 0;
    int i = get_start(s);
    while (len > 0) {
        str[j] = s[i];
        j++;
        i++;
        len--;
    }
    str[i] = '\0';
    return str;
    }
    return NULL;
}


int main() {
    
    char *str = "  hello world  *45hr dfhfj  *    ";

    char *res = ft_strtrim("NULL   ");
 
    if (res == NULL)
        printf("%s\n", "null");
    else
        printf("%s\n", res);
        printf("%zu\n", ft_strlen(res));

    return 0;
}