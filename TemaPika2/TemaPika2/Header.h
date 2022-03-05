#pragma once
class Student {
    char Nume[100];
    float NotaMat;
    float NotaEng;
    float NotaIs;
    float Ma;
  
public: 
    void SetNume(const char* x);
    void SetNotaMate(float x);
    void SetNotaEngleza(float x);
    void SetNotaIst(float x);
    const char* GetNume()const;
    float GetNotaMate() const;
    float GetNotaEngleza() const;
    float GetNotaIst() const;
   float Medie();

  

};