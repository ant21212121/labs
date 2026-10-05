#include <stdio.h>
#include <stdint.h>
int main()
{
    int id;
    uint8_t code;
    float voltage;
    scanf("%x %hho %f",&id,&code,&voltage);
    uint16_t checksum=id+code;
    printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR:%c\nVOLTAGE: %.2f\nCHECKSUM: %u\n",id,code,code,voltage,checksum);


    return 0;
}