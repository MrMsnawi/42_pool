#include "ft_stock_str.h"
#include <stdlib.h>

int len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	int i;
	char *p;

	p = (char *)malloc(sizeof(char) * len(src) + 1);
	if (!p)
		return NULL;
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return p;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *strctr;

	strctr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!strctr)
		return NULL;
	i = 0;
	while (i < ac)
	{
		strctr[i].size = len(av[i]);
		strctr[i].str = av[i];
		strctr[i].copy = ft_strdup(av[i]);
		i++;
	}
	strctr[i].str = 0;
	strctr[i].copy = 0;
	return strctr;
}
