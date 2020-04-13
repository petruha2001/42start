/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheak_quote.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmartina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:01:55 by qmartina          #+#    #+#             */
/*   Updated: 2020/04/13 20:04:23 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fshell.h"

int		ft_cheak_quote(char *input)
{
	int		k;
	char	c;

	k = -1;
//	dprintf(open("ch_que.txt", O_CREAT | O_RDWR | O_TRUNC,
//			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |
//					S_IROTH | S_IWOTH), "start:\n%s\nend\n", input);
	while (input[++k])
	{
		if (input[k] == '\'' || input[k] == '\"')
		{
			c = input[k];
			while (input[++k] && input[k] != c)
				;
			if (input[k] == '\0')
			{
//				printf("return 0\n");
				return (0);
			}
		}
	}
	return (1);
}
