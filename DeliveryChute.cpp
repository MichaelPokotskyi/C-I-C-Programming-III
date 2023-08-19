///*
//* Michael Pokotskyi U09662201
//* pokotskyi.m@gmail.com
//* C I C++ Programming III CSE-40477
//* Raymond Mitchell III
//* Win10, Visual C++ 2022, ISO C17
//* 
//* Vending Machine Project
//* CSE-40477
//*
//* DeliveryChute.cpp
//* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
//*/
//#include "DeliveryChute.h"
//
//Project1::DeliveryChute::DeliveryChute(StatusPanel &statusPanel)
//    : statusPanel(statusPanel),
//    pProduct(0)
//{
//    // Constructor. Creates an empty delivery chute.
//}
//
//Project1::DeliveryChute::~DeliveryChute()
//{
//    // Destructor. Destroys the delivery chute.
//}
//
//bool
//Project1::DeliveryChute::insertProduct(Product *pProduct)
//{
//    /*Places the given product in the chute if the chute is currently
//    empty.  If the chute is not empty MESSAGECODE_CHUTE_FULL will
//    be output to the status panel.  Returns whether the product was
//    successfully inserted into the chute.*/
//
//    if (containsProduct()) { 
//        statusPanel.displayMessage(statusPanel.MESSAGECODE_CHUTE_FULL);
//        return false;
//    }
//    else {
//        Project1::DeliveryChute::pProduct = pProduct;
//        return true;
//    }
//}
//
//Project1::Product *
//Project1::DeliveryChute::retrieveProduct()
//{
//    // Returns the product currently in the chute.
//    Product *newProduct = pProduct;
//    pProduct = NULL;
//    return newProduct;
//}
//
//bool
//Project1::DeliveryChute::containsProduct() const
//{
//    // Returns whether the chute currently contains a product waiting to be retrieved.
//    if (Project1::DeliveryChute::pProduct != nullptr) { return true; }
//    return false;
//}