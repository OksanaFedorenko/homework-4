#include "mylib.h"
//#include <stdio.h>

int ft_strequ(char const *s1, char const *s2) {
    if (s1 && s2) {
        while (*s1 == *s2) {
            if (*s1 == '\0' || *s2 == '\0')
                break;
            s1++;
            s2++;
        }

        if (*s1 == '\0' && *s2 == '\0')
            return 1;
        else
            return 0;
    } else {
        return 0;
    }
}


/*int main() {
    char *str1 = "hello world";
    char *str2 = "hello world";

    int res = ft_strequ(str1, str2);
    int res2 = ft_strequ(NULL, str2);
    int res3 = ft_strequ(str1, 0);

    printf("%d\n", res);
    printf("%d\n", res2);
    printf("%d\n", res3);
}*/