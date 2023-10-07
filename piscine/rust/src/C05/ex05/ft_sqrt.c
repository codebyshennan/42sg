
/*
    Create a function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number.
    */
int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while (i * i <= nb)
    {
        if (i * i == nb)
        {
            return (i);
        }
        i++;
    }
    return (0);
}
