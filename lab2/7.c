#include <stdio.h>

int main()
{
    long double x;
    scanf("%Lf", &x);
    double y = x;
    float z = x;
    printf("FLOAT: %.6f\n", z);
    printf("DOUBLE: %.6f\n", y);
    printf("LDOUBLE: %.6Lf\n", x);
    printf("FLOAT+1: %.6f\n", z + 1);
    printf("DOUBLE+1: %.6f\n", y + 1);
    printf("LDOUBLE+1: %.6Lf\n", x + 1);

    return 0;
}