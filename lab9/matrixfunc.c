#include "matrixfunc.h"
#include <stdio.h>

int fill_mat(int *matptr, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            if (scanf("%d", matptr + i * cols + j) != 1)
            {
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF);
                return 0;
            }
        }
    }
    return 1;
}

void print_mat(int *matptr, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            printf("[%zu][%zu]: %d, %p\n", i, j, *(matptr + i * cols + j), (void *)(matptr + i * cols + j));
        }
    }
}

double avg_mat(int *matptr, size_t rows, size_t cols)
{
    if (rows == 0 || cols == 0) return 0.0;
    double total = 0.0;
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            total += *(matptr + i * cols + j);
        }
    }
    return total / (double)(rows * cols);
}

void max_rows(int *matptr, size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        int max = *(matptr + i * cols);
        for (size_t j = 1; j < cols; j++)
        {
            if (*(matptr + i * cols + j) > max)
            {
                max = *(matptr + i * cols + j);
            }
        }
        printf("строка %zu: %d\n", i, max);
    }
}

int diff_max_min(int *matptr, size_t rows, size_t cols)
{
    if (rows == 0 || cols == 0) return 0;
    int max = *matptr;
    int min = *matptr;
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            int val = *(matptr + i * cols + j);
            if (val > max)
            {
                max = val;
            }
            if (val < min)
            {
                min = val;
            }
        }
    }
    return max - min;
}
