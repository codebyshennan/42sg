#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
void swap(int *arr, int i, int j);
void permute(int *arr, int l, int r, int **perms, int *index);
void initializePerms(int **perms);
void freePerms(int **perms);
int checkFlag(int (*grid)[4], int *arr, int *cols, int *rows);
int rush_01(int *cols, int *rows, int range);

#endif // UTILS_H
