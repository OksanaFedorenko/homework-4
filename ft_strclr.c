#include "ft_lib.h"
#include "ft_strlen.c"

void ft_strclr(char *s) {

    size_t len = ft_strlen(s);
    size_t i;
    for (i = 0; i <= len; i++) {
        *s = '\0';
        s++;
    }
}

/*int main() {

    char str[20] = "Lorem ipsum";
    ft_strclr(str);
    printf("%s\n", str);

    return 0;
}*/