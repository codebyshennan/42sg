
// TODO: change to base

/*
    write a function that converts the initial portion of the string pointed by str to int representation
*/
int ft_atoi_base(char *str, char *base)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
            i++;
        }
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * sizeof(base) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
