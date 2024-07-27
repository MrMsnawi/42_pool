int ft_str_is_alpha(char *str)
{
    if (*str == '\0')
        return 1;
    while (*str)
    {
        if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
            return 0;
        str++;
    }
    return 1;
}

/*#include <stdio.h>

int main()
{
    char str[] = "abdADSFkjSwesdSDFSdeasdfWAWERA";

    printf("%d", ft_str_is_alpha(str));
}*/