#pragma once
class Sort {
    int* vector;
    int n, cate;

  public:
    Sort(int numar_elemente, int min_element, int max_element);
    Sort(int* vector, int numar_elemente);
    Sort();
    Sort(int count, ...);
    Sort(char* c);

    void InsertSort(bool ascendent = false);
    int partition(int a[], int low, int high);
    void QS(int a[], int low, int high);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};
#pragma once
