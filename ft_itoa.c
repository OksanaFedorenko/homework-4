#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "ft_memalloc.c"

void reverseArray(char arr[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
 

char* ft_itoa(int n)
{

    int i = 0;
    bool isNegative = false;
    char *str = ft_memalloc(100);
  
    if (n == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
  
    if (n < 0)
    {
        isNegative = true;
        n = -n;
    }

    while (n != 0)
    {
        int rem = n % 10;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        n = n/10;
    }
  
    if (isNegative)
        str[i++] = '-';
  
    str[i] = '\0';

    reverseArray(str, i);
  
    return str;
}

int main() {

    char *res = ft_itoa(0);

    printf("%s\n", res);

    return 0;
}