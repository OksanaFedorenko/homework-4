/*#include <ctype.h>
#include <stdio.h>
#include "./helpers/compare.c"*/
#include "mylib.h"

int ft_isdigit(int symbol)
{
  if (symbol >= '0' && symbol <= '9')
  {
      return 1;
  }
  return 0;
}

/*int main()
{
   char symbol1 = '2';
   char symbol2 = 'M';

   int res1 = ft_isdigit(symbol1);
   int res2 = isdigit(symbol1);

   int res3 = ft_isdigit(symbol2);
   int res4 = isdigit(symbol2);
   
   compare(res1, res2, 3);
   compare(res3, res4, 3);

}*/

