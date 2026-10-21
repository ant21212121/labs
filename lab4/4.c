#include <stdio.h>
int main()
{
    int N;
    int d=1;
    double S=0.0;
    scanf("%d",&N);
    while (d<=N)
    {
        S+=1/(double)d;
        d++;
    }
    printf("%.6f\n", S);
    return 0;
}