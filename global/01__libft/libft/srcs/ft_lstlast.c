#include "../includes/libft.h"
#include <time.h>

/*
 * Finds the last element of the list.
 *
 * @param lst	The first element of the list
 *
 * @return A pointer to the last element of the list
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
