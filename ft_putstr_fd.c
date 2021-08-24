/*#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_putchar_fd.c"*/
#include "mylib.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s != NULL)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
	}
}