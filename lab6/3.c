#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int n;
    int count = 0;
    int count1 = 0;
    int sum1 = 0;
    int sum2 = 0;
    while (scanf("%d", &n) == 1 && n != 0)
    {
        int m = abs(n);
        int sum = 0;
        while (m > 0)
        {
            sum += m % 10;
            m /= 10;
        }
        if (sum != 0 && n % sum == 0)
        {
            count += 1;
            sum1 += n;
        }
        else
        {
            count1 += 1;
            sum2 += n;
        }
    }
    printf("кратные= %d", count);
    if (count > 0)
    {
        printf(" среднее ариф = %.2f\n", (double)sum1 / count);
    }
    else
    {
        printf(" среднее ариф = 0\n");
    }

    printf("остальные = %d", count1);
    if (count1 > 0)
    {
        printf(" среднее ариф = %.2f\n", (double)sum2 / count1);
    }
    else
    {
        printf(" среднее ариф = 0\n");
    }
    return 0;
}
