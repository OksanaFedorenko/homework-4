#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void symbol_to_lower(char *s)
{  
    if (*s >= 65 && *s <= 90)
  {
      *s = *s + 32;
  }
    
}

char symbol_to_lower2(char s)
{  
    if (s >= 65 && s <= 90)
  {
    return s + 32;
  }
    
}