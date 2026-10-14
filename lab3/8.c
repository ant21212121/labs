#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char str_char[] = "Сбой матрицы";
    wchar_t str_wchar[] = L"Сбой матрицы";
    printf("char  -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(str_char), strlen(str_char));
    wprintf(L"wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(str_wchar), wcslen(str_wchar));
    return 0;
}