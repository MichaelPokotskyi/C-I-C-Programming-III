//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// HW6.cpp
// Win10, Visual C++ 2022, ISO C17
//
// Tests for Array class implementation.


#include "Array.h"
#include <iostream>
#include <stdexcept>

using std::cerr;
using std::cout;
using std::invalid_argument;
using namespace MichaelPokotskyi;
const int SIZE = 5;


int main() {
    Array<int, SIZE> arrayOfFiveInts;

    // Modifying by L-value operator
    for (int i = 0; i < SIZE; i++) {
        arrayOfFiveInts[i] = i;
    }




}