#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void say_word(char * buffer, size_t bufferLen, char* word)
{
    strncpy(buffer, word, bufferLen);
    buffer[bufferLen-1] = 0;
}

void fizzbuzz(int n, char* buffer, size_t bufferLen)
{
    if (n %15 == 0) {
        say_word(buffer, bufferLen, "fizzbuzz");
    } else if (n % 3 == 0)
        say_word(buffer, bufferLen, "fizz");
    else if (n % 5 == 0)
        say_word(buffer, bufferLen, "buzz");
    else
        snprintf(buffer, bufferLen, "%d", n);


}

