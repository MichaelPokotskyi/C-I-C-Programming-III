//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Date_HW2.cpp
// Win10, Visual C++ 2022, ISO C17

// Date class representing a month, day, and year with its testing.
// Month and Date validation will identify if wrong data provided.

#include <iostream>
#include <ctime>
#include "Date_HW2.h"

// month 1-12 and day 1-31 validation
void 
MichaelPokotsky::Date::monthValidation(int Month) {
    if (Month < 1 || Month > 12) {
        std::cerr << "Range 1-12 expected for Month but " << Month 
            << " found.\n";
    }
    else {
         this->Month = Month;
    }
}
void
MichaelPokotsky::Date::dayValidation(int Day, int Month) {
    if (Day < 0 || Day > 31) { 
        std::cerr << "Range 1-31 expected for Day but " << Day 
            << " found.\n"; 
    }
    else {

    }
}

// default constructor initializing to current date
MichaelPokotsky::Date::Date() {
    time_t now = time(NULL);
    tm *ltm = localtime(&now);
    this->Month = 1900 + ltm->tm_year;
    this->Day = 1 + ltm->tm_mon;
    this->Year = ltm->tm_mday;
}

// three arg constructor
MichaelPokotsky::Date::Date(int Month, int Day, int Year) {
    monthValidation(Month);
    dayValidation(Day, Month);
    this->Year = Year;
}

// display
void 
MichaelPokotsky::Date::display() {
    std::cout << getMonth() << "/" << getDay() 
        << "/" << getYear() << "\n";
}

int main() {

    return 0;
}