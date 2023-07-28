//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Complex.cpp
// Win10, Visual C++ 2022, ISO C17
// 
// 

#include <iostream>
#include "Complex.h"

using std::cout;
// using std::cerr;

MichaelPokotskyi::Complex::Complex() {
    complexInit(0, 0);
}

MichaelPokotskyi::Complex::Complex(double real, double imaginary) {
    complexInit(real, imaginary);
}

MichaelPokotskyi::Complex 
MichaelPokotskyi::Complex::operator+(Complex &number) {
    // return Complex(1, 1);
}

void MichaelPokotskyi::Complex::complexInit(double real, double imaginary)
    {
    this->real = real;
    this->imaginary = imaginary;
    realIsNeg = real < 0;
    imaginaryIsNeg = imaginary < 0;
    }