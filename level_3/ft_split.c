#include <stdlib.h>

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	j = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!str[i])
			break ;
		k = 0;
		if (!(split[j] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			split[j][k++] = str[i++];
		split[j][k] = '\0';
		j++;
	}
	split[j] = NULL;
	return (split);
}
