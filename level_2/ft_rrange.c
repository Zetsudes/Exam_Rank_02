# include <stdlib.h>
# include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int *array;
    int len;

    if (end >= start)
        len = end - start + 1;
    else
        len = start - end + 1;
    array = (int *)malloc(sizeof(int) * (len + 2));
    if (!array)
        return (NULL);
    if (end >= start)
    {
        while (len--)
                array[len] = start++;
    }
    else
    {
         while (len--)
            array[len] = start--;
    } 
    return (array);
}