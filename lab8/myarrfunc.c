#include "myarrfunc.h"
#include <stdio.h>

void fill_arr(int *arrptr, size_t n)
{
    for(int i = 0 ; i<n; i++)
    {
        scanf("%d", arrptr+i);
    }
}
void print_arr(int *arrptr, size_t n)
{
    for (size_t i = 0; i<n; i++)
    {
        printf("%zu, %d, %p\n", i, *(arrptr+i),arrptr+i);
    }
}
int search_ind(int *arrptr, size_t n)
{
    int last = -1;
    for (size_t i = 0; i<n; i++)
    {
        if (*(arrptr+i)<0)
        {
            last = (int)i;
        }
    }
    return last;
}
int find_max(int *arrptr, size_t n)
{
    int max = *arrptr;
    for (size_t i = 0; i<n;i++)
    {
        if (*(arrptr+i)>max)
        {
            max=*(arrptr+i);
        }
    }
    return max;
}
int multiple(int *arrptr, size_t n, int k)
{
    if (k==0) return 0;
    int count = 0;
    for (size_t i = 0; i<n; i++)
    {
        if (*(arrptr+i)%k==0)
        {
            count++;
        }

    }

    return count;
}
int sum(int *arrptr, size_t n)
{
    if (n==0) return 0;
    double total=0.0;
    int summ=0.0;
    for (size_t i = 0; i<n; i++)
    {
        total+=*(arrptr+i);
    }
    double avg = total/n;
    for (size_t i = 0; i<n; i++)
    {
        if (*(arrptr+i)>avg)
        {
            summ+=*(arrptr+i);
        }
    }
    return summ;
}
