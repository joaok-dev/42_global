#include "../includes/libft.h"

/**
 * Create a new list element
 *
 * @param content	The content to be added in the new element
 *
 * @returm A pointer to the new created element, or NULL if allocation fails
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
