#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long nbr;
    long arr[10];
    int i;

    i = 0;
    nbr = nb;
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    if (nbr == 0)
        ft_putchar('0');
    while (nbr > 0)
    {
        arr[i] = nbr % 10;
        nbr /= 10;
        i++;
    }
    i--;
    while (i >= 0)
    {
        ft_putchar(arr[i] + 48);
        i--;
    }
}

int main()
{
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(-654);
    ft_putchar('\n');
    ft_putnbr(87754);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(2147483647);
}
