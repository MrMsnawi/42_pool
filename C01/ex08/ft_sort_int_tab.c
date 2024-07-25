void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int swp;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                swp = tab[i];
                tab[i] = tab[j];
                tab[j] = swp;
            }
            j++;
        }
        i++;
    }
}
/*
#include <stdio.h>
int main()
{
    int tab[] = {7, 8, 9, 5, 4, 3, 2, 1, 5, 4, 7, 8};
    int size = 12;

    ft_sort_int_tab(tab, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
}*/