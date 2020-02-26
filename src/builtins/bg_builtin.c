#include "../../inc/fshell.h"

int		do_bg(char **mas)
{
	if (mas[0] != NULL && mas[1] == NULL)
	{
		ft_putstr_fd("\n", 2);
		continue_job(get_last_job(), 0);
	}
	else if (mas[0] != NULL && mas[1] != NULL && mas[2] == NULL)
	{
		ft_putstr_fd("\n", 2);
		continue_job(get_job_by_number(ft_atoi(mas[1])), 0);
	}
	else
		return (-1);
	return (0);
}