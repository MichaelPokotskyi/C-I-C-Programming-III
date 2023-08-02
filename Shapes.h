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
        void virtual display();
    };

    class TwoDimentionalShape : public Shape {
    public:
        virtual double getArea();
    };

    class ThreeDimantionalShape : public Shape {
    public:
        virtual double getSurfaceArea();
        virtual double getVolume();
    };

    class Circle : public TwoDimentionalShape {
    public:
        void Circle(double radius);
        void virtual display();
        virtual double getArea();
    private:
        double radius;
    };

    class Square : public TwoDimentionalShape {
    public:
        void Square(double lenghtOfSide);
        void virtual display();
        virtual double getArea();
    private:
        double lengthOfSide;
    };

    class Sphere : public ThreeDimantionalShape {
    public:
        void Sphere(double radius);
        void virtual display();
        virtual double getSurfaceArea();
        virtual double getVolume();

    private:
        double radius;
    };

    class Cube : public ThreeDimantionalShape {
    public:
        void virtual display();
        virtual double getSurfaceArea();
        virtual double getVolume();
    private:
        double lengthOfSide;
    };
}
#endif