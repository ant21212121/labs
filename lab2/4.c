#include <stdio.h>
#include <limits.h>
int main()
{
    printf("INT_MIN: %d\n",INT_MIN);
    printf("INT_MAX: %d\n",INT_MAX);
    printf("UINT_MAX: %d\n",UINT_MAX);
    int RANGE_OK = ((unsigned int)INT_MAX * 2u + 1u == UINT_MAX);
    printf("RANGE: %d",RANGE_OK);
    return 0;
}