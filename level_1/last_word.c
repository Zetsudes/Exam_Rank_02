#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *c)
{
    int i;

    i = 0;
    while (c[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int len;

    if (argc == 2)
    {
        len = ft_strlen(argv[1]) - 1;
        while (len >= 0 && argv[1][len] == ' ')
            len--;
        while (len >= 0 && argv[1][len] != ' ')
            len--;
        len++;
        while (argv[1][len] && argv[1][len] != ' ')
        {
            ft_putchar(argv[1][len]);
            len++;
        } 
    }
    ft_putchar('\n');
}