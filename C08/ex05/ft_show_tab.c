#include <unistd.h>
#include "../ex04/ft_strs_to_tab.c"
#include "ft_stock_str.h"

void put_nbr(int nb)
{
	char c;

	if (nb > 9)
	{
		put_nbr(nb / 10);
		put_nbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

void put_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i++], 1);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		put_nbr(par[i].size);
		write(1, "\n", 1);
		put_str(par[i].str);
		write(1, "\n", 1);
		put_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
