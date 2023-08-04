////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming III CSE-40477
//// Raymond Mitchell III
//// HW5.cpp
//// Win10, Visual C++ 2022, ISO C17
////
//// Tests for Shapes class implementation.
//
//#include <iostream>
//#include "Shapes.h"
//
//using namespace MichaelPokotskyi;
//
//int main() {
//    // Four shape pointers from concrete classes in heap
//    Circle *pC = new Circle(2);
//    Square *pS = new Square(3);
//    Sphere *spP = new Sphere(4);
//    Cube *pCu = new Cube(5);
//    // Array of Shapes fulfilled pointers
//    Shape *ar[4] = {pC, pS, spP, pCu};
//    // Iterating array
//    for (int i = 0; i < 4; ++i) {
//        ar[i]->display();
//        delete ar[i];
//    }
//}