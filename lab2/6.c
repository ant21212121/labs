#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t x;
    uint8_t a,b,c;
    scanf("%hhu", &x);
    a=x+x;
    b=2*x;
    c=x*x;
    printf("ADD: %u\n",(unsigned int)a);
    printf("MUL2: %u\n",(unsigned int)b);
    printf("SQR: %u\n",(unsigned int)c);
    return 0;
}