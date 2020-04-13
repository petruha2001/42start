#include "fshell.h"

void			del_one_node_in_lextokens(t_lextoken *token_to_del)
{
	if (token_to_del->prev)
	{
		token_to_del->prev->next = token_to_del->next;
	}
	if (token_to_del->next)
	{
		token_to_del->next->prev = token_to_del->prev;
	}
	ft_strdel(&token_to_del->line);
	free(token_to_del);
}