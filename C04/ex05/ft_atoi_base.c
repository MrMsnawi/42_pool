#include <stdio.h>

int check_validity(char *str)
{
	int i;
	int j;

	i = 0;
	if (str[i] == '\0')
		return 0;
	while (str[i])
	{
		if (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
			return 0;
		if (str[i] == '-' || str[i] == '+')
			return 0;
		i++;
	}
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

int len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

char *convert_base(char *str, char *base)
{
	int i;
	int j;
	int num;
	int lb;
	int narr[100];
	char arr[100];

	i = 0;
	num = 0;
	lb = len(base);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	i = 0;
	j = num;
	while (num > 0)
	{
		narr[i] = num % lb;
		num /= lb;
		i++;
	}
	i = 0;
	while (j > 0)
	{
		arr[i] = base[narr[i] + '0'];
		i++;
		j--;
	}
	str = arr;
	return str;
}

int convert_to_int(char *str)
{
	int i;
	int num;

	i = len(str) - 1;
	num = 0;
	while (i >= 0)
	{
		num = num * 10 + (str[i] + 48);
		i--;
	}
	return num;
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int res;
	char *arr;

	i = 0;
	sign = 1;
	if (check_validity(base) == 1)
	{
		while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		{
			i++;
			if (str[i] == '\0')
				break;
		}
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		i--;
		arr = convert_base((str + i), base);
		res = convert_to_int(arr);
	}
	return (sign * res);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("  -1354dsd", "01"));
}
