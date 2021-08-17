#include <string.h>
#include <stdio.h>
#include "helpers/compare_strings.c"

void *ft_memmove(void *dest, const void *source,  size_t n)
{
    size_t i;
    for (i = 0; i < n; i++)
    {
        *(char *)dest++ = *(char *)source++;
    }
    return dest;
}

int main()
{
    unsigned char src2[55]="12345678901234567890111111111111";
    unsigned char src3[55]="12345678901234567890111111111111";

    unsigned char dest2[55]="";
    unsigned char dest3[55]="";

    memmove(&src2[21], &src2[11], 10);

    ft_memmove(&src3[21], &src3[11], 10);
    
    printf ("dest2: %s\n",src2);
    printf ("dest3: %s\n",src3);

    compare_strings(dest2, dest3);

    return 0;
}