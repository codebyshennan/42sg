
/*
    Create a program that displays its given arguments. It will display all the arguments, except argv[0].
*/
char ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(char argc, char **argv)
{
    int i;
    i = 1;
    if (argc > 1)
    {
        while (i < sizeof(argv))
        {
            while (*argv[i])
            {
                ft_putchar(argv[i]);
                argv[i]++;
            }
            i++;
        }
    }
    return (0);
}
