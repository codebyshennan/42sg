
/*
    Create a funtion that returns the next prime number greater or equal to the number given as argument.
*/

int ft_is_prime(int nb)
{
    int i;
    if (nb <= 1)
    {
        return (0);
    }
    if (nb <= 3)
    {
        return (1);
    }
    if (nb % 2 == 0 || nb % 3 == 0)
    {
        return (0);
    }
    if ((nb - 1) % 6 == 0 || (nb + 1) % 6 == 0)
    {
        return (1);
    }
    return (0);
}

int ft_find_next_prime(int nb)
{
    int prime;
    int found;

    prime = nb;
    found = -1;

    if (nb <= 1)
    {
        return (2);
    }
    while (found == -1)
    {
        if (ft_is_prime(prime) == 1)
        {
            found = 1;
        }
        else
        {
            prime++;
        }
    }
    return (prime);
}
