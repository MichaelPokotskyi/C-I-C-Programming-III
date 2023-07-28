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

MichaelPokotskyi::Complex::Complex():
    real(0), imaginary(0) {
}

MichaelPokotskyi::Complex::Complex(double real, double imaginary):
    real(real), imaginary(imaginary) {
}

MichaelPokotskyi::Complex
MichaelPokotskyi::Complex::operator+(const Complex &number) const {
    return Complex(real + number.real, imaginary + number.imaginary);
}

MichaelPokotskyi::Complex
MichaelPokotskyi::Complex::operator-(const Complex& number) const {
    return Complex(real - number.real, imaginary - number.imaginary);
}

bool
MichaelPokotskyi::Complex::operator!=(const Complex& number){
    if (real != number.real || imaginary != number.imaginary) {return true;}
    else {return false;}
}

bool
MichaelPokotskyi::Complex::operator==(const Complex& number){
    if (real == number.real && imaginary == number.imaginary) {return true;}
    else {return false;}
}

ostream& MichaelPokotskyi::operator<<(ostream& out, const Complex& value) {
 
}

istream& MichaelPokotskyi::operator>>(istream& in, Complex& value) {

}

void
MichaelPokotskyi::Complex::display() {
    //if (real > 0) { cout << "+"; }
    cout << real;
    if (imaginary > 0) { cout << "+"; }
    cout << imaginary << "i\n";
}


