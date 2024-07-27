char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (dest[i])
        i++;
    dest[i] = '\0';
    return dest;
}

/*#include <stdio.h>

int main()
{
    char dest[] = "abcdefghijklmnopqr";
    char src[] = "Hello world!";
    unsigned int n = 5;
    unsigned int i = 0;

    ft_strncpy(dest, src, n);

    while (dest[i])
    {
        printf("%c", dest[i]);
        i++;
    }
}*/