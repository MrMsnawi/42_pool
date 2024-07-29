int ft_atoi(char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (sign * res);
}

/*#include <stdio.h>

int main()
{
    char str[] = "  ---+--+1234ab567";
    printf("%d", ft_atoi(str));
}*/