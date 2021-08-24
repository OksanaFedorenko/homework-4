/*#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>*/
#include "mylib.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int main() {

    ft_putchar('a');

    return 0;
}*/