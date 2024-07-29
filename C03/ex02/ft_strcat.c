char *ft_strcat(char *dest, char *src)
{
    while (*dest)
        dest++;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    return dest;
}

/*#include <stdio.h>

int main()
{
    char dest[] = "Hello ";
    char src[] = "world!";

    ft_strcat(dest, src);
    puts(dest);
}*/