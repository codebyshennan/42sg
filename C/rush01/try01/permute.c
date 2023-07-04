#include "utils.h"

// generate all permutations of the array
void permute(int *arr, int l, int r, int **perms, int *index)
{
    if (l == r)
    {
        for (int i = 0; i <= r; ++i)
        {
            perms[*index][i] = arr[i];
        }
        (*index)++;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(arr, l, i);
            permute(arr, l + 1, r, perms, index);
            swap(arr, l, i); // backtrack
        }
    }
}

void initializePerms(int **perms)
{
    int i = 0;
    while (i < 24)
    {
        perms[i] = (int *)malloc(sizeof(int) * 4);
        i++;
    }
}

void freePerms(int **perms)
{
    int i = 0;
    while (i < 24)
    {
        free(perms[i]);
        i++;
    }
    free(perms);
}
