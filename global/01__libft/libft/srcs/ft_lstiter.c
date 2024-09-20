#include "../includes/libft.h"

/**
 * Iterates the list and applies the function 'f' to the content
 * of each element
 *
 * @param lst	The first element of the list
 * @param f		The function to apply to each element's content
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
