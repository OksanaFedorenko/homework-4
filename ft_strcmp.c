/*#include <string.h>
#include <stdio.h>*/
#include "mylib.h"

int ft_strcmp(const char *str1, const char *str2) {
   while (*str1 == *str2) {
      if (*str1 == '\0' || *str2 == '\0')
         break;
         
      str1++;
      str2++;
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
    char *str3 = "Lorem ipsum dolor sit amet.";

    int res = ft_strcmp(str1, str2);
    int res2 = strcmp(str1, str2);
    int res3 = ft_strcmp(str1, str3);
    int res4 = strcmp(str1, str3);

    printf("%d\n", res);
    printf("%d\n", res2);

    if (res == 0)
       printf("The strings are same.\n");
    else
       printf("The strings are different.\n");
    return 0;

    printf("%d\n", res3);
    printf("%d\n", res4);

    
    if (res3 == 0)
       printf("The strings are same.\n");
    else
       printf("The strings are different.\n");
    return 0;

}*/