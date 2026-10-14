#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    wchar_t a[10], b[10], c[10];
    wscanf(L"%ls\n",a);
    wscanf(L"%ls\n",b);
    wscanf(L"%ls",c);
    wprintf(L"%-15ls|%20ls|%.5ls\n", a, b, c);
    return 0;
}