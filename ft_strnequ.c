#include "ft_lib.h"
#include <stdio.h>

int ft_strnequ(char const *s1, char const *s2, size_t n) {
    if (s1 && s2 && n) {
        size_t i = 0;
        while (*s1 == *s2 && i <= n) {
            if (*s1 == '\0' || *s2 == '\0')
               break;
            s1++;
            s2++;
            i++;
        }

        if (*s1 == '\0' && *s2 == '\0')
            return 1;
        else if (*s1 == *s2)
            return 1;
        else
            return 0;
    } else {
        return 0;
    }
}


int main() {
    char *str1 = "hello world";
    char *str2 = "hello world";

    int res = ft_strnequ(str1, str2, 15);
    int res2 = ft_strnequ(str1, NULL, 15);

    printf("%d\n", res);
    printf("%d\n", res2);
}