#include "utils.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int factorial(int n)
{
    int fact = 1;
    while (n > 1)
    {
        fact *= n;
        n--;
    }
    return fact;
}

void print_array(int *arr, int size)
{
    int i = 0;
    while (i < size)
    {
        ft_putchar('0' + arr[i]);
        if (i < size - 1)
            ft_putchar(' ');
        i++;
    }
    ft_putchar('\n');
}

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// count how many visible buildings there are in both directions (left and right, up and down)
void count_visible(int *arr, int size, int *count_up, int *count_down)
{
    int max_val = 0;
    *count_up = 0;
    int rev_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max_val)
        {
            max_val = arr[i];
            (*count_up)++;
        }
    }
    max_val = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] > max_val)
        {
            max_val = arr[i];
            rev_count++;
        }
    }
    *count_down = rev_count;
}

int checkFlag(int grid[4][4], int *arr, int *cols, int *rows)
{
    // TODO: add the size of the array as a parameter (e.g. 4)
    // assign range to the size of the array
    int count_up;
    int count_down;
    int flag;
    int i;
    int range;

    i = 0;
    range = 4;
    flag = 1;
    while (i < 4)
    {
        while (range > 0)
        {
            arr[range - 1] = grid[i][range - 1];
            range--;
        }
        // reset range
        range = 4;
        count_visible(arr, range, &count_up, &count_down);
        if (count_up != cols[i] || count_down != cols[i + range])
        {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag)
    {
        i = 0;
        while (i < 4)
        {
            count_visible(grid[i], range, &count_up, &count_down);
            if (count_up != rows[i] || count_down != rows[i + range])
            {
                flag = 0;
                break;
            }
            i++;
        }
    }

    return flag;
}
