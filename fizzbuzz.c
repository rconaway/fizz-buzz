#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void fizzbuzz(int n, char* buffer, size_t bufferLen)
{
    if (n % 3 == 0)
        strcpy(buffer, "fizz");
    else if (n % 5 == 0)
        strcpy(buffer, "buzz");
    else
        snprintf(buffer, bufferLen, "%d", n);
}