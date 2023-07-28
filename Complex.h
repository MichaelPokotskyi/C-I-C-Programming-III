//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Complex.h
// Win10, Visual C++ 2022, ISO C17
//
// Complex function prototypes and class members.

// include guard
#ifndef COMPLEX_H
#define COMPLEX_H

using std::ostream;
using std::istream;

// defined namespace
namespace MichaelPokotskyi
{
    class Complex {
    public:
        Complex();
        Complex(double real, double imaginary);
         

        // member overloading functions prototypes
        Complex operator+(const Complex &number) const;
        Complex operator-(const Complex &number) const;
        bool operator!=(const Complex& number);
        bool operator==(const Complex& number);

        // friend overloading functions prototypes
        friend istream& operator>>(istream& in, Complex& value);
        friend ostream& operator<<(ostream& out, const Complex& value);
        
        void display();
    private:
        void initialComplex(double real, double imaginary);
        double real;
        double imaginary;
    };
}
#endif

