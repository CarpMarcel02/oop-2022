#define _CRT_SECURE_NO_WARNINGS
#include "NumberList.h"
#include <iostream>
int main() {

    NumberList Lista;
    Lista.Init();
    Lista.Add(5);
    Lista.Add(3);
    Lista.Add(7);
    Lista.Add(9);
    Lista.Add(11);
    Lista.Sort();
    Lista.Print();
    return 0;


}