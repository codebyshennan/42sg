char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        // if first character or previous character is not a letter or number
        if (i == 0 || !(str[i - 1] >= 'A' && str[i - 1] <= 'Z') || !(str[i - 1] >= 'a' && str[i - 1] <= 'z') || !(str[i - 1] >= '0' && str[i - 1] <= '9'))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
        // else if current character is an uppercase letter, transform into lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}
