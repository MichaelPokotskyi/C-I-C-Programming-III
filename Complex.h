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
        // constructor prototypes
        Complex();
        Complex(double real, double imaginary);
         
        // member operators overloading functions prototypes
        Complex operator+(const Complex &number) const; // +
        Complex operator-(const Complex &number) const; // -
        bool operator!=(const Complex &number); // !=
        bool operator==(const Complex &number); // ==

        // in&out streams friend overloading functions prototypes
        friend istream &operator>>(istream &in, Complex &value);
        friend ostream &operator<<(ostream &out, const Complex &value);

    private:
        // initialization for overloading insertion stream
        void initialComplex(double real, double imaginary);
        // class fields
        double real;
        double imaginary;
    };
}
#endif
