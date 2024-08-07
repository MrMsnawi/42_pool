int ft_iterative_factorial(int nb)
{
	int i;
	int f;

	i = 1;
	f = 1;
	if (nb < 0)
		return 0;
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return f;
}
/*
#include <stdio.h>

int main(){
	printf("%d\n", ft_iterative_factorial(0));
}*/
