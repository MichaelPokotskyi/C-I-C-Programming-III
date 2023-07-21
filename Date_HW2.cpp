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

using std::cout;
using std::cerr;

// month 1-12 and day in month 1-31 validation
void 
MichaelPokotsky::Date::monthValidation(int Month) {
    if (Month < 1 || Month > 12) {
        cerr << "Range 1-12 expected for Month but " << Month 
            << " found.\n";
    }
    else {
         this->Month = Month;
    }
}
void
MichaelPokotsky::Date::dayValidation(int Day, int Month) {
    if (Day < 0 || Day > 31) { 
        cerr << "Range 1-31 expected for Day but " << Day 
            << " found.\n"; 
    }
    else {
        const char* name;
        switch (Month) {
        case 1:
            name = "Janvary";
            break;
        case 2:
            name = "Febrary";
            break;
        case 3:
            name = "March";
            break;
        case 4:
            name = "April";
            break;
        case 5:
            name = "May";
            break;
        case 6:
            name = "June";
            break;
        case 7:
            name = "July";
            break;
        case 8:
            name = "August";
            break;
        case 9:
            name = "September";
            break;
        case 10:
            name = "October";
            break;
        case 11:
            name = "November";
            break;
        case 12:
            name = "December";
            break;
        default:
            //name = "Month unidentified!";
        }
        if ((Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) && Day > 31) {
            cerr << 
        }
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

using namespace MichaelPokotsky;

int main() {

    // test objects instantiation
    cout << "Object creating test section:\n";
    Date d1(12, 31, 2023); // OK values
    d1.display();

    Date d2(0, 31, 2023); // test Month < 1
    d2.display();

    Date d3(13, 31, 2023); // test Month > 12
    d3.display();

    //cout << "Setters test section:\n";
    //// test setters
    //d1.setMonth(88); // validation will work here
    //d1.setDay(88);
    //d1.setYear(8888);
    //d1.display();

    cout << "Getters test section:\n";
    // test getters
    cout << "Get Month " << d1.getMonth() << "\n";
    cout << "Get Day " << d1.getDay() << "\n";
    cout << "Get Year " << d1.getYear() << "\n";  
}