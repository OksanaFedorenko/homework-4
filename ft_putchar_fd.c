/*#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>*/
#include "mylib.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}