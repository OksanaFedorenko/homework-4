#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"

char *ft_strrchr(char *str, int c)
{
    int i;
    int length = ft_strlen(str);
    for (i = length + 1; i >= 0 ; i--)
    {
        if (str[i] == c)
          return &str[i];
    }
    return NULL;
}

int main()
{
   char *str = "Hello world";

    char *result = ft_strrchr(str, 'o');
    //char *result2 = ft_strrchr(str, '\0');
    char *res = strrchr(str, 'o');
    //char *res2 = strrchr(str, '\0');

   printf("%s\n", result);
   // printf("%s\n", result2);
   printf("%s\n", res);
   // printf("%s\n", res2);

    if (result == NULL)
      printf("%s\n", "NULL from ft_strrchr");
    if (res == NULL)
       printf("%s\n", "NULL from strrchr");

    return 0;

}