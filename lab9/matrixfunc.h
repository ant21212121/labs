#include <stddef.h>
#ifndef MATRIXFUNC_H
#define MATRIXFUNC_H
int fill_mat(int *matptr, size_t rows, size_t cols);
void print_mat(int *matptr, size_t rows, size_t cols);
double avg_mat(int *matptr, size_t rows, size_t cols);
void max_rows(int *matptr, size_t rows, size_t cols);
int diff_max_min(int *matptr, size_t rows, size_t cols);
#endif
