#include <stdio.h>
double k_to_c(double k)
{
    const double a = 273.15;
    double c = k-a;
    return c;
}
int main()
{
    double k;
    while (scanf("%lf",&k) ==1)
    {
        double result=k_to_c(k);
        printf("%.2lf\n",result);
    }
}