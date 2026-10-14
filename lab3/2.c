#include <stdio.h>
#include <string.h>
int main()
{
    char word1[15];
    char word2[15];
    scanf("%s %s",word1,word2);
    printf("%s-%s\n",word1,word2);
    printf("TOTAL_LEN: %zu",strlen(word1)+strlen(word2));
    return 0;
}