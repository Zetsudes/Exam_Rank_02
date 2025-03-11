# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int printed;
	char *tmp;

	i = 0;
	k = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ')
			i++;
		j = i;
		while (argv[1][j] != ' '&& argv[1][j] != '\0')
			j++;
		tmp = malloc((j - i + 1) * sizeof(char));
		while (i < j)
			tmp[k++] = argv[1][i++];
		tmp[k] = '\0';
		printed = 0;
		while (argv[1][i])
			{
				while (argv[1][i] == ' ')  
                	i++;
				if (argv[1][i] != '\0' && printed)  
                	ft_putchar(' ');
				while (argv[1][i] != ' ' && argv[1][i] != '\0')  
                	ft_putchar(argv[1][i++]);
				printed = 1;
			}
		if (argv[1][i - 1] != ' ')
			ft_putchar(' ');
		else if (argv[1][i - 2] != ' ')
			ft_putchar(' '); 
		ft_putstr(tmp);
		free(tmp);
	}
	else if (argc > 2)
		ft_putstr(argv[1]);
	ft_putchar('\n');
}
