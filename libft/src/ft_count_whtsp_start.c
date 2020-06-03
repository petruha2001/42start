/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_whtsp_start.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:12:48 by mbrella           #+#    #+#             */
/*   Updated: 2020/06/03 20:13:49 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_whtsp_start(char const *s)
{
	unsigned int cn;

	cn = 0;
	while ((*s == '\t' || *s == '\n' || *s == ' ') && *s)
	{
		cn++;
		s++;
	}
	return (cn);
}
