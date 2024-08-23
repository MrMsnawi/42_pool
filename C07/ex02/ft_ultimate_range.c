#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int lr;
	int i;

	i = 0;
	lr = max - min;
	if (min >= max)
	{
		range = NULL;
		return 0;
	}
	*range = (int *)malloc(sizeof(int) * lr);
	if (!range)
		return -1;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return lr;
}
/*
#include <stdio.h>

int main(){
	int *range;
	int min = -5;
	int max = 30;
	int i;
	int rng;

	i = 0;
	rng = ft_ultimate_range(&range, min, max);
	while (rng)
	{
		printf("%d\n", range[i]);
		i++;
		rng--;
	}
}*/
