#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a,b;
    bool x,y;
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    printf("MODULE_READY: %d\nFAULT_STATE: %d\nBOOL_SIZE: %d\nFLAGS_SUM: %d",x,y,sizeof(bool),x+y);
    return 0;
}