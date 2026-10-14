#include <stdio.h>
#include <string.h>
int main()
{
    char name[10];
    int len = strlen(name);
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%18s\"\n", name);
    printf("\"%-18s\"\n", name);
    printf("\"%*s\"\n", (int)(len + 5), name);
    return 0;
}