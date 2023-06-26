void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_len;

    base_len = 0;
    while (base[base_len] != '\0')
    {
        base_len++;
    }
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    if (nbr >= base_len)
    {
        ft_putnbr_base(nbr / base_len, base);
        ft_putnbr_base(nbr % base_len, base);
    }
    else
    {
        ft_putchar(base[nbr]);
    }
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        // if (!(str[i] >= 32 && str[i] <= 126))
        if (str[i] < 32 || str[i] > 126)
        {
            // if (str[i] >= 0 && str[i] <= 15)
            if (str[i] < 16)
            {
                ft_putchar('\\');
                ft_putchar('0');
                ft_putnbr_base(str[i], "0123456789abcdef");
            }
            else
            {
                ft_putchar('\\');
                ft_putnbr_base(str[i], "0123456789abcdef");
            }
        }
        else
        {
            ft_putchar(str[i]);
        }
        i++;
    }
}
