#include <iostream>
#include <stdlib.h>
#include "Sort.h"

int main() {
    Sort c1(10, 10, 100);
    c1.Print();
    int v[5] = { 1, 2, 3, 4, 5 };
    Sort c2(v, 5);
    c2.Print();
    Sort c3(6, 1, 2, 3, 4, 5, 6);
    c3.Print();
    char c[] = "12,34,56,78";
    Sort c4(c);
    c4.Print();
    Sort c5;
    c5.Print();
    printf("Numarul cu index-ul 2 este: %d\n", c1.GetElementFromIndex(2));
    c1.QuickSort(false);
    c1.Print();
    c2.BubbleSort(false);
    c2.Print();
    c3.InsertSort(true);
    c3.Print();
    system("pause");
    return 0;
}