#include <stdio.h>
#include <unistd.h>

void	repeat_alpha(char c)
{
	int	i;
	int	alpha_index;

	i = 0;
	if (c >= 'a' && c <= 'z')
		alpha_index = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		alpha_index = c - 'A' + 1;
	else
	{
		write(1, &c, 1);
		return ;
	}
	while (i < alpha_index)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
