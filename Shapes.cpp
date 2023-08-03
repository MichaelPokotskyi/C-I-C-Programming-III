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
MichaelPokotskyi::Circle::display() const {
    cout << "Circle with radus " << MichaelPokotskyi::Circle::radius << 
        " has area " << getArea() << "\n";
}
// square class
void
MichaelPokotskyi::Square::display() const {
    cout << "Square with length of side " << MichaelPokotskyi::Square::lengthOfSide << 
        " has area " << getArea() << "\n";
}
// sphere class
void
MichaelPokotskyi::Sphere::display() const {
    cout << "Sphere with radius " << MichaelPokotskyi::Sphere::radius <<
        " has surface area " << getSurfaceArea() << " and volume " << getVolume() << "\n";
}
// cube class
void
MichaelPokotskyi::Cube::display() const {
    cout << "Cube with lenght side " << MichaelPokotskyi::Cube::lengthOfSide <<
        " has surface area " << getSurfaceArea() << " and volume " << getVolume() << "\n";
}

// specific classes functions section
// circle class
// A = π^2
double
MichaelPokotskyi::Circle::getArea() const {
    return pow (MichaelPokotskyi::Circle::radius, 2) * PI;
}

// square class
// A = a^2
double
MichaelPokotskyi::Square::getArea() const {
    return pow(MichaelPokotskyi::Square::lengthOfSide, 2);
}

// sphere class
// SA = 4πr^3
double 
MichaelPokotskyi::Sphere::getSurfaceArea() const {
    return 4. * PI * pow(MichaelPokotskyi::Sphere::radius, 2);
}
double 
// V = 4/3πr^3
MichaelPokotskyi::Sphere::getVolume() const {
    return (4. / 3.) * PI * pow(MichaelPokotskyi::Sphere::radius, 3);
}

// cube class
// SA = 6a^2
double
MichaelPokotskyi::Cube::getSurfaceArea() const {
    return 6. * pow(MichaelPokotskyi::Cube::lengthOfSide, 2);
}
// V = s^3
double 
MichaelPokotskyi::Cube::getVolume() const {
    return pow(MichaelPokotskyi::Cube::lengthOfSide, 3);
}
