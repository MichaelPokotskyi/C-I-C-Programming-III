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
#include <cmath>
#include "Shapes.h"

using std::cout;
const double PI = 3.1415926535897932385;

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
MichaelPokotskyi::Circle::display() {
    cout << "Circle with radus " << MichaelPokotskyi::Circle::radius << 
        " has area " << getArea() << "\n";
}
// square class
void
MichaelPokotskyi::Square::display() {
    cout << "Square with length of side " << MichaelPokotskyi::Square::lengthOfSide << 
        " has area " << getArea() << "\n";
}
// sphere class
void
MichaelPokotskyi::Sphere::display() {
    cout << "Sphere with radius " << MichaelPokotskyi::Sphere::radius <<
        " has surface area " << getSurfaceArea() << "\n";
}
// cube class
void
MichaelPokotskyi::Cube::display(){
}

// specific classes functions section
// circle class
// A = ?r²
double
MichaelPokotskyi::Circle::getArea() {
    return pow (MichaelPokotskyi::Circle::radius, 2) * PI;
}

// square class
// A = a²
double
MichaelPokotskyi::Square::getArea() {
    return MichaelPokotskyi::Square::lengthOfSide * MichaelPokotskyi::Square::lengthOfSide;
}

// sphere class
// SA = 4?r²
double 
MichaelPokotskyi::Sphere::getSurfaceArea() {
    return 4 * PI * pow(MichaelPokotskyi::Sphere::radius, 2);
}
double 
// V = 4/3?r³
MichaelPokotskyi::Sphere::getVolume() {
    return (4 / 3) * PI * pow(MichaelPokotskyi::Sphere::radius, 3);
}

// cube class
// SA = 6a²
double
MichaelPokotskyi::Cube::getSurfaceArea() {
    return 6 * pow(MichaelPokotskyi::Cube::lengthOfSide, 2);
}
// V = s³
double 
MichaelPokotskyi::Cube::getVolume() {
    return pow(MichaelPokotskyi::Cube::lengthOfSide, 3);
}