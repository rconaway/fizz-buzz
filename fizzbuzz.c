#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void fizzbuzz(int n, char* buffer, size_t bufferLen)
{
    if (n == 3)
        strcpy(buffer, "fizz");
    else
        snprintf(buffer, bufferLen, "%d", n);
}