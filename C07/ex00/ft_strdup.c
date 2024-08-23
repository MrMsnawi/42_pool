#include <stdlib.h>

int len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	int i;
	char *p;

	i = 0;
	p = (char *)malloc(sizeof(char) * len(src) + 1);
	if (!p)
		return NULL;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return p;
}
/*
#include <stdio.h>

int main(){
	char src[] = "Hello world!";
	char *dest;

	dest = ft_strdup(src);

	puts(dest);
}*/
