
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void fizzbuzz(int n, char* buffer)
{
    if (n % 3 == 0 && n % 5 == 0)
        strcpy(buffer, "fizzbuzz");
    else if (n % 3 == 0)
        strcpy(buffer, "fizz");
    else if (n % 5 == 0)
        strcpy(buffer, "buzz");
    else
        sprintf(buffer, "%d", n);
}

