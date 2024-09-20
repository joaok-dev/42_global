#include "../includes/libft.h"

/**
 * Deletes and frees the last element and every successor of that element
 *
 * @param lst	A pointer to the pointer of the first element
 * @param del	The function used to delete the content of the element
 *
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
