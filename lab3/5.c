#include <stdio.h>
#include <string.h>
int main()
{
    char m;
    scanf("%c",&m);
    printf("CODE_DEC: %d\n",m);
    printf("CODE_HEX: %x\n",m);
    printf("CODE_OCT: %o\n",m);
    printf("UPPER: %c\n",m-32);
    printf("NEXT: %c\n",m+1);
    printf("PREV: %c\n", m-1);

    return 0;
}