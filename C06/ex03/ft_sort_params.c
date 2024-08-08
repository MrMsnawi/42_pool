#include <unistd.h>

int cmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return 0;
}

void swap(char **av, int i, int j)
{
	char *tmp;

	tmp = av[i];
	av[i] = av[j];
	av[j] = tmp;
}

void _sort(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (cmp(av[i], av[j]) > 0)
				swap(av, i, j);
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	_sort(ac, av);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
