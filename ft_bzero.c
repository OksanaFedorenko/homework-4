#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
  char *c = s;
  size_t i;
  for (i = 0; i < n; ++i)
    c[i] = '\0';
}

/*int main()
{
    unsigned char src2[55]="12345678901234567890";
    unsigned char src3[55]="12345678901234567890";

    bzero(src2, 50);

    ft_bzero(src3, 50);
    
    printf ("src2: %s\n",src2);
    printf ("src3: %s\n",src3);

    return 0;
}*/