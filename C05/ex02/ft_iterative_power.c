int ft_iterative_power(int nb, int power)
{
	int i;
	int y;

	i = 1;
	y = nb;
	if (nb == 0 && power == 0)
		return 1;
	while (i < power)
	{
		nb = nb * y;
		i++;
	}
	return nb;
}
/*
#include <stdio.h>

int main(){
	printf("%d\n", ft_iterative_power(10, 5));
}*/
