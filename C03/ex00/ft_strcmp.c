int ft_strcmp(char *s1, char *s2)
{
    int j;
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    j = *s1 - *s2;
    return (j);
}

/*#include <stdio.h>

int main()
{
    char s1[] = "abadef";
    char s2[] = "abzdef";
    printf("%d", ft_strcmp(s1, s2));
}*/