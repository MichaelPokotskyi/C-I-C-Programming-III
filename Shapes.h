//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Shapes.h
// Win10, Visual C++ 2022, ISO C17
//
// Shapes class definitions and function prototypes.

// include guard
#ifndef SHAPES_H
#define SHAPES_H

// defined namespace
namespace MichaelPokotskyi {
    class Shape {
    public:
        virtual void display() = 0;
    };

    class TwoDimentionalShape : public Shape {
    public:
        virtual double getArea() = 0;
    };

    class ThreeDimantionalShape : public Shape {
    public:
        virtual double getSurfaceArea() const = 0;
        virtual double getVolume() const = 0;
    };

    class Circle : public TwoDimentionalShape {
    public:
        Circle(double radius);
        virtual void display();
        virtual double getArea();
    private:
        double radius;
    };

    class Square : public TwoDimentionalShape {
    public:
        Square(double lenghtOfSide);
        virtual void display();
        virtual double getArea();
    private:
        double lengthOfSide;
    };

    class Sphere : public ThreeDimantionalShape {
    public:
        Sphere(double radius);
        virtual void display();
        virtual double getSurfaceArea();
        virtual double getVolume();
    private:
        double radius;
    };

    class Cube : public ThreeDimantionalShape {
    public:
        Cube(double lengthOfSide);
        virtual void display();
        virtual double getSurfaceArea();
        virtual double getVolume();
    private:
        double lengthOfSide;
    };
}
#endif