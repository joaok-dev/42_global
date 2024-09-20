#include "../includes/libft.h"

/**
 * Deletes the content of a list element and frees the element.
 *
 * @param lst	The element to be deleted
 * @param del	The function used to delete the element's content
 *
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
