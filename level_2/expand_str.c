#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] == ' ')
            i++;
        while (argv[1][i])
        {
            while(argv[1][i] && argv[1][i] != ' ')
            {
                ft_putchar(argv[1][i]);
                i++;
            } 
            while (argv[1][i] == ' ')
                i++;
            if (argv[1][i]) 
                write(1, "   ", 3);
        }
    }
    ft_putchar('\n');
}