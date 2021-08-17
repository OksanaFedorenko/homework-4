#include <string.h>
#include <stdio.h>
#include "helpers/compare_strings.c"

void *ft_memccpy(void *dest, const void *source, int c, size_t n)
{
    size_t i;
    char *d = dest;
    const char *s = source;
    for (i = 0; i < n; i++)
    {
        if (*s == c) {
            *d++ = *s++;
            break;
        }
        *d++ = *s++;
    }
    *d = '\0';
}

int main()
{
    unsigned char src2[55]="12345678901234567890111111111111";
    unsigned char src3[55]="12345678901234567890222222222222";

    unsigned char dest2[55]="";
    unsigned char dest3[55]="";

    memccpy(dest2, src2, '0', 8);

    ft_memccpy(dest3, src3, '0', 8);
    
    printf ("dest2: %s\n",dest2);
    printf ("dest3: %s\n",dest3);

    compare_strings(dest2, dest3);

    return 0;
}