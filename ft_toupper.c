/*#include <ctype.h>
#include <stdio.h>*/
#include "mylib.h"

int ft_toupper(int symbol)
{
  if (symbol >= 97 && symbol <= 122)
  {
      return symbol - 32;
  }
     return symbol;
  
}

/*int main()
{
   char symbol1 = 'n';
   char symbol2 = '9';

   int res1 = ft_toupper(symbol1);
   int res2 = toupper(symbol1);

   printf("%c\n", res1);
   printf("%c\n", res2);

   int res3 = ft_toupper(symbol2);
   int res4 = toupper(symbol2);

    printf("%c\n", res3);
    printf("%c\n", res4);
   
   compare(res1, res2);
   compare(res3, res4);

}*/