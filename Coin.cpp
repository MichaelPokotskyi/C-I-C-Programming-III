/*
* Vending Machine Project
* CSE-40477
*
* Coin.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "Coin.h"

Project1::Coin::Coin(CoinType denomination)
    : denomination(denomination)
{
    // Constructor. Initializes the coin's denomination to the given type.
}

Project1::Coin::CoinType
Project1::Coin::getDenomination() const {
    // Returns the type of this coin.
    return Project1::Coin::denomination;
    }

unsigned
Project1::Coin::getValueCents() const
{
    // Returns the value of the coin in cents.
    return Project1::Coin::denomination;
}
