int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return 0;
	while (i < nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return 2;
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return nb;
}
/*
#include <stdio.h>

int main(){
	int i;

	i = -3;
	while (i < 100)
	{
		printf("%d ===> %d\n", i, ft_find_next_prime(i));
		i++;
	}
}*/
