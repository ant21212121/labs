#include <stdio.h>
#include <stdint.h>

#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("INT8: size=%d, min=%lld, max=%lld, values=%llu\n", (int)sizeof(int8_t), (long long)INT8_MIN, (long long)INT8_MAX, (unsigned long long)((long long)INT8_MAX - (long long)INT8_MIN + 1));
    printf("UINT8: size=%d, min=%lld, max=%lld, values=%llu\n", (int)sizeof(uint8_t), (long long)0, (long long)UINT8_MAX, (unsigned long long)((long long)UINT8_MAX - (long long)0 + 1));
    printf("INT16: size=%d, min=%lld, max=%lld, values=%llu\n", (int)sizeof(int16_t), (long long)INT16_MIN, (long long)INT16_MAX, (unsigned long long)((long long)INT16_MAX - (long long)INT16_MIN + 1));
    printf("UINT16: size=%d, min=%lld, max=%lld, values=%llu\n", (int)sizeof(uint16_t), (long long)0, (long long)UINT16_MAX, (unsigned long long)((long long)UINT16_MAX - (long long)0 + 1));
    printf("INT32: size=%d, min=%lld, max=%lld, values=%llu\n", (int)sizeof(int32_t), (long long)INT32_MIN, (long long)INT32_MAX, (unsigned long long)((long long)INT32_MAX - (long long)INT32_MIN + 1));
    printf("UINT32: size=%d, min=%lld, max=%lld, values=%llu\n", (int)sizeof(uint32_t), (long long)0, (long long)UINT32_MAX, (unsigned long long)((long long)UINT32_MAX - (long long)0 + 1));
    return 0;
}