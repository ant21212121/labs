#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0.0;
    double b = 5.0;
    double h = 0.5;
    int iter = 1;
    for (double x=a; x<=b; x+=h)
    {
        double y = exp(-x);
        printf("%.4f %.4f %d\n",x,y,iter);
        iter++;
    }
    return 0;
}
