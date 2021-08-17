#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//#include "../ft_strlen.c"
#include "symbol_to_upper.c"
#include "symbol_to_lower.c"

void string_to_camel_case(unsigned int i, char *s)
{
   if (i%2 == 1) {
       symbol_to_upper(s);
   } else {
       symbol_to_lower(s);
   }
}

char string_to_camel_case2(unsigned int i, char s)
{ 
    if (i%2 == 1) {
        return symbol_to_upper2(s);
    } else {
        return symbol_to_lower2(s);
    }
}

/*int main()
{
    char *result1 = string_to_camel_case(long_string);
    char *result2 = string_to_camel_case(caps_string);
    char *result3 = string_to_camel_case(mixed_string);
    char *result4 = string_to_camel_case(camel_string);

    printf("%s\n", result1);
    printf("%s\n", result2);
    printf("%s\n", result3);
    printf("%s\n", result4);

    return 0;
}*/