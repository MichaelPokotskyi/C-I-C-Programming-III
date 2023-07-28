////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming III CSE-40477
//// Raymond Mitchell III
//// SavingsAccount.cpp
//// Win10, Visual C++ 2022, ISO C17
//// 
//// SavingsAccount class implementation. Monthly percentage calculating as simple
//// rate - every next months rate including previous earnings. Two more messages 
//// added for test section.
//
//#include <iostream>
//#include "SavingsAccount.h"
//
//using std::cout;
//using std::cerr;
//
//const int HUNDERD_PERCENT = 100;
//const int MONTH = 12;
//
//// storage class static defaults to zero
//double MichaelPokotsky::SavingsAccount::annualInterestRate;
//
//// constructor takes initial balance value greater then zero
//MichaelPokotsky::SavingsAccount::SavingsAccount(double initialBalance) : 
//    savingsBalance(initialBalance) {
//    if (initialBalance < 0) {
//        cerr << "Initial balance cannot be negative, but " << initialBalance << 
//            "$ found, will be set to zero\n";
//        this->savingsBalance = 0;
//    }
//}
//
//// returns account balance
//double
//MichaelPokotsky::SavingsAccount::getSavingsBalance() const {
//    return savingsBalance;
//}
//
//// sets the annual interest rate used by all accounts
//void
//MichaelPokotsky::SavingsAccount::setAnnualInterestRate(double interestRate) {
//    // notify when annual interes been changed
//    if (annualInterestRate != interestRate) {
//        cout << "Annual interest rate been changed from " << annualInterestRate * HUNDERD_PERCENT <<
//            "% to " << interestRate << "%!\n";
//    }
//    // no negative rate allowed
//    if (interestRate < 0) {
//        cerr << "Percentage cannot be negative, but " << interestRate << 
//            "% found, will be set to zero.\n";
//        annualInterestRate = 0;
//    } else {
//        annualInterestRate = interestRate / HUNDERD_PERCENT;
//    }
//    
//}
//
///*calculates the monthly interest earned for the account (1/12 of the annual interest) 
//and adds the interest to the account’s balance */
//void
//MichaelPokotsky::SavingsAccount::applyMonthlyInterest() {
//    // simple percentage here with notifying of current and new balance value and % applied
//    cout << "Annual interest " << annualInterestRate * HUNDERD_PERCENT << 
//        "% applied by one month to Savings Account " << savingsBalance << "$";
//    savingsBalance += (savingsBalance * annualInterestRate) / MONTH;
//    cout << " which is now " << savingsBalance << "$\n";
//}
