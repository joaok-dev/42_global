#include "../includes/libft.h"

/*
 * Counts the number of elements in the list.
 *
 * @param lst	The first element of list
 *
 * @return The number of elements in the list
 */

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
