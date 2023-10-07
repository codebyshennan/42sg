/*
    Create a program that displays its given arguments. One per line, in reverse order.
*/

void ft_putchar(char *c)
{
    write(1, c, 1);
}

int main(char argc, char **argv)
{
    int i;
    i = sizeof(argv) - 1;
    if (argc > 1)
    {
        while (i > 0)
        {
            while (*argv[i])
            {
                ft_putchar(argv[i]);
                i--;
            }
        }
    }
    return (0);
}
