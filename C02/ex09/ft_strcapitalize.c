char *ft_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}

char *ft_capitalize(char *str)
{
    int i;
    int j;

    i = 0;
    j = 1;
    str = ft_lowercase(str);
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (j == 1)
                str[i] -= 32;
            j = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            j = 0;
        else
            j = 1;
        i++;
    }
    return str;
}

/*#include <stdio.h>

int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_capitalize(str);
    puts(str);
}*/