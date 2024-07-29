char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    while (*dest)
        dest++;
    while (*src && nb > 0)
    {
        *dest = *src;
        dest++;
        src++;
        nb--;
    }
    return dest;
}

/*#include <stdio.h>

int main()
{
    char dest[] = "Hello ";
    char src[] = "world!";

    ft_strncat(dest, src, 2);
    puts(dest);
}*/