#include <stdio.h>
#include <stdint.h>
int main()
{
    uint16_t a,b;
    scanf("%hu %hu",&a,&b);
    float f=(float)a*b/2;
    printf("uint16_t: %llu байт\n",(unsigned long long)sizeof(uint16_t));
    printf("float: %llu байт\n",(unsigned long long)sizeof(float));
    printf("result: %f\n",f);
    return 0;
}