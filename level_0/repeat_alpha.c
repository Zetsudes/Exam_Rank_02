#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	rep;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			rep = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				rep += argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				rep += argv[1][i] - 'A';
			while (rep)
			{
				ft_putchar(argv[1][i]);
				rep--;
			}
			i++;
		}
	}
	ft_putchar('\n');
}
