//
// Created by devinrcohen on 2/10/26.
//

#include "stringlab.h"
#include <stdlib.h>

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