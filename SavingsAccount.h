//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// SavingsAccount.h
// Win10, Visual C++ 2022, ISO C17
//
//

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

// defined namespace
namespace MichaelPokotsky 
{
    class SavingAccount {
    private:
        // class fields
        double savingsBalance;
        double annualInterestRate;
    public:
        // constructor
        SavingAccount(double initialBalance);

        // returns account 
        double getSavingsBalance();

        // sets the annual interest rate used by all accounts
        static void setAnnualInterestRate();


    };
}
#endif
