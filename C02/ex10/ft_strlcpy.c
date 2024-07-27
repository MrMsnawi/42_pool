int len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    if (size >= len(dest))
        return (len(src));
    if (size != 0)
    {
        while (src[i] && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (len(src));
}