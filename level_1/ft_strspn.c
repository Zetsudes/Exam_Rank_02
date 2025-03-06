#include <stddef.h>
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    while (*s)
    {
        while (accept[i] && *s != accept[i])
            i++;
        if (accept[i] == '\0')
            return (count);
        i = 0;
        count++;
        s++;
    }
    return (count);
}