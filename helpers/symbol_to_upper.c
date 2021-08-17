#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void symbol_to_upper(char *s)
{  
    if (*s >= 97 && *s <= 122)
  {
      *s = *s - 32;
  }
    
}

char symbol_to_upper2(char s)
{  
    if (s >= 97 && s <= 122)
  {
      return s - 32;
  }
    
}

/*int main()
{
    res[20] = "hello world";
    string_to_upper(res);

    printf("%s\n", res);

    return 0;
}*/