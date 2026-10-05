#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d,%x,%o", &a, &b, &c);
    printf("UNIT_ID: %d\nUNIT_VERSION: %d\nUNIT_STATUS: %d\nSUM: %d",a, b, c, a + b + c);
    return 0;
}