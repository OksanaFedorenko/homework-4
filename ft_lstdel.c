#include "mylib.h"
#include "ft_lstdelone.c"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if (alst)
	{
		if ((*alst)->next)
			ft_lstdel(&(*alst)->next, del);
		ft_lstdelone(alst, del);
	}
}