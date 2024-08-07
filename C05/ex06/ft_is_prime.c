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
/*
#include <stdio.h>

int main(){
	int i;

	i = -3;
	while (i < 20)
	{
		printf("%d ===> %d\n", i, ft_is_prime(i));
		i++;
	}
}*/
