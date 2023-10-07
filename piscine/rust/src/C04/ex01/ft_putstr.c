
#include <unistd.h>

/*
    Create a function that displays a string of characters on the standard output.
 */
void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
