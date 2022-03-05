#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <iostream>
using namespace std;

void Student::SetNume(const char* x) {
    strcpy(this->Nume, x);
}

void Student::SetNotaMate(float x) {
    this->NotaMat = x;
}

void Student::SetNotaEngleza(float x) {
    this->NotaEng = x;
}

void Student::SetNotaIst(float x) {
    this->NotaIs = x;
}
const char* Student::GetNume() const {
    return Nume;
}
float Student::GetNotaMate() const {
    return NotaMat;
}
float Student::GetNotaEngleza() const {
    return NotaEng;
}
float Student::GetNotaIst() const {
    return NotaIs;
}
float Student::Medie() {
    this->Ma = (NotaMat + NotaEng + NotaIs) / 3;
    return Ma;
}
