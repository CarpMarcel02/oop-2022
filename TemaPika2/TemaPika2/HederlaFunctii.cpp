#include "HederlaFunctii.h"
#include <iostream>
using namespace std;
int ComparaNume(const char* x, const char* y) {
   
        if (strcmp(x,y) > 0)
        return 1;
        else 
            if (strcmp(x,y)<0)
            return -1;
        else 
             return 0;
      
}

int ComparaNotaMate(float x, float y) {
    if (x > y)
        return 1;
    else
        return -1;
}

int ComparaNotaEngleza(float x, float y) {
    if (x > y)
        return 1;
    else
        return -1;
}

int ComparaNotaIst(float x, float y) {
    if (x > y)
        return 1;
    else
        return -1;
}

int ComparaMedie(float x, float y) {
    if (x > y)
        return 1;
    else
        return -1;
}
