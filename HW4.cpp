////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming III CSE-40477
//// Raymond Mitchell III
//// HW4.cpp
//// Win10, Visual C++ 2022, ISO C17
////
//// Tests for Complex class implementation.
//
//#include <iostream>
//#include "Complex.h"
//
//using std::cin;
//using std::cout;
//using std::endl;
//using std::boolalpha;
//using namespace MichaelPokotskyi;
//
//int main() {
//    cout << "Object creating testing section:\n" <<
//        "********************************\n";
//    cout << "Testing no args constructor -> Complex empty;\n";
//    Complex empty;
//    cout << "Testing two args constructor -> Complex p1(4, -5)\n";
//    Complex p1(4, -5);
//    cout << "Testing two args constructor -> Complex p2(-1, 1)\n";
//    Complex p2(-1, 1);
//    cout << "Testing two args constructor -> Complex p3(-5, -5)\n";
//    Complex p3(-5, -5);
//    cout << "Testing two args constructor -> Complex p4(5, 5)\n";
//    Complex p4(5, 5);
//    cout << "Testing two args constructor -> Complex p4(0, 0)\n";
//    Complex p5(0, 0);
//    cout << endl;
//    cout << "Testing object Complex empty value: " << empty;
//    cout << "Testing object Complex p1 value: " << p1;
//    cout << "Testing object Complex p2 value: " << p2;
//    cout << "Testing object Complex p3 value: " << p3;
//    cout << "Testing object Complex p4 value: " << p4;
//    cout << "Testing object Complex p5 value: " << p5;
//    cout << endl;
//    cout << "Object arithmetic testing section:\n" <<
//        "********************************\n";
//    cout << "Testing minus sign /empty(0, 0) - p1(4, -5)/ = " << empty - p1;
//    cout << "Testing minus sign /p4(5, 5) - p5(0, 0)/ = " << p4 - p5;
//    cout << "Testing plus sign /p4(5, 5) + p3(-5, -5)/ = " << p4 + p3;
//    cout << "Testing plus sign /p1(4, -5) + p2(-1, 1)/ = " << p1 + p2;
//    cout << endl;
//    cout << "Keyboard input testing section, >> operator:\n" <<
//        "********************************\n";
//    cout << "Enter complex number in /real, imaginary, i/ form -> Complex input: ";
//    Complex input; cin >> input;
//    cout << "Testing object Complex input value: " << input;
//    cout << "Enter complex number in /real, imaginary, i/ form -> Complex input1: ";
//    Complex input1; cin >> input1;
//    cout << "Testing object Complex input1 value: " << input1;
//    cout << "\nEqual/not equal testing section:\n" <<
//        "********************************\n";
//    cout << "Is object p5(0, 0) == empty(0, 0)? " << boolalpha << (p5 == empty) << "\n";
//    cout << "Is object p5(0, 0) != empty(0, 0)? " << boolalpha << (p5 != empty) << "\n";
//    cout << "Is object p1(4, -5) == p3(-5, -5)? " << boolalpha << (p1 == p3) << "\n";
//    cout << "Is object p1(4, -5) != p3(-5, -5)? " << boolalpha << (p1 != p3) << "\n";
//    cout << "\nOperator << testing section:\n" <<
//        "********************************\n";
//    cout << "Operator << was tested throughout all test outputs.\n";
//}
