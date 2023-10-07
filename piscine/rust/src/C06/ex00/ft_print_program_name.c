
/*
    Write a program that displays its own name, followed by a newline.
*/
ft_putchar(char *c)
{
    write(1, c, 1);
}

int main(char argc, char **argv)
{
    if (argc > 0)
    {
        while (*argv[0])
        {
            ft_putchar(argv[0]);
            argv[0]++;
        }
    }
    return (0);
}
