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
* ProductRack.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcmp;

#include "ProductRack.h"

Project1::ProductRack::ProductRack(
    StatusPanel &statusPanel,
    const char *allowedProductName,
    DeliveryChute &deliveryChute,
    unsigned productPriceCents)
    : statusPanel(statusPanel),
        deliveryChute(deliveryChute),
        productCount(0),
        productPriceCents(productPriceCents) {
    // Constructor.  Creates a product rack to hold products with the allowed product name.
    strncpy(Project1::ProductRack::allowedProductName,
        allowedProductName, Project1::Product::MAX_NAME_LENGTH);
}

Project1::ProductRack::~ProductRack() {
    // Destructor.   Destroys the product rack.
    for (size_t i = 0; i < Project1::ProductRack::productCount; i++) {
        delete Project1::ProductRack::products[i];
    }
}

bool
Project1::ProductRack::isCompatibleProduct(const char *productName) const {
    // Returns whether the given product name matches the name of products allowed to be stored in this rack.
    if (!strcmp(productName, Project1::ProductRack::allowedProductName)) { return true; }
    else {
        return false;
    }
}

bool
Project1::ProductRack::isFull() const {
    // Return whethers this rack contains a number of products equal to MAX_PRODUCTS.
    if (Project1::ProductRack::productCount < Project1::ProductRack::MAX_PRODUCTS) { return false; }
    else {
        return true;
    }
}

bool
Project1::ProductRack::isEmpty() const {
    // Returns whether this rack contains zero products.
    if (Project1::ProductRack::productCount == 0) { return true; }
    else {
        return false;
    }
}

bool
Project1::ProductRack::addProduct(Product *pProduct) {
    // Adds the given product to the rack if the rack is not full and
    // the product name matches the allowed product name of this rack.
    if (isFull()) {
        statusPanel.displayMessage(StatusPanel::MESSAGECODE_RACK_IS_FULL);
        return false;
    }
    else if (not isCompatibleProduct(pProduct->getName())) {
        statusPanel.displayMessage(StatusPanel::MESSAGECODE_PRODUCT_DOES_NOT_MATCH_PRODUCT_RACK);
        return false;
    }
    else {
        Project1::ProductRack::products[Project1::ProductRack::productCount++] = pProduct;
        return true;
    }
}

bool
Project1::ProductRack::deliverProduct()
{
    // Insert the next product from the rack into the delivery chute if
    // the delivery chute is empty and the rack is not empty.
    if (isEmpty()) {
        statusPanel.displayMessage(StatusPanel::MESSAGECODE_SOLD_OUT);
        return false;
    } 
    else if (Project1::ProductRack::deliveryChute.insertProduct(Project1::ProductRack::products[Project1::ProductRack::productCount - 1])) {
        --Project1::ProductRack::productCount;
        return true;
    }
    else {
        return false;
    }
}

unsigned
Project1::ProductRack::getNumProductsInRack() const {
    // Return the number of products in the rack.
    return Project1::ProductRack::productCount;
}

unsigned
Project1::ProductRack::getProductPriceCents() const {
    // Return the price (in cents) of the products contained by this rack.
    return Project1::ProductRack::productPriceCents;
}
