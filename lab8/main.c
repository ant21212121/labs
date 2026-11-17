#include <stdio.h>
#include "myarrfunc.h"
int main()
{
    int arr[100];
    size_t n=0;
    char choice;

    while(1)
    {
        printf("a Задать размер массива\n");
        printf("b Заполнить массив\n");
        printf("c Представление массива (значения, адреса)\n");
        printf("d Поиск индекса последнего отрицательного элемента\n");
        printf("e Количество элементов, кратных k\n");
        printf("f Сумма элементов выше среднего\n");
        printf("g Выход\n");
        printf("Выберите пункт: ");
        if (scanf(" %c", &choice) != 1)
        {
            break;
        }
        switch (choice)
        {
            case 'a':
                printf("Введите размер массива (от 1 до 100)");
                if (scanf("%zu", &n) == 1 && n > 0 && n <= 100)
                {
                    printf("размер массива: %zu\n", n);
                }
                else
                {
                    printf("некорректный размер\n");
                    n = 0;
                }
                break;
            case 'b':
                if (n == 0)
                {
                    printf("сначала задайте размер массива(a)\n");
                }
                else
                {
                    fill_arr(arr, n);
                }
                break;
            case 'c':
                if (n==0)
                {
                    printf("сначала задайте размер массива(a)\n");
                }
                else
                {
                    print_arr(arr, n);
                }
                break;
            case 'd':
                if (n==0)
                {
                    printf("сначала задайте размер массива(a)\n");
                }
                else
                {
                    int index=search_ind(arr, n);
                    if (index==-1)
                    {
                        printf("отрицательных нет\n");
                    }
                    else
                    {
                        printf("%d\n",index);
                    }
                }
                break;
            case 'e':
                if (n == 0)
                {
                printf("сначала задайте размер массива(a)\n");
                }
                else
                {
                    int max = find_max(arr, n);
                    printf("максимум массива: %d\n", max);
                    int k;
                    printf("введите число k: ");
                    scanf("%d", &k);
                    if (k < max && k != 0)
                    {
                        int count = multiple(arr, n, k);
                        printf("кол-во элементов кратных %d: %d\n", k, count);
                    }
                    else
                    {
                        printf("число k должно быть меньше %d и не равно 0\n", max);
                    }
                }
                break;
            case 'f':
                if (n == 0)
                {
                    printf("cначала задайте размер массива(a)\n");
                }
                else
                {
                    int result = sum(arr, n);
                        printf("cумма элементов выше среднего: %d\n", result);
                }
                break;
            case 'g':
                printf("выход\n");
                return 0;
            default:
                printf("неизвестный пункт\n");
                break;
        }
    }
    return 0;
}


