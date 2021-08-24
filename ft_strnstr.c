/*#include <bsd/string.h>
#include <stdlib.h>
#include <stdio.h>*/
#include "mylib.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    if (needle[0] == '\0')
        return ((char *)haystack);
    j = 0;
    while (j < len && haystack[j])
    {
        i = 0;
        while (j < len && needle[i] && haystack[j] && needle[i] == haystack[j])
        {
            ++i;
            ++j;
        }
        if (needle[i] == '\0')
            return ((char *)&haystack[j - i]);
        j = j - i + 1;
    }
    return (0);
}

/*int main()
{

    char    *s1 = "MZIRIBMZIRIBMZE123";
    char    *s2 = "MZIRIBMZE";
    size_t  max = strlen(s2);

    char    *i1 = strnstr(s1, s2, max + 1);
    char    *i2 = ft_strnstr(s1, s2, max + 1);


    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}*/

/*#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
        int i;
        size_t needle_len;

        if (0 == (needle_len = strnlen(needle, len)))
                return (char *)haystack;

        for (i=0; i<=(int)(len-needle_len); i++)
        {
                if ((haystack[0] == needle[0]) &&
                        (0 == strncmp(haystack, needle, needle_len)))
                        return (char *)haystack;

                haystack++;
        }
        return NULL;
}

int main()
{
   char *str = "Hello world";
   char *str2 = "orl";

    const char *res = ft_strnstr(str, str2, 4);
    char *res2 = strnstr(str, str2, 4);

    //printf("%s\n", res);
    //printf("%s\n", res2);

    if (res2 == NULL)
      printf("%s\n", "NULL from strnstr");
    if (res == NULL)
       printf("%s\n", "NULL from ft_strnstr");

    return 0;
}*/