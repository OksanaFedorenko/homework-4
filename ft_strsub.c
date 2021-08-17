#include "ft_lib.h"
#include <stdio.h>
#include "ft_memalloc.c"

char *ft_strsub(char const *s, unsigned int start, size_t len) {
    
    if (s && start >= 0 && len) {
        char *substr = ft_memalloc(len + 1);
        size_t i = 0;
        while(*s != '\0' && i < len) {
           substr[i] = s[start];
           i++;
           start++;
        }
        substr[i+1] = '\0';
        return substr;
    } else {
        return NULL;
    }
}


/*int main() {

   char *str = "lorem ipsum dolor";
   char *res = ft_strsub(str, 5, 50);

  if (res == NULL)
    printf("%s\n", "null");
  else
    printf("%s\n", res);

  return 0;
}*/