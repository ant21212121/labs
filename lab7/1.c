#include <stdio.h>
#include <ctype.h>
int main()
{
    int flag = 0;
    int x = getchar();
    while (x != EOF)
    {
        if (isspace(x))
        {
            if (flag == 0)
            {
                putchar(' ');
                flag = 1;
            }
        }
        else
        {
            putchar(x);
            flag = 0;
        }
        x = getchar();
    }
    return 0;
}
