int ft_str_is_lowercase(char *str)
{
    if (*str == '\0')
        return 1;
    while (*str)
    {
        if (*str < 'a' || *str > 'z')
            return 0;
        str++;
    }
    return 1;
}

/*#include <stdio.h>

int main()
{
    char str[] = "";

    printf("%d", ft_str_is_lowercase(str));
}*/