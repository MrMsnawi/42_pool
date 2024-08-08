#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	ac--;
	while (ac > 0)
	{
		i = 0;
		while (av[ac][i])
		{
			write(1, &av[ac][i], 1);
			i++;
		}
		write(1, "\n", 1);
		ac--;
	}
}
