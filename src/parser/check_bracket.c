#include "../inc/fshell.h"

int		check_open(char **str, int i, int j)
{
	if (j == 0 && (str[i - 1][ft_strlen(str[i - 1]) - 1] == ';' || str[i - 1][ft_strlen(str[i - 1]) - 1] == '|'
	|| str[i - 1][ft_strlen(str[i - 1]) - 1] == '('))
		return (1);
	if (str[i][j - 1] == ';' || str[i][j - 1] == '|' || str[i][j - 1] == '(')
		return (1);
	return (-1);
}

int		check_close(char **str, int i, int j)
{
	if (j == 0 && (str[i - 1][ft_strlen(str[i - 1]) - 1] == '<' || str[i - 1][ft_strlen(str[i - 1]) - 1] == '|'
		|| str[i - 1][ft_strlen(str[i - 1]) - 1] == '>' || str[i - 1][ft_strlen(str[i - 1]) - 1] == '('))
		return (-1);
	if (j != ft_strlen(str[i]) - 1 && str[i][j + 1] != ';' && str[i][j + 1] != '|' && str[i][j + 1] != ')')
		return (-1);
	return (1);
}

int		check_bracket(char *str)
{
	int 	i;
	int		j;
	int 	flag;
	char	**spl;

	i = -1;
	flag = 0;
	spl = ft_strsplit(str, " \t");
	while (spl && spl[++i]) {
		j = -1;
		while (spl[i] && spl[i][++j]) {
			if (spl[i][j] == '(')
			{
				flag++;
				if (check_open(spl, i, j) == -1)
				{
					ft_free_str(spl);
					return (-1);
				}
			}
			else if (spl[i][j] == ')')
			{
				if (flag == 0 || check_close(spl, i, j) == -1)
				{
					ft_free_str(spl);
					return (-2);
				}
				flag--;
			}
		}
	}
	ft_free_str(spl);
	return (1);
}