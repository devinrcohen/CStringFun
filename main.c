#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char* str;
    size_t length;
} cppstring;

void newstring(cppstring*, const char*);
void reassignstring(cppstring*, const char*);
void stringcat(cppstring*, cppstring, cppstring);
void stringappend(cppstring*, cppstring, const char*);

int main(void) {
    cppstring test1, test2;
    newstring(&test1, "hola, ");
    newstring(&test2, "world!");
    stringcat(&test1, test1, test2);
    stringappend(&test1, test1, " what planet are we on?");
    printf("%s\nlength: %d", test1.str, test1.length);
    //printf("Hello, World!\n");
    free(test1.str);
    free(test2.str);
    return 0;
}

void newstring(cppstring* new, const char* str) {
    size_t len = strlen(str);
    new->str = malloc((len+1) * sizeof(char));
    for (size_t i = 0; i <= len; ++i) {
        new->str[i] = str[i];
    }
    new->length = len;
}

void stringcat(cppstring* new, cppstring str1, cppstring str2) {
    size_t len1 = strlen(str1.str);
    size_t len2 = strlen(str2.str);
    new->str = malloc((len1 + len2 + 1)*sizeof(char));
    for (size_t i = 0; i <= len1; ++i) {
        new->str[i] = str1.str[i];
    }
    for (size_t i = 0; i <= len2; ++i) {
        new->str[i+len1] = str2.str[i];
    }
    new->length = len1 + len2;
}

void stringappend(cppstring* new, cppstring str1, const char* str2) {
    size_t len1 = strlen(str1.str);
    size_t len2 = strlen(str2);
    new->str = malloc((len1 + len2 + 1)*sizeof(char));
    for (size_t i = 0; i <= len1; ++i) {
        new->str[i] = str1.str[i];
    }
    for (size_t i = 0; i <= len2; ++i) {
        new->str[i+len1] = str2[i];
    }
    new->length = len1 + len2;
}