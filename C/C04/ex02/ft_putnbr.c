

#include <unistd.h>

/*
    Create a function that displays a number entered as a parameter. The function must be able to display all possible values within an int type variable.
*/

void ft_putnbr(int nb)
{
    int i;
    char c;

    i = 0;
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        c = nb + '0';
        write(1, &c, 1);
    }
}
