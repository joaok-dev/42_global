#include "../includes/libft.h"

/*
 * Adds new element to the end of the list
 *
 * @param lst			A pointer to a pointer of the first element of the list.
 * @param new_node	The element to be added to the list
 */

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last;

	if (!lst || !new_node)
		return ;
	if (!*lst)
	{
		*lst = new_node;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new_node;
}
