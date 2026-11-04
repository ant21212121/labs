#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <wchar.h>
int main()
{
    setlocale(LC_ALL, "");
    wint_t wch = getwchar();
    wchar_t min = wch;
    while (wch != L'#')
    {
        if (min > wch)
        {
            min = wch;
        }
        wch = getwchar();
    }
    wprintf(L"min code: %u symbol: %lc\n", (unsigned int)min, min);
    return 0;
}
