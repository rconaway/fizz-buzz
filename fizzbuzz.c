#include <stdlib.h>
#include <string.h>

void fizzbuzz(int n, char* buffer, size_t bufferLen)
{
    snprintf(buffer, bufferLen, "%d", n);
}