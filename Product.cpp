/*
* Michael Pokotskyi U09662201
* pokotskyi.m@gmail.com
* C I C++ Programming III CSE-40477
* Raymond Mitchell III
* Win10, Visual C++ 2022, ISO C17
* 
* Vending Machine Project
* CSE-40477
*
* Product.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcpy;

#include "Product.h"

Project1::Product::Product(const char *brand, const char *name,
    const char *size)
{
    /*Creates a product of the given brand, name, and
    size.  The name identifies the product; two products with the
    same name are considered to be the same product type.*/
    strcpy(Project1::Product::brand, brand);
    strcpy(Project1::Product::name, name);
    strcpy(Project1::Product::size, size);
}

const char *
Project1::Product::getBrand() const
{
    // Get and set the product's brand.
    return Project1::Product::brand;
}

void
Project1::Product::setBrand(const char *value)
{
    // Get and set the product's brand.
    strcpy(Project1::Product::brand, value);
}

const char *
Project1::Product::getName() const
{
    // Get and set the product's name.
    return Project1::Product::name;
}

void
Project1::Product::setName(const char *value)
{
    // Get and set the product's name.
    strcpy(Project1::Product::name, value);
}

const char *
Project1::Product::getSize() const
{
    // Get and set the product's size.
    return Project1::Product::size;
}

void
Project1::Product::setSize(const char *value)
{
    // Get and set the product's size.
    strcpy(Project1::Product::size, value);
}
