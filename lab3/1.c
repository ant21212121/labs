#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20] = "SibSUTIS";
    printf("SIZEOF: %zu\n ",sizeof(arr));
    printf("STRLEN: %zu\n ",strlen(arr));
    printf("FREE_BYTES: %d\n ",sizeof(arr)-(strlen(arr)+1));
    printf("\n");
    char arrr[20] = "СибГУТИ";
    printf("SIZEOF: %zu\n ",sizeof(arrr));
    printf("STRLEN: %zu\n ",strlen(arrr));
    printf("FREE_BYTES: %d\n ",sizeof(arrr)-(strlen(arrr)+1));
    return 0;
}