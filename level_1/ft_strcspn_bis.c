#include <stddef.h>
#include <stdio.h>
size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    while (*s)
    {
        while (reject[i] && *s != reject[i])
            i++;
        if (reject[i] != '\0')
            return (count);
        i = 0;
        s++;
        count++;
    }
    return (count);
}

int main()
{
    char *s = "spy007";
    char *reject = "1234567890";

    printf("%ld", ft_strcspn(s, reject));
}