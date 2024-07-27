#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] < 32 || str[i] > 126)
        {
            write(1, "\\", 1);
            write(1, &"0123456789abcdef"[str[i] / 16], 1);
            write(1, &"0123456789abcdef"[str[i] % 16], 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

#include <stdio.h>

int main()
{
    char str[] = "Coucou\vtu vas bien ?";
    ft_putstr_non_printable(str);
}