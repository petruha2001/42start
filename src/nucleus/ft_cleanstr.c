/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleanstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:11:44 by qmartina          #+#    #+#             */
/*   Updated: 2020/01/27 17:11:46 by qmartina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/fshell.h"

void	ft_cleanstr(int i, t_readline *p)
{
	while (i > 0)
	{
		if (p->buff[i] == '\n')
			tputs(tgetstr("up", NULL), 1, ft_c);
		write(2, "\b", 1);
		i--;
	}
	tputs(tgetstr("cd", NULL), 1, ft_c);
}
