
/*
    Create a function ft_range which returns an array of ints. This int array should contain all values between min and max.
    Min included, max excluded.
*/

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int i;

    i = 0;
    if (min >= max)
    {
        return (0);
    }
    range = (int *)malloc(sizeof(int) * (max - min));
    if (range == NULL)
    {
        return (0);
    }
    while (min < max)
    {
        range[i] = min;
        min++;
        i++;
    }
    return (range);
}
