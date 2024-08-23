#include <stdlib.h>

int *ft_range(int min, int max)
{
	int lr;
	int *arr;
	int i;

	i = 0;
	lr = max - min;
	if (min >= max)
		return NULL;
	arr = (int *)malloc(sizeof(int) * lr);
	if (!arr)
		return NULL;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return arr;
}
/*
#include <stdio.h>

int main(){
	int min = -5;
	int max = 30;
	int i;
	int j;
	int *range;

	range = ft_range(min, max);
	i = max - min;
	j = 0;
	while (i)
	{
		printf("%d\n", range[j]);
		j++;
		i--;
	}
}*/
