/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_one_node_in_lextokens.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wstygg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 14:35:43 by wstygg            #+#    #+#             */
/*   Updated: 2020/06/03 20:13:49 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fshell.h"

void			del_one_node(t_lextoken *token_to_del, t_lextoken **first_token)
{
	if (token_to_del->prev)
	{
		token_to_del->prev->next = token_to_del->next;
	}
	if (token_to_del->next)
	{
		if (token_to_del->prev == NULL)
		{
			*first_token = token_to_del->next;
		}
		token_to_del->next->prev = token_to_del->prev;
	}
	if (!token_to_del->prev && !token_to_del->next)
	{
		*first_token = NULL;
	}
	ft_strdel(&token_to_del->line);
	free(token_to_del);
}
