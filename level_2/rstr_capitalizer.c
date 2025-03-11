# include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int is_blank(char c)
{
    return ((c == ' ') || (c >= 9 && c <= 13));
}
int is_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}
int is_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

void rstr_capitalizer(char *str)
{
    int i;

 	i = 0;
 	while (str[i])
 	{
 		if (is_upper(str[i]))
 			str[i] += 32;
 		if (is_lower(str[i]) && (is_blank(str[i + 1]) || str[i + 1] == '\0'))
 			str[i] -= 32;
 		ft_putchar(str[i]);
 		i++;
 	}
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc > 1)
    {
        while (argv[i])
        {
            rstr_capitalizer(argv[i]);
            ft_putchar('\n');
            i++;
        }
    }
    else
        ft_putchar('\n');
}