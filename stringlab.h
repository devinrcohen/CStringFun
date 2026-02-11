//
// Created by devinrcohen on 2/10/26.
//

#pragma once
#include <string.h>

typedef struct {
    char* str;
    size_t length;
} cppstring;

void newstring(cppstring*, const char*);
void reassignstring(cppstring*, const char*);
void stringcat(cppstring*, cppstring, cppstring);
void stringappend(cppstring*, cppstring, const char*);

