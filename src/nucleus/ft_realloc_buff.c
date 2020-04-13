/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_buff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:08:51 by qmartina          #+#    #+#             */
/*   Updated: 2020/04/13 20:04:23 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/fshell.h"

void	ft_realloc_buff(t_readline *p)
{
	char	*tmp;
	int		i;

	p->buff_size *= 2;
//	ft_putendl("\n*\n*\n*\nREALLOC_BUFF");
	if (!(tmp = ft_strnew(p->buff_size + 1)))
		exit(1);
	i = -1;
	while (++i <= p->len)
		tmp[i] = p->buff[i];
	free(p->buff);
	p->buff = tmp;
}
