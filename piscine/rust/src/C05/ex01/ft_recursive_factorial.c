
/*
    Create a recursive function that returns the factorial of the number given as a parameter. If there’s an error, the function should return 0.
*/
int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return (0);
    }
    if (nb == 0)
    {
        return (1);
    }
    return (nb * ft_recursive_factorial(nb - 1));
}
