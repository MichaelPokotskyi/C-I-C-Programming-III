//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// SavingsAccount.h
// Win10, Visual C++ 2022, ISO C17
//
// SavingsAccount function prototypes and class members.

// include guard
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

// defined namespace
namespace MichaelPokotsky
{
    class SavingsAccount {
    public:
        // constructor
        SavingsAccount(double initialBalance);

        // returns account balance
        double const getSavingsBalance();

        // sets the annual interest rate used by all accounts
        static void setAnnualInterestRate(double interestRate);

        // calculates the monthly interest earned for the account
        void applyMonthlyInterest();
    private:
        // class fields
        double savingsBalance;
        static double annualInterestRate;
    };
}
#endif
