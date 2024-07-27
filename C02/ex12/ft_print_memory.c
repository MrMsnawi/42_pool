#include <unistd.h>

void print_printable_cont(char *addr)
{
    while (*addr)
    {
        if (*addr >= 32 && *addr <= 126)
            write(1, addr, 1);
        else
            write(1, ".", 1);
        addr++;
    }
}

void print_hex_addr(unsigned long add, char *buffer)
{
    unsigned int i;
    char tmp;
    unsigned int j;

    i = 0;
    j = 0;
    while (i < 16)
    {
        buffer[i] = "0123456789abcdef"[add % 16];
        add /= 16;
        i++;
    }
    i--;
    while (j < i / 2)
    {
        tmp = buffer[j];
        buffer[j] = buffer[i];
        buffer[i] = tmp;
        i--;
        j++;
    }
    i = 0;
    while (i < 16)
    {
        write(1, &buffer[i], 1);
        i++;
    }
}

void print_hex_cont(char *add, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        write(1, &"0123456789abcdef"[add[i] / 16], 1);
        write(1, &"0123456789abcdef"[add[i] % 16], 1);
        i++;
        if (i > 1 && i % 2 == 0)
            write(1, " ", 1);
    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    char buffer[20];
    print_hex_addr((unsigned long)addr, buffer);
    write(1, ": ", 2);
    print_hex_cont(addr, size);
    write(1, " ", 1);
    print_printable_cont(addr);
    write(1, "\n", 1);
    return addr;
}

#include <stdio.h>

int main()
{
    void *str1 = "Bonjour les amin";
    void *str2 = "ches\n\n\nc est fo";
    void *str3 = "u\ntout\nce qu on";
    void *str4 = "peut faire avec\n";
    void *str5 = "\n\nprint_memory\n\n";
    void *str6 = "\n\nlol\nlol\n \n";

    ft_print_memory(str1, 16);
    ft_print_memory(str2, 15);
    ft_print_memory(str3, 15);
    ft_print_memory(str4, 16);
    ft_print_memory(str5, 16);
    ft_print_memory(str6, 12);
}