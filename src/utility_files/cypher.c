#include "fshell.h"

char	cypher_char(char *c)
{
	*c += CYPHER_PLUS;
}

char	uncypher_char(char *c)
{
	*c -= CYPHER_PLUS;
}

void	cypher_str(char *str_to_cypher)
{
	int		i;

	i = 0;
	while (str_to_cypher[i] != '\0')
	{
		cypher_char(&str_to_cypher[i]);
		i++;
	}
}

void	uncypher_str(char *str_to_cypher)
{
	int		i;

	i = 0;
	while (str_to_cypher[i] != '\0')
	{
		uncypher_char(&str_to_cypher[i]);
		i++;
	}
}

void	uncypher_hist(t_memory *head)
{
	while (head != NULL)
	{
		uncypher_str(head->inp);
		head = head->back;
	}
}
