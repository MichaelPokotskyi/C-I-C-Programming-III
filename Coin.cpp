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
    switch (denomination) 
    {
        case COINTYPE_PENNY:
        this->denomination = CoinType::COINTYPE_PENNY;
    

        break;
        default:
        COINTYPE_WOODEN_NICKEL:
            this->denomination = COINTYPE_WOODEN_NICKEL;

        /*
        COINTYPE_WOODEN_NICKEL = 0,
            COINTYPE_PENNY = 1,
            COINTYPE_NICKEL = 5,
            COINTYPE_DIME = 10,
            COINTYPE_QUARTER = 25,
            COINTYPE_HALF_DOLLAR = 50,
            COINTYPE_DOLLAR = 100
        */

    }
    // TODO: Implement
    
}

Project1::Coin::CoinType
Project1::Coin::getDenomination() const
{
    // TODO: Implement
    return CoinType::COINTYPE_DIME;
    }

unsigned
Project1::Coin::getValueCents() const
{
    // TODO: Implement
    return 0;
}
