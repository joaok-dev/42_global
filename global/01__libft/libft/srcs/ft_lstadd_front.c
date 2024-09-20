#include "../includes/libft.h"

/**
 * Adds a new element to the beginning of the list.
 *
 * @param lst	A pointer to the pointer of the first element of the list
 * @param new	The element to be added to the list
 */

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	if (lst && new_node)
	{
		new_node->next = *lst;
		*lst = new_node;
	}
}
