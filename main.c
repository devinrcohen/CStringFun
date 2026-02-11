#include <stdio.h>
#include <stdlib.h>
#include "stringlab.h"

int main(void) {
    cppstring test1, test2;
    newstring(&test1, "hola, ");
    newstring(&test2, "world!");
    stringcat(&test1, test1, test2);
    stringappend(&test1, test1, " what planet are we on?");
    printf("%s\nlength: %d", test1.str, (int) test1.length);
    //printf("Hello, World!\n");
    free(test1.str);
    free(test2.str);
    return 0;
}