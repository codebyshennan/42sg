
/*
    Create a recursive function that returns the value of a power applied to a number.
    A power lower than 0 returns 0. Overflows do not have to be dealt with.
*/
int ft_recursive_power(int nb, int power)
{
    if (power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        return (1);
    }
    return (nb * ft_recursive_power(nb, power - 1));
}
