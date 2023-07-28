//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// HW4.cpp
// Win10, Visual C++ 2022, ISO C17
//
// Tests for Complex class implementation.

// TODO LIST
// comments
// TESTS incl comparison == !=
// switch/case to output
// check func CONSTness

#include <iostream>
#include "Complex.h"

using std::cin;
using std::cout;
using std::endl;
using namespace MichaelPokotskyi;

int main() {
    Complex p1(0, 0);
    // p1.display();
    cout << p1 << endl;
    Complex p2(2, 4);
    //p2.display();
    cout << p2 << endl;
    Complex p3(-2, -4);
    //p3.display();
    cout << p3 << endl;
    p1 = p2 - p3;
    //p1.display();
    cout << p1 << endl;

    Complex tt;
    cin >> tt;
    cout << tt;
}
