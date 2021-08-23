#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
//#include "ft_putchar.c"
#include "ft_putstr.c"


void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= 10)
			ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

int main() {

    ft_putnbr(545152);

    return 0;
}