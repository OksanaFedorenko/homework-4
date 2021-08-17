#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"

// char *strstr(const char *haystack, const char *needle);

const char *ft_strstr(const char *s2, const char *s1)
{

  int i, j;
  int flag = 0;

  if ((s2 == NULL || s1 == NULL)) return NULL;

  for( i = 0; s2[i] != '\0'; i++)
  {
    if (s2[i] == s1[0])
    {
      for (j = i; ; j++)
      {
        if (s1[j-i] == '\0'){ flag = 1; break;}
        if (s2[j] == s1[j-i]) continue;
        else break;
      }
    }
    if (flag == 1) break;
  }

  if (flag) return (s2+i);
  else return NULL;
   /*int len = ft_strlen(haystack);
   int len2 = ft_strlen(needle);
   int i;
   int j;
   for (i = 0; i <= len - len2; i++) {

      if (*haystack == *needle) {
      
        for (j = 0; j <= len2; j++) {
           if (*haystack == *needle) {
              printf("%c %c\n", *haystack, *needle);
              haystack++;
              needle++;
              printf("j is %d\n", j);
           } else break;
        }
      } else {
        printf("i is %d\n", i);
        haystack++;
      }
         
   }

   return NULL;*/
}

int main()
{
   char *str = "Hello world";

    const char *res = ft_strstr(str, "orl");
    char *res2 = strstr(str, "orl");

    printf("%s\n", res);
    printf("%s\n", res2);

    /*if (result2 == NULL)
      printf("%s\n", "NULL from ft_strchr");*/
    if (res == NULL)
       printf("%s\n", "NULL from ft_strstr");

    return 0;
}