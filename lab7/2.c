#include <stdio.h>
#include <math.h>

int isprime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x = getchar();
    int count1 = 0;
    int count2 = 0;
    while (x != EOF)
    {
        if (isprime(x))
        {
            count1++;
        }
        count2++;
        x = getchar();
    }
    printf("простые: %d общее кол-во: %d", count1, count2);
    return 0;
}
