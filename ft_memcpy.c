#include <string.h>
#include <stdio.h>
#include "helpers/compare_strings.c"

//void *memcpy (void *destination, const void *source, size_t n);

void *ft_memcpy(void *dest, const void *source, size_t n)
{
    while (*str1 == *str2) {
      if (*str1 == '\0' || *str2 == '\0')
        break;
         
      str1++;
      str2++;
   }

   if (*str1 == '\0' && *str2 == '\0')
      return 0;
   else if (*str1 > *str2)
      return 1;
   else
      return -1;
}

int main()
{
    unsigned char src2[55]="12345678901234567890111111111111";
    unsigned char src3[55]="12345678901234567890111111111111";

    unsigned char dest2[55]="";
    unsigned char dest3[55]="";

    memcpy(dest2, src2, 50);

    ft_memcpy(dest3, src3, 50);
    
    printf ("dest2: %s\n",dest2);
    printf ("dest3: %s\n",dest3);

    compare_strings(dest2, dest3);

    return 0;
}