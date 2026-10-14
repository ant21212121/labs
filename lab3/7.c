#include <stdio.h>
#include <string.h>
#define LIN  "LinuxDistro"
const char YEAR[] = "2026";
int main()
{
    printf("DISTRO: %s\n",LIN);
    printf("RDATE: %s\n",YEAR);
    printf("STRLEN: %zu\n",strlen(LIN));
    printf("SIZEOF: %zu\n",sizeof(LIN));
    return 0;
}