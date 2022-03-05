#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <iostream>
#include "HederlaFunctii.h"
using namespace std;
int main() {
    Student Facultate1;
    Facultate1.SetNume("Marcel");
    Facultate1.SetNotaMate(10);
    Facultate1.SetNotaEngleza(9);
    Facultate1.SetNotaIst(4);
    //printf(" %.2f ", Facultate1.Medie());
    Student Facultate2;
    Facultate2.SetNume("Ovidiu");
    Facultate2.SetNotaMate(8);
    Facultate2.SetNotaEngleza(10);
    Facultate2.SetNotaIst(6);
    Facultate2.SetNume("Ovidiu");
    cout << ComparaNume(Facultate1.GetNume(), Facultate2.GetNume()) << " ";
    cout << ComparaNotaMate(Facultate1.GetNotaMate(), Facultate2.GetNotaMate()) << " ";
    cout << ComparaNotaEngleza(Facultate1.GetNotaEngleza(), Facultate2.GetNotaEngleza()) << " ";
    cout << ComparaNotaIst(Facultate1.GetNotaIst(), Facultate2.GetNotaIst()) << " ";
    cout << ComparaMedie(Facultate1.Medie(), Facultate2.Medie()) << " ";
   //Marcel Ovidiu Marcel mai mic se afiseaza -1
   // 10 8 nnote la mate se afiseaza 1
   // 9 10 note la engleza se afiseaza -1
   // 4 6 note la istorie se afiseaza -1
    //7.67    8 la medii Se afiseaza -1




}