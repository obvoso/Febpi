#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *sp;
	
	while ((*begin_list) && !cmp((*begin_list)->data, data_ref))
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	sp = *begin_list;
	while (sp && sp->next)
	{
		if (!cmp(sp->next->data, data_ref))
			{
				tmp = sp->next;
				sp->next = tmp->next;
				free(tmp);
			}
		if (sp->next)
			sp = sp->next
	}
}
