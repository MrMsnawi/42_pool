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

void convert_base(int nbr, char *base)
{
    int i;
    char c;

    i = 0;
    while (base[i])
        i++;
    while (nbr > 0)
    {
        c = base[nbr % i];
        write(1, &c, 1);
        nbr /= i;
    }
}

void ft_putnbr_base(int nbr, char *base)
{
    if (check_validity(base) == 1)
    {
        convert_base(nbr, base);
    }
}

int main()
{
    ft_putnbr_base(654, "01");
}

// handle negative numbers
// check base is valide
// convert to base