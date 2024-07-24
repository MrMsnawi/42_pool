#include <unistd.h>

void write_combination(char *comb, int n)
{
    write(1, comb, n);
    if (comb[0] != '9' - n + 1)
    {
        write(1, ", ", 2);
    }
}

void generate_combinations(char *comb, int n, int i, int start)
{
    if (i == n)
    {
        write_combination(comb, n);
        return;
    }
    for (int in = start; in <= 9; ++in)
    {
        comb[i] = '0' + in;
        generate_combinations(comb, n, i + 1, in + 1);
    }
}

void ft_print_combn(int n)
{
    if (n <= 0 || n >= 10)
    {
        return;
    }
    char comb[n];
    generate_combinations(comb, n, 0, 0);
    write(1, "\n", 1);
}
int main()
{
    ft_print_combn(2);
}