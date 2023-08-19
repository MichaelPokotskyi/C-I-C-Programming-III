//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Array.h
// Win10, Visual C++ 2022, ISO C17
//
// Class Array implementation

// include guard
#ifndef ARRAY_H
#define ARRAY_H

#include <stdexcept>
using std::invalid_argument;

// defined namespace
namespace MichaelPokotskyi {
    // non-type parameters
    template<typename ElemType, int SIZE>
    class Array {
    public:
        // default constructor
        Array() {

        }
        // copy constructor
        Array(ElemType source[SIZE])
            : ElemType(ElemType), elements(source) {
        }
        // destructor
        ~Array() {
        }
        // = overloading
        Array<ElemType, SIZE> operator=(const ElemType source[SIZE]) const {
            ElemType Elem[SIZE];
            for (int i = 0; i < SIZE; i++) {
                Elem[i] = source[i];
            }
            return Elem;
        }
        // == overloading
        bool operator==(const Array<ElemType, SIZE> other) const {
            for (int i = 0; i < SIZE; i++) {
                if (this->elements[i] != other[i]) { break; return false; }
            }
            return true;
        }
        // != overloading
        bool operator!=(const Array<ElemType, SIZE> other) const {
            for (int i = 0; i < SIZE; i++) {
                if (this->elements[i] == other[i]) { break; return false; }
            }
            return true;
        }
        //[] overloading LValue
        ElemType &operator[](int index) {
            if ((index < 0) || (index >= SIZE)) {
                throw invalid_argument("Subscript index is out of range!");
            }
            return this->elements[index];
        }
        //[] overloading RValue
        ElemType operator[](int index) const {
            if ((index < 0) || (index >= SIZE)) {
                throw invalid_argument("Subscript index is out of range!");
            }
            return this->elements[index];
        }
    private:
        ElemType elements[SIZE];
    };
}

#endif
