#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"

char *ft_strchr(char *str, int symbol)
{
    int i;
    int length = ft_strlen(str);
    for (i = 0; i <= length + 1; i++)
    {
        if (str[i] == symbol)
          return &str[i];
    }
    return NULL;
}

/*int main()
{
   char *str = "Hello world";

    //char *result = ft_strchr(str, 'a');
    char *result2 = ft_strchr(str, '\0');
    //char *res = strchr(str, 'a');
    //char *res2 = strchr(str, '\0');

    //printf("%s\n", result);
    printf("%s\n", result2);
    //printf("%s\n", res);
    //printf("%s\n", res2);

    if (result2 == NULL)
      printf("%s\n", "NULL from ft_strchr");
    /*if (res2 == NULL)
       printf("%s\n", "NULL fron strchr");*/

    /*return 0;

}*/