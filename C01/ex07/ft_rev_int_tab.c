void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int swp;

    i = 0;
    size--;
    while (i <= size / 2 + 1)
    {
        swp = tab[i];
        tab[i] = tab[size];
        tab[size] = swp;
        i++;
        size--;
    }
}
/*
#include <stdio.h>

int main()
{
    int tab[] = {6, 4, 7, 8, 5, 3, 1, 9};
    int size = 8;
    int i = 0;
    ft_rev_int_tab(tab, size);
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
}*/