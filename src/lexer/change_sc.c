#include "fshell.h"

void			ft_change_all_sc(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(' || str[i] == ')')
			str[i] = ' ';
		i++;
	}
}