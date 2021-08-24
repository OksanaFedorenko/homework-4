/*#include <string.h>
#include <stdio.h>
#include "ft_strcmp.c"
#include "helpers/compare_strings.c"*/
#include "mylib.h"

int ft_memcmp(const void *src1, const void *src2, size_t n)
{
  const char *s1 = src1;
  const char *s2 = src2;
  size_t i;
     while ((*s1 == *s2) && i < n) {
      if (*s1 == '\0' || *s2 == '\0')
         break;
      printf("%d%d ", *s1, *s2);
      s1++;
      s2++;
      i++;
   }

  if (*s1 == *s2)
    return 0;
  else
    return *s1 - *s2;
  
};  

/*int main()
{   
    //ft_memcmp tests
    unsigned char src1[55]="1234d6789123456789s0";
    unsigned char src2[55]="1234u6789123456789a0";

    int res1 = memcmp(src1, src2, 8);
    int res2 = ft_memcmp(src1, src2, 8);
  
    printf("%d\n", res1);
    printf("%d\n", res2);

    if (res1 == res2)
       printf("The result of your function is equal to the result of library function. Test passed. Congrats!");
    else
       printf("Error! The result of your function is different! Check your code!");

    return 0;
}*/