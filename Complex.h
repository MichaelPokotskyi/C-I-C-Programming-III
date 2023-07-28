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

// defined namespace
namespace MichaelPokotskyi
{
    class Complex {
    public:
        Complex();
        Complex(double real, double imaginary);

    private:
        double real;
        double imaginary;

        Complex complexInit(double real, double imaginary);

    };
}
#endif

