#include "utils.h"

int rush_01(int *cols, int *rows, int r)
{
    // initialise data to be the range of numbers from 1 to n
    int count;
    int range;
    int permutations;

    range = r;
    count = 0;
    int *data = (int *)malloc(sizeof(int) * range);
    while (count < range)
    {
        data[count] = count + 1;
        count++;
    }

    permutations = factorial(range);
    int **perms = (int **)malloc(sizeof(int *) * permutations); // 4! = 24 permutations
    initializePerms(perms);

    int index = 0;
    permute(data, 0, 3, perms, &index);

    /* int r = 4

    */
    int flag, a = 0;
    // int arr[0]*r //generates an array of r size
    int arr[4] = {0, 0, 0, 0};
    while (a < permutations)
    {
        int b = 0;
        while (b < permutations)
        {
            int c = 0;
            while (c < permutations)
            {
                int d = 0;
                while (d < permutations)
                {
                    int grid[4][4] = {{perms[a][0], perms[a][1], perms[a][2], perms[a][3]},
                                      {perms[b][0], perms[b][1], perms[b][2], perms[b][3]},
                                      {perms[c][0], perms[c][1], perms[c][2], perms[c][3]},
                                      {perms[d][0], perms[d][1], perms[d][2], perms[d][3]}};

                    flag = checkFlag(grid, arr, cols, rows);

                    if (flag)
                    {
                        int i = 0;
                        while (i < 4)
                        {
                            print_array(grid[i], 4);
                            i++;
                        }
                        freePerms(perms);
                        return 1;
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }

    freePerms(perms);
    return 0;
}
