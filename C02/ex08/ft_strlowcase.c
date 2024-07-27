char *ft_strupcase(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            *str += 32;
        str++;
    }
    return str;
}

/*#include <stdio.h>

int main()
{
    char str[] = "gafasdfsdfAAAA  sd";

    ft_strupcase(str);
    puts(str);
}*/