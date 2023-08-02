//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Shapes.cpp
// Win10, Visual C++ 2022, ISO C17
// 
// Shapes functions implementation.

#include <iostream>
#include "Shapes.h"

// object constructor section:
// circle constructor inplementation
MichaelPokotskyi::Circle::Circle(double radius) :
radius(radius){
}
// square constructor implementation
MichaelPokotskyi::Square::Square(double lengthOfSide) :
    lengthOfSide(lengthOfSide) {
}
// sphere constructor implementation
MichaelPokotskyi::Sphere::Sphere(double radius) :
    radius(radius){
}
// cube constructor implementation
MichaelPokotskyi::Cube::Cube(double lengthOfSide) :
    lengthOfSide(lengthOfSide){
}

