#include <stdio.h>
#include <ctype.h>
int main()
{
    int ch = getchar();
    int count = 0;
    while (ch != '#')
    {
        if (ch == 'o')
        {
            count += 1;
            putchar('0');
        }
        else
        {
            putchar(ch);
        }
        ch = getchar();
    }
    printf("\nКоличество замен символа 'o' на '0':%d\n", count);
    return 0;
}
