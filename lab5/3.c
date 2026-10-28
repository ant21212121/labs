#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    while (scanf("%d", &n)==1 && n>0)
    {
        double sum = 0.0;
        for (int i=1 ;i<=n; i++)
        {
            float x=1.0/sqrt(i);
            sum+=x;
        }
        printf("%.6f\n",sum);
    }
    return 0;
}
