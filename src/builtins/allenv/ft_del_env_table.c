#include "fshell.h"

char			**ft_add_to_del_env_table(char *tmp)
{
	char	**new_del_env;
	int		i;
	int		size;

	i = 0;
	if (globals()->env_del == NULL)
		size = 0;
	else
		size = ft_env_len(globals()->env_del);
	if (!(new_del_env = ft_memalloc((sizeof(char *) * (size + 2)))))
		ft_error_q(2);
	while (globals()->env_del && globals()->env_del[i] != NULL)
	{
		new_del_env[i] = ft_strdup(globals()->env_del[i]);
		i++;
	}
	new_del_env[i++] = ft_strdup(tmp);
	new_del_env[i] = NULL;
	ft_free_str(globals()->env_del);
	globals()->env_del = new_del_env;
	ft_show_env(new_del_env);
}

void			ft_free_env_table()
{
	int		i;

	i = 0;
	if (globals()->env_del == NULL)
		return ;
	while (globals()->env_del[i] != NULL)
	{
		unset_var(globals()->env_del[i], &globals()->g_env);
		i++;
	}
	ft_free_str(globals()->env_del);
	globals()->env_del = NULL;
}