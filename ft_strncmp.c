/*#include <string.h>
#include <stdio.h>*/
#include "mylib.h"

int ft_strncmp(const char *str1, const char *str2, size_t n) {

   size_t i = 0;
   while (*str1 == *str2 && i <= n) {

      if (*str1 == '\0' || *str2 == '\0')
         break;
         
      str1++;
      str2++;
      i++;
      
   }

   if (*str1 == '\0' && *str2 == '\0')
      return 0;
   else
      return *str1 - *str2;

}


/*int main() 
{
    char *str1 = "Hello world!";
    char *str2 = "Hello world!";
    char *str3 = "Hello Lorem ipsum dolor sit amet.";

    int res = ft_strncmp(str1, str2, 0);
    int res2 = strncmp(str1, str2, 0);
    int res3 = ft_strncmp(str1, str3, 0);
    int res4 = strncmp(str1, str3, 0);

    printf("%d\n", res);
    printf("%d\n", res2);

    printf("%d\n", res3);
    printf("%d\n", res4);


    /*if (res == 0)
       printf("The strings are same.\n");
    else
       printf("The strings are different.\n");
    return 0;*/

   /* if (res3 == 0)
       printf("The strings are same.\n");
    else
       printf("The strings are different.\n");
    return 0;

}*/