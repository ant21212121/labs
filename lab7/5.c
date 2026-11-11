#include <stdio.h>

int iter(int n)
{
    if (n <= 1)
        return 0;
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return (sum == n);
}

int rec(int n, int d)
{
    if (d == 0)
        return 0;
    if (n % d == 0)
    {
        return d + rec(n, d - 1);
    }
    else
    {
        return rec(n, d - 1);
    }
}
int rec2(int n)
{
    if (n <= 1)
        return 0;
    return rec(n, n / 2) == n;
}

int main()
{
    int x;
    if (scanf("%d", &x) == 1)
    {
        printf("%d\n", iter(x));
        printf("%d\n", rec2(x));
    }
    return 0;
}
