#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst)
		return (NULL);
	while ((lst->next) == NULL)
	{
		*f(lst);
		del(lst);
		lst = lst->next;
	}
	return (lst);
}
