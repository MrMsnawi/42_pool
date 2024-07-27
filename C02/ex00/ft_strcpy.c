char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

/*#include <stdio.h>

int main()
{
    char dest[] = "jhgytfrgdhvc";
    char src[] = "Hello world!";

    ft_strcpy(dest, src);
    puts(dest);
}*/