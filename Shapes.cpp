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
MichaelPokotskyi::Circle::Circle(double radius):
    radius(radius){
}
// square constructor implementation
MichaelPokotskyi::Square::Square(double lengthOfSide):
    lengthOfSide(lengthOfSide) {
}
// sphere constructor implementation
MichaelPokotskyi::Sphere::Sphere(double radius):
    radius(radius){
}
// cube constructor implementation
MichaelPokotskyi::Cube::Cube(double lengthOfSide):
    lengthOfSide(lengthOfSide){
}

// display function overriding implementation section
// circle class
void
MichaelPokotskyi::Circle::display() const {
}
// square class
void
MichaelPokotskyi::Square::display() const {
}
// sphere class
void
MichaelPokotskyi::Sphere::display() const {
}
// cube class
void
MichaelPokotskyi::Cube::display() const {
}