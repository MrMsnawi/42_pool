char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (*to_find == '\0')
        return (str);
    while (str[i])
    {
        while (str[i + j] && str[i + j] == to_find[j])
            j++;
        if (to_find[j] == '\0')
            return (str + i);
        j = 0;
        i++;
    }
    return (0);
}

/*#include <stdio.h>

int main()
{
    char str[] = "My name is abdelaziz";
    char to_find[] = "ad";
    char *sub;

    sub = ft_strstr(str, to_find);
    if (sub == NULL)
        printf("NULL");
    else
        puts(sub);
}*/