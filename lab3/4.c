#include <stdio.h>
#include <string.h>
int main()
{
    char lit[]="\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";
    printf("%s",lit);
    printf("\n");
    printf("STRLEN: %zu\n",strlen(lit)-1);
    printf("SIZEOF: %zu\n", sizeof(lit)-1);
    return 0;
}