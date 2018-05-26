#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{
	t_list *link;

	if (!content)
	{
		link->content = NULL;
		link->content_size = 0;
		free(link->content);
	}
	else
	{
		link->content = ft_memalloc(content_size);
		link->content_size = content_size;
		if (!link->content)
			return (NULL);
		link->content = ft_memcpy(link->content, content, content_size);
	}
	link->next = NULL;
	return (link);
}
