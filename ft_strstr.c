/*#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"*/
#include "mylib.h"

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