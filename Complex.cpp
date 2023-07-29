//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Complex.cpp
// Win10, Visual C++ 2022, ISO C17
// 
// Complex functions implementation.
// Zer0 implemented as 0+0i

#include <iostream>
#include "Complex.h"

// no arg constructor assigning zer0
MichaelPokotskyi::Complex::Complex():
    real(0), imaginary(0) {
}

// two args constructor takes double values
MichaelPokotskyi::Complex::Complex(double real, double imaginary):
    real(real), imaginary(imaginary) {
}

// overloading + operator
MichaelPokotskyi::Complex
MichaelPokotskyi::Complex::operator+(const Complex &number) const {
    return Complex(real + number.real, imaginary + number.imaginary);
}

// overloading - operator
MichaelPokotskyi::Complex
MichaelPokotskyi::Complex::operator-(const Complex &number) const {
    return Complex(real - number.real, imaginary - number.imaginary);
}

// overloading != operator
bool
MichaelPokotskyi::Complex::operator !=(const Complex &number) {
    if (real != number.real || imaginary != number.imaginary) {return true;}
    else {return false;}
}

// overloading == operator
bool
MichaelPokotskyi::Complex::operator ==(const Complex &number){
    if (real == number.real && imaginary == number.imaginary) {return true;}
    else {return false;}
}

// overloading >> operator
istream& MichaelPokotskyi::operator>>(istream &in, Complex &number) {
    double real, imaginary;
    char i;
    in >> real >> imaginary >> i;
    number.initialComplex(real, imaginary);
    return in;
}

// overloading << operator
ostream& MichaelPokotskyi::operator<<(ostream &out, const Complex &number) {
    out << number.real;
    if (number.imaginary >= 0) { out << "+"; }
    out << number.imaginary << "i\n";
    return out;
}

// initializing Complex object for >> operator overloading
void MichaelPokotskyi::Complex::initialComplex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}


