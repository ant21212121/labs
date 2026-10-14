#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    int width;
    scanf("%s %d",a,&width);
    printf("%*s\n",width,a);
    printf("%-*s\n",width+5,a);
    return 0;
}