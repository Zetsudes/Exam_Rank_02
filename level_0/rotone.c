#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = 'a' + ((argv[1][i] - 'a' + 1) % 26);
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 'A' + ((argv[1][i] - 'A' + 1) % 26);
            ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}