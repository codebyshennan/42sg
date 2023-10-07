
// sort n strings by ascii order
/*
    Create a program that displays its given arguments sorted by ascii order.
    bubble sort with strcmp as the algorithm to sort.
    (i) will be 1 as we dont want to sort argv[0]

*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

void ft_sort_params(int argc, char **argv)
{
    int i;
    int j;
    char *temp;
    i = 1;
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
            j++;
        }
        i++;
    }
}
