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
//* VendingMachine.cpp
//* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
//*/
//#include "VendingMachine.h"
//
//Project1::VendingMachine::VendingMachine(
//    ostream &statusPanelStream, const char *productNames[NUM_PRODUCT_RACKS], unsigned productPrices[NUM_PRODUCT_RACKS])
//    : statusPanel(statusPanelStream), deliveryChute(statusPanel), numCoins(0), unspentMoneyCents(0) {
//    // Constructor.  Creates an empty vending machine (containing no products or coins).
//    for (size_t i = 0; i < NUM_PRODUCT_RACKS; ++i) {
//        Project1::VendingMachine::productRacks[i] = new ProductRack(Project1::VendingMachine::statusPanel, productNames[i],
//        Project1::VendingMachine::deliveryChute, productPrices[i]);
//        Project1::VendingMachine::productButtons[i] = new ProductButton(*Project1::VendingMachine::productRacks[i]);
//    }
//}
//
//Project1::VendingMachine::~VendingMachine() {
//    // Destructor.  Destroys the vending machine.
//    for (size_t i = 0; i < NUM_PRODUCT_RACKS; ++i) {
//        delete Project1::VendingMachine::productRacks[i];
//        delete Project1::VendingMachine::productButtons[i];
//    }
//    for (size_t i = 0; i < Project1::VendingMachine::numCoins; ++i) {
//        delete Project1::VendingMachine::coinBox[i];
//    }
//}
//
//bool
//Project1::VendingMachine::insertCoin(Coin *pCoin) {
//    // Inserts a coin into the vending machine coin slot, checking for incorrect coin.
//    if (pCoin->getDenomination() == Coin::COINTYPE_WOODEN_NICKEL) {
//        statusPanel.displayMessage(StatusPanel::MESSAGECODE_BAD_COIN);
//        return false;
//    }
//    else {
//        Project1::VendingMachine::coinBox[Project1::VendingMachine::numCoins++] = pCoin;
//        Project1::VendingMachine::unspentMoneyCents += pCoin->getValueCents();
//        return true;
//    }
//}
//
//bool
//Project1::VendingMachine::pressButton(int button) {
//    // Presses the given button, checking if wrong button pressed and money amount.
//    if (button < 0 or button >= NUM_PRODUCT_RACKS) {
//        statusPanel.displayMessage(StatusPanel::MESSAGECODE_WRONG_BUTTON);
//        return false;
//    }
//    ProductButton &productButton = *productButtons[button];
//    if (unspentMoneyCents < productButton.getProductPriceCents()) {
//        statusPanel.displayMessage(StatusPanel::MESSAGECODE_INSUFFICIENT_MONEY);
//        return false;
//    }
//    return productButton.press();
//}
//
//Project1::Product*
//Project1::VendingMachine::retrieveProduct() {
//    // Retrieves the product currently sitting in the delivery chute.
//    return Project1::VendingMachine::deliveryChute.retrieveProduct();
//}
//
//bool
//Project1::VendingMachine::addProduct(Product *pProduct) {
//    // Add the product to the vending machine.
//    for (size_t i = 0; i < NUM_PRODUCT_RACKS; ++i) {
//        Project1::ProductRack &productRack = *productRacks[i];
//        if (productRack.isCompatibleProduct(pProduct->getName())) {
//            return productRack.addProduct(pProduct);
//        }
//    }
//    statusPanel.displayMessage(StatusPanel::MESSAGECODE_NO_RACK_FOR_PRODUCT);
//    return false;
//}
//
//unsigned
//Project1::VendingMachine::getProductCount(const char *productName) const {
//    // Return the number of products with the given name currently in the vending machine.
//    unsigned count = 0;
//    for (size_t i = 0; i < NUM_PRODUCT_RACKS; ++i) {
//        Project1::ProductRack &productRack = *Project1::VendingMachine::productRacks[i];
//        if (productRack.isCompatibleProduct(productName)) {
//            count += productRack.getNumProductsInRack();
//        }
//    }
//    return count;
//}
//
//unsigned
//Project1::VendingMachine::countTill() const {
//    // Return the sum of the values of all coins currently in the vending machine.
//    unsigned count = 0;
//    for (size_t i = 0; i < Project1::VendingMachine::numCoins; ++i) {
//        count += Project1::VendingMachine::coinBox[i]->getValueCents();
//    }
//    return count;
//}
//
//unsigned
//Project1::VendingMachine::getNumCoinsInCoinBox() const {
//    // Return the number of coins currently in the vending machine.
//    return Project1::VendingMachine::numCoins;
//}
