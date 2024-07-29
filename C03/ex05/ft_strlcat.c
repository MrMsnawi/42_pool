#include <stdio.h>

unsigned int len(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int slen;
    unsigned int dlen;
    unsigned int i;
    unsigned int j;

    j = 0;
    slen = len(src);
    dlen = len(dest);
    if (size <= dlen)
        return (slen + size);
    i = dlen;
    while (src[j] && i < size - 1)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dlen + slen);
}

/*int main()
{
    char dest[14] = "Hello ";
    char src[] = "world!";
    unsigned int f = ft_strlcat(dest, src, 14);

    printf("%u\n", f);
    puts(dest);
}*/