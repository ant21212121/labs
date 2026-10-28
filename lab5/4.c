#include <stdio.h>

#define SIZE 8

int main()
{
    double arr[SIZE];
    double bell[SIZE] = {1.0, 1.0, 2.0, 5.0, 15.0, 52.0, 203.0, 877.0};
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = bell[i];
    }
    double sum = 0.0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    printf("%.2f\n", sum);
    return 0;
}
