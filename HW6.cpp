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
    Array<int, SIZE> copyArrayOfFiveInts;
    Array<int, SIZE> anotherArrayOfFiveInts;

    // Modifying by L-value operator
    for (int i = 0; i < SIZE; i++) {
        arrayOfFiveInts[i] = i;
    }

    // not equal to initial one
    for (int i = 0; i < SIZE; i++) {
        anotherArrayOfFiveInts[i] = i + 1;
    }

    // = copy constructor
    copyArrayOfFiveInts = arrayOfFiveInts;
    cout << "Testing copy constructor: ";
    for (int i = 0; i < SIZE; i++) {
        cout << copyArrayOfFiveInts[i];
        if (i != (SIZE - 1)) { cout << ", "; }
    }
    cout << "\n";

    // ==
    cout << "Does the copyArrayOfFiveInts are == arrayOfFiveInts? ";
    if (copyArrayOfFiveInts == arrayOfFiveInts) { cout << "TRUE!"; }
    else { cout << "FALSE!"; }
    cout << "\n";
    cout << "Does the copyArrayOfFiveInts are == anotherArrayOfFiveInts? ";
     if (copyArrayOfFiveInts == anotherArrayOfFiveInts) { cout << "TRUE!"; }
    else { cout << "FALSE!"; }
    cout << "\n";

    // !=
    cout << "Does the copyArrayOfFiveInts are != arrayOfFiveInts? ";
    if (copyArrayOfFiveInts != arrayOfFiveInts) { cout << "TRUE!"; }
    else { cout << "FALSE!"; }
    cout << "\n";
    cout << "Does the copyArrayOfFiveInts are != anotherArrayOfFiveInts? ";
    if (copyArrayOfFiveInts != anotherArrayOfFiveInts) { cout << "TRUE!"; }
    else { cout << "FALSE!"; }
    cout << "\n";
}