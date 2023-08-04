////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming III CSE-40477
//// Raymond Mitchell III
//// Shapes.h
//// Win10, Visual C++ 2022, ISO C17
////
//// Shapes class definitions and function prototypes.
//
//// include guard
//#ifndef SHAPES_H
//#define SHAPES_H
//
//// defined namespace
//namespace MichaelPokotskyi {
//    // Main parent class
//    class Shape {
//    public:
//        virtual void display() const = 0;
//    };
//    // Derived class for 2D
//    class TwoDimentionalShape : public Shape {
//    public:
//        virtual double getArea() const = 0;
//    };
//    // Derived class for 3D
//    class ThreeDimentionalShape : public Shape {
//    public:
//        virtual double getSurfaceArea() const = 0;
//        virtual double getVolume() const = 0;
//    };
//    // concrete 2D circle shape class
//    class Circle : public TwoDimentionalShape {
//    public:
//        Circle(double radius);
//        virtual void display() const;
//        virtual double getArea() const;
//    private:
//        double radius;
//    };
//    // concrete 2D square shape class
//    class Square : public TwoDimentionalShape {
//    public:
//        Square(double lenghtOfSide);
//        virtual void display() const;
//        virtual double getArea() const;
//    private:
//        double lengthOfSide;
//    };
//    // concrete 3D sphere shape class
//    class Sphere : public ThreeDimentionalShape {
//    public:
//        Sphere(double radius);
//        virtual void display() const;
//        virtual double getSurfaceArea() const;
//        virtual double getVolume() const;
//    private:
//        double radius;
//    };
//    // concrete 3D cube shape class
//    class Cube : public ThreeDimentionalShape {
//    public:
//        Cube(double lengthOfSide);
//        virtual void display() const;
//        virtual double getSurfaceArea() const;
//        virtual double getVolume() const;
//    private:
//        double lengthOfSide;
//    };
//}
//#endif
