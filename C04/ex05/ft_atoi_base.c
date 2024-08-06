int len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}
int check_validity(char *str)
{
	int i;
	int j;

	i = 0;
	if (str[i] == '\0')
		return 0;
	while (str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
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

int ft_convert_base(char *str, char *base)
{
	int i;
	int res;
	int base_len;

	i = 0;
	res = 0;
	base_len = len(base);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * base_len + (str[i] - '0');
		i++;
	}
	return res;
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	if (check_validity(base) == 1)
	{
		while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		{
			i++;
		}
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		result = ft_convert_base((str + i), base);
	}
	return (sign * result);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("  -654dsd", "0123456"));
}
