
/*
    Create a function ft_ultimate_range which allocates and assigns an array of ints. This int array should contain all values between min and max.
    Min included, max excluded. Size of range should be returned (or -1 if an error occurred). If min >= max, a null pointer should be returned.
*/

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *tab;
    int i;

    i = 0;
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    tab = (int *)malloc(sizeof(int) * (max - min));
    if (tab == NULL)
    {
        *range = NULL;
        return (-1);
    }
    while (min < max)
    {
        tab[i] = min;
        min++;
        i++;
    }
    *range = tab;
    return (i);
}

int main()
{
    int *range;
    int i;
    int min;
    int max;

    min = 0;
    max = 10;
    i = ft_ultimate_range(&range, min, max);
    printf("i: %d\n", i);
    while (min < max)
    {
        printf("%d\n", range[min]);
        min++;
    }
    return (0);
}
