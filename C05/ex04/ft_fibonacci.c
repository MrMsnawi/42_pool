int ft_fibonacci(int index)
{
	int nb;

	if (index < 0)
		return -1;
	if (index == 0)
		return 0;
	if (index == 1)
		return 1;
	nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return nb;
}
/*
#include <stdio.h>

int main(){
	printf("%d\n", ft_fibonacci(8));
}*/
