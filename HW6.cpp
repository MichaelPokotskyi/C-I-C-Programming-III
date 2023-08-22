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


    // Modifying by LValue operator
    for (int i = 0; i < SIZE; i++) {
        arrayOfFiveInts[i] = i;
    }

    // RValue subscript output
    cout << "RValue subscript output: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arrayOfFiveInts[i];
        i != SIZE - 1 ? cout << ", " : cout << ". \n";
    }

    // not equal to initial one
    for (int i = 0; i < SIZE; i++) {
        anotherArrayOfFiveInts[i] = i + 1;
    }

    // = copy constructor test
    copyArrayOfFiveInts = arrayOfFiveInts;
    cout << "Testing copy constructor: ";
    for (int i = 0; i < SIZE; i++) {
        cout << copyArrayOfFiveInts[i];
        i != SIZE - 1 ? cout << ", " : cout << ". \n";
    }

    // == operator test
    cout << "Does the copyArrayOfFiveInts are == arrayOfFiveInts? ";
    if (copyArrayOfFiveInts == arrayOfFiveInts) { cout << "TRUE!\n"; }
    else { cout << "FALSE!\n"; }
    
    cout << "Does the copyArrayOfFiveInts are == anotherArrayOfFiveInts? ";
     if (copyArrayOfFiveInts == anotherArrayOfFiveInts) { cout << "TRUE!\n"; }
    else { cout << "FALSE!\n"; }

    // != operator test
    cout << "Does the copyArrayOfFiveInts are != arrayOfFiveInts? ";
    if (copyArrayOfFiveInts != arrayOfFiveInts) { cout << "TRUE!\n"; }
    else { cout << "FALSE!\n"; }
    cout << "Does the copyArrayOfFiveInts are != anotherArrayOfFiveInts? ";
    if (copyArrayOfFiveInts != anotherArrayOfFiveInts) { cout << "TRUE!\n"; }
    else { cout << "FALSE!\n"; }

    // index access < 0 assign test
    try {
        arrayOfFiveInts[-1] = 10;
    }
    catch (invalid_argument &ex) {
        cerr << ex.what() << "\n";
    }

    // index access < 0 output test
    try {
        cout << arrayOfFiveInts[-1] << "\n";
    }
    catch (invalid_argument &ex) {
        cerr << ex.what() << "\n";
    }

    // index access >= SIZE output test
    try {
        cout << arrayOfFiveInts[SIZE] << "\n";
    }
    catch (invalid_argument &ex) {
        cerr << ex.what() << "\n";
    }

    // index access > 0 assign test
    try {
        arrayOfFiveInts[SIZE] = 10;
    }
    catch (invalid_argument& ex) {
        cerr << ex.what() << "\n";
    }
}