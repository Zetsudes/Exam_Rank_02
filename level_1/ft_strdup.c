#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *dest;
    int len;
    int i;

    i = 0;
    len = 0;
    while (src[len])
        len++;
    dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (NULL);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}