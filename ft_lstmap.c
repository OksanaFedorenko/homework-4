#include "mylib.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*null;
	t_list	**fin;
	t_list	**new;

	null = NULL;
	new = &null;
	fin = new;
	while (lst != NULL)
	{
		*new = f(lst);
		new = &(*new)->next;
		lst = lst->next;
	}
	return (*fin);
}