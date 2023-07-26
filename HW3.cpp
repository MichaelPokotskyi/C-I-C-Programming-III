//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// HW3.cpp
// Win10, Visual C++ 2022, ISO C17
//
// Tests for SavingsAccount class implementation.


#include <iostream>
#include "SavingsAccount.h"

using std::cout;
using std::endl;
using namespace MichaelPokotsky;

int main() {
    cout << "Object creating testing section:\n" <<
    "**********************************************************************************************\n";
    cout << "Creating SavingsAccount with initial balance 100$\n"; 
    SavingsAccount p1(100);
    cout << "Creating SavingsAccount with initial balance -100$\n";
    SavingsAccount p2(-100);
    cout << "Creating SavingsAccount with initial balance 200$\n";
    SavingsAccount p3(200);
    cout << endl;
    cout << "Incorrect(negative) interest rate section:\n" <<
    "**********************************************************************************************\n";
    cout << "Set up interest annual interest rate to -10%\n";
    SavingsAccount::setAnnualInterestRate(-10.);
    cout << "Applying negative annual interest to Savings Account " << p1.getSavingsBalance() << "$\n";
    p1.applyMonthlyInterest();
    cout << "Account value after applying: " << p1.getSavingsBalance() << "$\n";
    cout << "Applying negative annual interest to Savings Account " << p3.getSavingsBalance() << "$\n";
    p3.applyMonthlyInterest();
    cout << "Account value after applying: " << p3.getSavingsBalance() << "$\n";
    cout << endl;
    cout << "Correct(positive) interest rate section:\n" <<
    "**********************************************************************************************\n";
    cout << "Set up interest annual interest rate to 10%\n";
    SavingsAccount::setAnnualInterestRate(10.);
    cout << "Applying negative annual interest to Savings Account " << p1.getSavingsBalance() << "$\n";
    p1.applyMonthlyInterest();
    cout << "Account value after applying: " << p1.getSavingsBalance() << "$\n";
    cout << "Applying negative annual interest to Savings Account " << p1.getSavingsBalance() << "$\n";
    p3.applyMonthlyInterest();
    cout << "Account value after applying: " << p3.getSavingsBalance() << "$\n";
    cout << endl;
    cout << "Multiple (six) months applying interest rate to new 555 account with changing rate to 20%:\n" <<
    "**********************************************************************************************\n";
    cout << "Creating SavingsAccount with initial balance 555$\n";
    SavingsAccount p4(555);
    for (int i = 0; i < 6; ++i) {
        if (i == 3) { 
            SavingsAccount::setAnnualInterestRate(20);
        }
        p4.applyMonthlyInterest();
    }
    cout << "Account value after applying: " << p4.getSavingsBalance() << "$\n";
    cout << endl;
    cout << "Applying correct(positive) interest rate to negative Savings Balance created object section:\n" <<
        "**********************************************************************************************\n";
    // 20% rate are still valid for all objects
    cout << "Applying correct (positive) interest rate to negative Savings Balance created object\n";
    cout << "Applying negative annual interest to Savings Account " << p2.getSavingsBalance() << "$\n";
    p2.applyMonthlyInterest();
    cout << "Account value after applying: " << p2.getSavingsBalance() << "$\n";
}