
/*
    create a function that displays a number in a base given as a parameter in the terminal.
    guard clause:
    - base is empty or size of 1
    - base contains same character twice
    - base contains '+' or '-'
*/
void ft_putnbr_base(int nbr, char *base)
{
    int i;
    char c;

    i = 0;
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    if (nbr > 9)
    {
        ft_putnbr(nbr / sizeof(base));
        ft_putnbr(nbr % sizeof(base));
    }
    else
    {
        c = base[nbr] + '0';
        write(1, &c, 1);
    }
}
