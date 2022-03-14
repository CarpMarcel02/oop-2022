#include "Math.h"
#include <iostream>
#include <string.h>
#include <stdarg.h>
#include <cstdarg>
#define _CRT_SECURE_NO_WARNINGS

int Math::Add(int a, int b) {
    return a+b;
}

int Math::Add(int a , int b , int c) {
    return a+b+c;
}
 
int Math::Add(double a, double b) {
    return (int) a + b;
}

int Math::Add(double a, double b, double c) {
    return (int) a + b + c;
}

int Math::Mul(int a, int b) {
    return a*b;
}

int Math::Mul(int a, int b, int c) {
    return a*b*c;
}

int Math::Mul(double a , double b) {
    return (int) a * b;
}

int Math::Mul(double a , double b , double c) {
    return (int) a * b * c;
}

int Math::Add(int count, ...) {
    int sum = 0;
    va_list args;
    va_start(args, count);
    for (unsigned i=0; i < count ; i++)
        sum = sum + va_arg(args, int);
   
    va_end(args);
    return sum;
}
char* Math::Add(const char* a, const char* b) {
    if (a==nullptr)
    return nullptr;
    if (b==nullptr)
    return nullptr;
    char c[101];
    strcpy_s(c, a);
    strcat_s(c, " ");
    strcat_s(c, b);
   
    return c;



}
