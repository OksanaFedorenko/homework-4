/*#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
//#include "ft_putchar.c"
#include "ft_putstr.c"*/

void ft_putendl(char const *s)
{
	if (s != NULL)
	{
		ft_putstr((char *)s);
		ft_putchar('\n');
	}
}

/*int main() {

    ft_putendl("abcde");

    return 0;
}*/