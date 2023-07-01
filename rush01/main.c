#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv)
{
    // if no arguments were passed, exit
    if (argc < 2)
    {
        printf("Error.\n");
        return (1);
    }

    char *input;
    char *endptr;
    int count;
    int half_count;
    int *cols;
    int *rows;

    input = argv[1];
    // count how many numbers are in the string
    count = get_count(input);
    half_count = count / 2;

    cols = (int *)malloc(sizeof(int) * half_count);
    rows = (int *)malloc(sizeof(int) * half_count);
    split_into_cols_rows(cols, rows, input, count, half_count, endptr);
    rush_01(cols, rows, half_count);
    free(cols);
    free(rows);
    return 0;
}

int get_count(char *input)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (i < strlen(input))
    {
        if (input[i] == ' ')
        {
            count++;
        }
        i++;
    }
    count++; // increment count as there's no trailing space after the last number
    return count;
}

void split_into_cols_rows(int *cols, int *rows, char *input, int count, int half_count, char *endptr)
{
    for (int i = 0; i < count; i++)
    {
        // Convert the number
        int number = strtol(input, &endptr, 10);

        // Put the number in the correct array
        if (i < half_count)
        {
            cols[i] = number;
        }
        else
        {
            rows[i - half_count] = number;
        }

        // Update the input pointer
        input = endptr;

        // Skip spaces
        while (*input == ' ')
        {
            input++;
        }
    }
}
