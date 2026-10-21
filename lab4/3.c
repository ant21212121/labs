#include <stdio.h>
int main()
{
    int n;
    int i=1;
    int count=1;
    scanf("%d", &n);
    while ((count<=n) && (n!=0))
    {
        printf("%d ",i);
        i+=2;
        count++;
    }
    return 0;
}