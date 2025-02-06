#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (int argc, char **argv)
{
    int i;
    int j;
    int end;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            end = i;
            while (i >= 0 && argv[1][i] != ' ')
                i--;
            j = i + 1;
            while (j <= end)
            {
                ft_putchar(argv[1][j]);
                j++;
            }
             while (i >= 0 && argv[1][i] == ' ')
                i--;
            if (i >= 0)
                ft_putchar(' ');
        }
    }
    ft_putchar('\n');
}