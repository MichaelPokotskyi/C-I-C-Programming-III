////
//// Michael Pokotskyi U09662201
//// pokotskyi.m@gmail.com
//// C I C++ Programming III CSE-40477
//// Raymond Mitchell III
//// Date_HW2.cpp
//// Win10, Visual C++ 2022, ISO C17
//
//// Date class representing a month, day, and year with its testing.
//// Month, Date and Year validation will notify if wrong data provided.
//
//#include <iostream>
//#include <ctime>
//#include "Date_HW2.h"
//
//using std::cout;
//using std::cerr;
//
//// 1-12 month validation
//void 
//MichaelPokotsky::Date::monthValidation(int Month) {
//    this->Month = Month;
//    if (Month < 1 || Month > 12) {
//        cerr << "Range 1-12 expected for Month but " << Month 
//            << " found.\n";
//    }
//}
//// year < 0 validation
//void
//MichaelPokotsky::Date::yearValidation(int Year) {
//    this->Year = Year;
//    if (Year < 0) {
//        cerr << "Year have to be greater then 0.\n";
//    }
//}
//// day in month validation
//void
//MichaelPokotsky::Date::dayValidation(int Day, int Month) {
//    this->Day = Day;
//    const char *name = "";
//    if (Day < 0 || Day > 31) { 
//        cerr << "Range 1-31 expected for Day but " << Day
//            << " found.\n";
//    } else {
//        switch (Month) {
//        case 2:
//            name = "February";
//            break;
//        case 4:
//            name = "April";
//            break;
//        case 6:
//            name = "June";
//            break;
//        case 9:
//            name = "September";
//            break;
//        case 11:
//            name = "November";
//            break;
//        default:
//            name = "Month undefined.";
//        }
//    }
//    // all with 30 days
//    if ((Month == 4 || Month == 6 || Month == 9 || Month == 11) && (Day > 30)) {
//        cerr << name << " has 30 days.\n";
//    }
//    // February with NO leap years support
//    if(Month == 2 && Day > 29) {
//        cerr << name << " has 28 (29 in leap year) days.\n";
//    }
// }
//
//// default constructor initializing to current date
//MichaelPokotsky::Date::Date() {
//    time_t curr = time(NULL);
//    tm *ltm = localtime(&curr);
//    // direct access to struct members
//    this->Month = 1900 + ltm->tm_year;
//    this->Day = 1 + ltm->tm_mon;
//    this->Year = ltm->tm_mday;
//}
//
//// three args constructor
//MichaelPokotsky::Date::Date(int Month, int Day, int Year) {
//    monthValidation(Month);
//    dayValidation(Day, Month);
//    yearValidation(Year);
//}
//
//// display object with fwd slashes
//void const
//MichaelPokotsky::Date::display() {
//    std::cout << getMonth() << "/" << getDay() 
//        << "/" << getYear() << "\n";
//}
//
//// connect to proper namespace
//using namespace MichaelPokotsky;
//
//int main() {
//    // test objects instantiation
//    cout << "Object creating test section MM/DD/YYYY:\nTest all OK values:\n";
//    Date d1(12, 31, 2023); // All OK values
//    d1.display();
//
//    cout << "Test Month < 1\n";
//    Date d2(0, 31, 2023); // test Month < 1
//    d2.display();
//
//    cout << "Test Month > 12\n";
//    Date d3(13, 31, 2023); // test Month > 12
//    d3.display();
//
//    cout << "Test Year less than 0\n";
//    Date d5(12, 31, -1900); // test Year less than 0
//    d5.display(); 
//
//    cout << "Test Days > 31 in any month\n";
//    Date d6(12, 32, 2023); // test Days > 31 in any month
//    d6.display();
//
//    cout << "Test Days < 0\n";
//    Date d7(12, -1, 2023); // test Days < 0
//    d7.display();
//        
//    cout << "Test April 31 days\n";
//    Date d8(4, 31, 2023); // test April 31 days
//    d8.display();
//
//    cout << "Test November 31 days\n";
//    Date d9(11, 31, 2023); // test November 31 days
//    d9.display();
//
//    cout << "Test February 29 days\n";
//    Date d10(2, 29, 2023); // test February 29 days
//    d10.display();
//
//    cout << "Test February 30 days\n";
//    Date d11(2, 30, 2023); // test February 30 days
//    d11.display();
//        
//    cout << "Test taking current date constructor:\n";
//    Date d4; // test taking current date constructor
//    d4.display();
//
//    // test getters with current date object
//    cout << "Getters test section with current date object:\n";
//    cout << "Get Month " << d4.getMonth() << "\n";
//    cout << "Get Day " << d4.getDay() << "\n";
//    cout << "Get Year " << d4.getYear() << "\n";  
//}
