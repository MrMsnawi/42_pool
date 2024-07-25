void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *a / *b;
    *b = tmp % *b;
}
/*
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 5;

    ft_ultimate_div_mod(&a, &b);
    printf("%d %d", a, b);
}*/