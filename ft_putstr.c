/*#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_putchar.c"*/
#include "mylib.h"

void ft_putstr(char const *s)
{
	if (s != NULL)
	{
		while (*s)
		{
			ft_putchar(*s);
			s++;
		}
	}
}

/*int main() {

    ft_putstr("abcde");

    return 0;
}*/