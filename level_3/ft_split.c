#include <stdlib.h>

char	**ft_split(char *str)
{
	int		i;
	int		row;
	int		column;
	char	**split;

	i = 0;
	row = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		column = 0;
		if (!(split[row] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			split[row][column++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[row][column] = '\0';
		row++;
	}
	split[row] = NULL;
	return (split);
}
