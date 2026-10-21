#include <stdio.h>
#define COEF 60
int main()
{
    int digit;
    while (scanf("%d", &digit)==1 && digit>0)
    {
        int min = digit/COEF;
        int sec = digit%COEF;
        printf("%d мин и %d сек\n", min, sec);
        printf("следующее значение:\n");
    }
    return 0;
}