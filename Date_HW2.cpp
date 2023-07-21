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

// 1-12 month validation
void 
MichaelPokotsky::Date::monthValidation(int Month) {
    this->Month = Month;
    if (Month < 1 || Month > 12) {
        cerr << "Range 1-12 expected for Month but " << Month 
            << " found.\n";
    }
}
// year validation
void
MichaelPokotsky::Date::yearValidation(int Year) {
    this->Year = Year;
    if (Year < 0) {
        cerr << "Year have to be greater then 0.\n";
    }
}
// day in month validation
void
MichaelPokotsky::Date::dayValidation(int Day, int Month) {
    this->Day = Day;
    const char* name = "";
    if (Day < 0 || Day > 31) { 
        cerr << "Range 1-31 expected for Day but " << Day 
            << " found.\n"; 
    } else {
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
            name = "Month not identified.";
        }
    }
    if ((Month == 4 || Month == 6 || Month == 9 || Month == 11) && (Day > 30)) {
        cerr << name << " has 30 days.";
    }
    if(Month == 2 && (Day == 28 || Day == 29)) {
        cerr << name << " has 28 (29 in leap year) days.";
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
    yearValidation(Year);
}

// display
void const
MichaelPokotsky::Date::display() {
    std::cout << getMonth() << "/" << getDay() 
        << "/" << getYear() << "\n";
}

// connect to proper namespace
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

    Date d5(12, 31, -1);
    d5.display(); // test Year less than 0

    // test Days > 31
    // test Days < 0
    
    cout << "Test taking current date constructor:\n";
    Date d4; // test taking current date constructor
    d4.display();

    // test getters with current date object
    cout << "Getters test section with current date object:\n";
    cout << "Get Month " << d4.getMonth() << "\n";
    cout << "Get Day " << d4.getDay() << "\n";
    cout << "Get Year " << d4.getYear() << "\n";  
}