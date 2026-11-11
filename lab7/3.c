#include <stdio.h>
#include <math.h>

double tg(double n, double m)
{
    return tan(n * m);
}
int main()
{
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("%.4f\n", tg(a, b));
    }
    return 0;
}
