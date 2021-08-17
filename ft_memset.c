#include <string.h>
#include <stdio.h>
//#include "helpers/compare_strings.c"

void *ft_memset (void *dest, int val, size_t n)
{
  unsigned char *ptr = dest;
  while (n-- > 0)
    *ptr++ = val;

  *ptr = '\0';
  return dest;
}

/*int main()
{
    unsigned char src2[55]="12345678901234567890";
    unsigned char src3[55]="12345678901234567890";

    memset (src2, 'a', 55);

    ft_memset (src3, 'a', 55);
    
    printf ("src2: %s\n",src2);
    printf ("src3: %s\n",src3);

    compare_strings(src2, src3);

    return 0;
}*/