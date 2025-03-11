#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_blank(char c)
{
    return ((c == ' ') || (c >= 9 && c <= 13));
}

int main(int argc, char **argv)
{
    int i;
    int flag;

    i = 0;
    flag = 0;
    if (argc == 2)
    {
        while (is_blank(argv[1][i]))
            i++;
        while (argv[1][i])
        {
            if (is_blank(argv[1][i]))
                flag = 1;
            if (!is_blank(argv[1][i])) 
            {
                if (flag)
                    write(1, "   ", 3);
                flag = 0;
                ft_putchar(argv[1][i]);
            }   
            i++;
        }
    }
    ft_putchar('\n');
}