#include <stdio.h>

int main(void)
{
    int choice = 0;
    double m, v, rho, spec_vol;
    while (choice != 5)
    {
        printf("\n1. Плотность\n2. Масса\n3. Объем\n4. Удельный объем\n5. Выход\nВыбор: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 5)
        {
            printf("ошибка\n");
            continue;
        }
        switch (choice)
        {
        case 1:
            printf("Масса и объем: ");
            scanf("%lf %lf", &m, &v);
            rho = m / v;
            printf("Плотность: %.2f\n", rho);
            break;
        case 2:
            printf("Плотность и объем: ");
            scanf("%lf %lf", &rho, &v);
            m = rho * v;
            printf("Масса: %.2f\n", m);
            break;
        case 3:
            printf("Масса и плотность: ");
            scanf("%lf %lf", &m, &rho);
            v = m / rho;
            printf("Объем: %.2f\n", v);
            break;
        case 4:
            printf("Объем и масса: ");
            scanf("%lf %lf", &v, &m);
            spec_vol = v / m;
            printf("Удельный объем: %.4f\n", spec_vol);
            break;
        case 5:
            break;
        }
    }
    return 0;
}
