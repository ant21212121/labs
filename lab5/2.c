#include <stdio.h>
#define HEIGHT 5

int main()
{
    for (int i=0;i<HEIGHT;i++)
    {
        for (int j=0;j<=i;j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}
