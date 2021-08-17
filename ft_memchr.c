#include <string.h>
#include <stdio.h>
//#include "ft_strlen.c"
#include "helpers/compare_strings.c"

void *ft_memchr(void *str, int c, size_t n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (*(char *)str == c)
          return str;
      *(char *)str++;
    } 
    return NULL;
}

int main()
{
    unsigned char src2[55]="1234567890";
    unsigned char src3[55]="1234567890";

    //unsigned char dest2[55]="";
    //unsigned char dest3[55]="";

    char *res1 = memchr(src2, '1', 50);

    char *res2 = ft_memchr(src3, '1', 50);
    
    if (res1 == NULL)
      printf("%s\n", "NULL from ft_memchr");
      else printf("Res1: %s\n", res1);
    if (res2 == NULL)
       printf("%s\n", "NULL from memchr");
       else printf("Res2: %s\n", res2);

    if (res1 != NULL && res2 != NULL)
       compare_strings(res1, res2);

    return 0;
}