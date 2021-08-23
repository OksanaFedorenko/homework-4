#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_putchar_fd.c"
#include "ft_putstr_fd.c"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd((char *)s, fd);
		ft_putchar_fd('\n', fd);
	}
}