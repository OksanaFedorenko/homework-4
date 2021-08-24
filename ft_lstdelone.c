#include "mylib.h"
#include "ft_memdel.c"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst)
	{
		del((*alst)->content, (*alst)->content_size);
		ft_memdel((void *)alst);
	}
}