#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    wchar_t str_wchar[20];
    wscanf(L"%ls",str_wchar);
    wprintf(L"Агент %ls авторизован в системе",str_wchar);
    return 0;
}