#include <stdio.h>

void swap(double *a, double *b, double *c)
{
    double x = *a;
    double y = *b;
    double z = *c;
    double max = x;
    if (y > max) max = y;
    if (z > max) max = z;
    double min = x;
    if (y < min) min = y;
    if (z < min) min = z;
    double mid = (x + y + z) - max - min;
    *a = max;
    *b = min;
    *c = mid;
}
int main()
{
    double x, y, z;
    if (scanf("%lf %lf %lf", &x, &y, &z) == 3)
    {
        printf("%lf %lf %lf\n", x, y, z);
        swap(&x, &y, &z);
        printf("%lf %lf %lf\n", x, y, z);
    }
    return 0;
}
