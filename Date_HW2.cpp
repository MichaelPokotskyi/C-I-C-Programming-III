//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Date.cpp
// Win10, Visual C++ 2022, ISO C17

// Date class representing a month, day, and year with its testing.
//

#include <iostream>
#include <ctime>
#include "Date_HW2.h"

// month validation
void 
MichaelPokotsky::Date::monthValidation(int Month) {
    if (Month < 1 || Month > 12) {
        std::cerr << "Range 1-12 expected for Month but " << Month << " found.\n";
        exit(1);
    }
    else {
         this->Month = Month;
    }
}

// day validation
void
MichaelPokotsky::Date::dayValidation(int Day) {

}

// default constructor
MichaelPokotsky::Date::Date() {
    time_t now = time(NULL);
    tm* ltm = localtime(&now);
    this->Month = 1900 + ltm->tm_year;
    this->Day = 1 + ltm->tm_mon;
    this->Year = ltm->tm_mday;}

// three arg constructor
MichaelPokotsky::Date::Date(int Month, int Day, int Year) {
    monthValidation(Month);
    setDay(Day);
    setYear(Year);
}
// setters
void 
MichaelPokotsky::Date::setMonth(int Month) {
    monthValidation(Month);
}
void 
MichaelPokotsky::Date::setDay(int Day) {
    this->Day = Day;
}
void 
MichaelPokotsky::Date::setYear(int Year) {
    this->Year = Year;
}

// getters
int
MichaelPokotsky::Date::getMonth() {
    return Month;
}
int 
MichaelPokotsky::Date::getDay() {
    return Day;
}
int 
MichaelPokotsky::Date::getYear() {
    return Year;
}

// display
void 
MichaelPokotsky::Date::display() {
    std::cout << getMonth() << "/" << getDay() << "/" << getYear() << "\n";
}

int main() {

    return 0;
}