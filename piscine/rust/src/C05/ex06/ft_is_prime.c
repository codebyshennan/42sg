
/*
    Create a function that returns 1 if the number given as a parameter is a prime number, and 0 if it isnt.
    Formula for prime is 6k + 1 or 6k - 1 (except the multiples of prime numbers)
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
