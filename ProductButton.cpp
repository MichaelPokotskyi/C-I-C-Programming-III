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
* ProductButton.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcpy;

#include "ProductButton.h"

Project1::ProductButton::ProductButton(ProductRack &productRack)
    : productRack(productRack)
{
    // Creates a product button associated with the given product rack.
}

bool
Project1::ProductButton::press()
{
    // TODO: Implement
    return false;
}

unsigned
Project1::ProductButton::getProductPriceCents() const
{
    // TODO: Implement
    return 0;
}
