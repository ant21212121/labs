#include <stdio.h>
#include <ctype.h>
int main()
{
    double v;
    double step1 = 0.0, step2 = 0.0, step3 = 0.0;
    scanf("%lf", &v);
    if (v <= 10)
    {
        step1 = v * 1.0;
    }
    else if (v <= 30)
    {
        step1 = 10.0 * 1.0;
        step2 = (v - 10.0) * 2.0;
    }
    else
    {
        step1 = 10.0 * 1.0;
        step2 = 20.0 * 2.0;
        step3 = (v - 30.0) * 3.0;
    }
    double result = step1 + step2 + step3;
    printf("Исходный объем: %.2f м3\n", v);
    printf("Ступень 1: %.2f\n", step1);
    printf("Ступень 2: %.2f\n", step2);
    printf("Ступень 3: %.2f\n", step3);
    printf("Итоговая сумма: %.2f\n", result);
    return 0;
}
