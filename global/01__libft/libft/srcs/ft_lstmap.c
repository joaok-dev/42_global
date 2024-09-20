#include "../includes/libft.h"

/**
 * Creates a new list resulting from the sucessive application of 'f'.
 *
 * @param lst	The first element of the list
 * @param f		The function to apply to each element's content
 * @param del	The function used to delete the content of an element if needed
 *
 * @return The new list, or a NULL if the allocation fails
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
