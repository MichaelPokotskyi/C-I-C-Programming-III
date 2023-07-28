//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// HW4.cpp
// Win10, Visual C++ 2022, ISO C17
//
// Tests for Complex class implementation.

#include <iostream>
#include "Complex.h"

using std::cout;
using namespace MichaelPokotskyi;

int main() {
    Complex p1(0, 0);
    p1.display();
    Complex p2(2, 4);
    p2.display();
    Complex p3(-2, -4);
    p3.display();

    p1 = p2 - p3;
    p1.display();
}