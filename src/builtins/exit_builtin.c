#include "fshell.h"

int		exit_builtin(char **args)
{
	if (ft_strcmp(args[0], "exit") == 0 && ((args[1] == NULL) || (args[1] != NULL && args[2] == NULL)))
		return (-1);
	else
	{
		ft_dprintf(globals()->fd[2], "too many arguments\n");
		put_error_to_shell(2);
		return (1);
	}
}