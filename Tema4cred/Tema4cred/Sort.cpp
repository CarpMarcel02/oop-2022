#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <cstring>
#include <iostream>

Sort::Sort(int numar_elemente, int min_element, int max_element) {
    this->vector = new int[numar_elemente];

    time_t t;
    srand((unsigned) time(&t));
    for (int i = 0; i < numar_elemente; i++) {
        this->vector[i] = min_element + rand() % (min_element - max_element + 1);
    }
    this->n += numar_elemente;
}

Sort::Sort(int* vector, int numar_elemente) {
    this->vector = new int[numar_elemente];

    for (int i = 0; i < numar_elemente; i++) {
        this->vector[i] = i;
    }
    this->n += numar_elemente;
}

Sort::Sort(int count, ...) {
    this->vector = new int[count];

    va_list vl;
    va_start(vl, count);
    for (int i = 0; i < count; i++) {
        this->vector[i] = va_arg(vl, int);
    }
    va_end(vl);
    this->n += count;
}

Sort::Sort(char* c) {
    int commas = 0;
    int i      = 0;

    while (c[i] != NULL) {
        if (c[i] == ',')
            commas++;
        i++;
    }

    int count    = commas + 1;
    this->vector = new int[count];

    i = 0;
    char* p;

    p = strtok(c, ",");
    while (p) {
        this->vector[i++] = atoi(p);
        p                 = strtok(NULL, ",");
    }
    this->n += count;
}

Sort::Sort() : vector(new int[6]{ 1, 2, 3, 4, 5, 6 }) {
    this->n = 6;
}

int Sort::GetElementsCount() {
    return this->n;
}

void Sort::Print() {
    for (int i = 0; i < this->n; i++) {
        printf("Am generat elementul cu numarul %d: %d\n", i, vector[i]);
    }
}

int Sort::GetElementFromIndex(int index) {
    return this->vector[index];
}

void Sort::InsertSort(bool ascendent) {
    if (ascendent == true) {
        int i, key, j;
        for (i = 1; i < this->n; i++) {
            key = this->vector[i];
            j   = i - 1;
            while (j >= 0 && this->vector[j] > key) {
                this->vector[j + 1] = this->vector[j];
                j                   = j - 1;
            }
            this->vector[j + 1] = key;
        }
    } else {
        int i, key, j;
        for (i = 1; i < this->n; i++) {
            key = this->vector[i];
            j   = i - 1;
            while (j >= 0 && this->vector[j] < key) {
                this->vector[j + 1] = this->vector[j];
                j                   = j - 1;
            }
            this->vector[j + 1] = key;
        }
    }
}

void Sort::BubbleSort(bool ascendent) {
    if (ascendent == true) {
        int i, j;
        for (i = 0; i < this->n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (this->vector[j] > this->vector[j + 1]) {
                    int aux             = this->vector[j];
                    this->vector[j]     = this->vector[j + 1];
                    this->vector[j + 1] = aux;
                }
    } else {
        int i, j;
        for (i = 0; i < this->n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (this->vector[j] < this->vector[j + 1]) {
                    int aux             = this->vector[j];
                    this->vector[j]     = this->vector[j + 1];
                    this->vector[j + 1] = aux;
                }
    }
}

int Sort::partition(int a[], int low, int high) {
    int pivot = this->vector[high];
    int i     = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (this->vector[j] < pivot) {
            i++;
            int aux         = this->vector[i];
            this->vector[i] = this->vector[j];
            this->vector[j] = aux;
        }
    }
    int aux             = this->vector[i + 1];
    this->vector[i + 1] = this->vector[high];
    this->vector[high]  = aux;
    return (i + 1);
}

void Sort::QS(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(this->vector, low, high);
        QS(this->vector, low, pi - 1);
        QS(this->vector, pi + 1, high);
    }
}

void Sort::QuickSort(bool ascendent) {
    QS(this->vector, 0, this->n - 1);
    if (ascendent == false) {
        for (int i = 0; i < this->n / 2; i++) {
            int aux                       = this->vector[i];
            this->vector[i]               = this->vector[this->n - i - 1];
            this->vector[this->n - i - 1] = aux;
        }
    }
}