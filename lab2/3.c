#include <stdio.h>
int main()
{
    int a = 10;
    int b = 010;
    int c= 0x10;
    char n='A';
    printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\n",a,b,c);
    printf("INT_SUFFIX: %d %d %d %d\n",sizeof(10),sizeof(10u),sizeof(10LL),sizeof(10ULL));
    printf("FLOAT_SUFFIX: %d %d %d\n",sizeof(0.1f),sizeof(0.1),sizeof(0.1L));
    printf("FLOAT_EQ: %d\n",0.1f==0.1);
    printf("CHAR_FORMS: %d %d %d\n",'A','\x41','\101');
    printf("CHAR_LIT_VAR_STR: %d %d %d\n",sizeof('A'),sizeof(n),sizeof("A"));
    return 0;
}