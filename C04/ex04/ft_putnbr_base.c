#include <unistd.h>

int check_validity(char *str)
{
    int i;
    int j;

    i = 0;
    if (str[i] == '\0')
        return 0;
    while (str[i])
    {
        if (str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '\t')
            return 0;
        i++;
    }
    i = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (str[i] == str[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

int len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

void convert_base(long nbr, char *base)
{
    long i;
    int j;
    char c;
    char d[len(base)];

    j = 0;
    i = len(base);
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    while (nbr > 0)
    {
        c = base[nbr % i];
        d[j++] = c;
        nbr /= i;
    }
    j--;
    while (j >= 0)
        write(1, &d[j--], 1);
}

void ft_putnbr_base(int nbr, char *base)
{
    if (check_validity(base) == 1)
    {
        convert_base(nbr, base);
    }
}

#include <limits.h>

int main()
{
    ft_putnbr_base(-2147483648, "01");
}

// handle negative numbers
// check base is valide
// convert to base