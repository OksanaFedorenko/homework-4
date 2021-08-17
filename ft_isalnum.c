#include <ctype.h>
#include <stdio.h>
#include "./helpers/compare.c"

int ft_isalnum(int symbol)
{
   if (symbol >= 'A' && symbol <= 'Z')
  {
      return 1;
  } else if (symbol >= 'a' && symbol <= 'z') {
      return 1;
  } else if (symbol >= '0' && symbol <= '9') {
      return 1;
  } else {
     return 0;
  }
}

int main()
{
   char symbol1 = ' ';
   char symbol2 = 'M';

   int res1 = ft_isalnum(symbol1);
   int res2 = isalnum(symbol1);

   int res3 = ft_isalnum(symbol2);
   int res4 = isalnum(symbol2);
   
   compare(res1, res2, 3);
   compare(res3, res4, 3);

}
