/*#include <ctype.h>
#include <stdio.h>
//#include "./helpers/compare.c"*/
#include "mylib.h"

int ft_isprint(int symbol)
{
  if (symbol >= 32 && symbol <= 126)
  {
      return 1;
  }
     return 0;
}

/*int main()
{
   char symbol1 = 'N';
   char symbol2 = '\0';


   int res1 = ft_isprint(symbol1);
   int res2 = isprint(symbol1);

   int res3 = ft_isprint(symbol2);
   int res4 = isprint(symbol2);
   
   compare(res1, res2, 2);
   compare(res3, res4, 2);

}*/