int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return 0;
	while (nb != i * i)
	{
		if (i > nb)
			return 0;
		i++;
	}
	return i;
}
/*
#include <stdio.h>

int main(){
	printf("%d\n", ft_sqrt(-81));
}*/
