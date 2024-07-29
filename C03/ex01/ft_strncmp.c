int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 1;
    while (*s1 && *s2 && i < n)
    {
        if (*s1 != *s2)
            break;
        i++;
        s1++;
        s2++;
    }
    i = *s1 - *s2;
    return (i);
}

/*#include <stdio.h>

int main()
{
    char s1[] = "abcdefghij";
    char s2[] = "abcdzzghij";

    printf("%d", ft_strncmp(s1, s2, 5));
}*/