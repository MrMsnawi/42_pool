#include <stdlib.h>

int len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

int final_string_len(int size, char **strs, char *sep)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += len(strs[i]) + len(sep);
		i++;
	}
	length -= len(sep);
	return length;
}

char *cat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return dest;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *dest;
	char *string;

	i = 0;
	if (size == 0)
		return 0;
	dest = (char *)malloc(sizeof(char) * final_string_len(size, strs, sep) + 1);
	string = dest;
	if (!dest)
		return 0;
	while (size > 0)
	{
		dest = cat(dest, strs[i]);
		dest += len(strs[i]);
		i++;
		size--;
		if (size > 0)
		{
			dest = cat(dest, sep);
			dest += len(sep);
		}
	}
	return string;
}
/*
#include <stdio.h>

int main(){
	char *strs[4];
	char sep[] = "_+++_";
	char *dest;
	int size = 4;

	strs[0] = "abdelaziz";
	strs[1] = "masnaoui";
	strs[2] = "the";
	strs[3] = "giante";

	dest = ft_strjoin(size, strs, sep);

	puts(dest);
}*/
