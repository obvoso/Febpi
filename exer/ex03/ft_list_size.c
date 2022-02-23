#include "ft_list.h"

int ft_list_size(t_list * begin_list)
{
	int i = 0;
	t_list *sp;

	sp = begin_list;
	while (sp->next)
	{
		i++;
		sp = sp->next;
	}
	return (i);
}
