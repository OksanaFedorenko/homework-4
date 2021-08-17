#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *s) {

    int n = 0;
    while( *s >= '0' && *s <= '9' ) {
        n *= 10;
        n += *s++;
        n -= '0';
    }
    return n;
}

int main() {

    char *str = "hfd6fdd5cv00cv6";

    int res = atoi(str);
    int res2 = ft_atoi(str);

    printf("%d %d\n", res, res2);   
}