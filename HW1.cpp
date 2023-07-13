//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// HW1.cpp
// Win10, Visual C++ 2022, ISO C17

// Date class representing a month, day, and year with its testing.
// Extended with monthValidation() private method to reuse validation piece
// of code.


#include <iostream>
using std::cout;
using std::cerr;

class Date {
    // default month
    const int DEFAULT_MONTH = 1;
private:
    // class fields
    int Month;
    int Day;
    int Year;

    // 1-12 month validation
    void monthValidation(int Month) {
        if (Month < 1 || Month > 12) {
            this->Month = DEFAULT_MONTH;
            cerr << "Range 1-12 expected for Month but " << Month 
                << " found. Month will set to default value '1'." << "\n";
        }
        else {
            this->Month = Month;
        }
    }
public:
    // constructor
    Date(int Month, int Day, int Year) {
        monthValidation(Month);
        this->Day = Day;
        this->Year = Year;
    }
    // destructor
    ~Date() {
        //obj terminated here
    }
    // setters
    void setMonth(int Month) {
        monthValidation(Month);
    }
    void setDay(int Day) {
        this->Day = Day;
    }
    void setYear(int Year) {
        this->Year = Year;
    }
    // getters
    int getMonth() {
        return Month;
    }
    int getDay() {
        return Day;
    }
    int getYear() {
        return Year;
    }
    // display
    void display() {
        cout << getMonth() << "/" << getDay() << "/" << getYear() << "\n";
    }
};

int main() {
    // test obj instansiation
    cout << "Object creating test section: creating and display Date objects:\n";
    Date d1(12, 31, 2023); // OK values
    d1.display();


    Date d2(0, 31, 2023); // test Month < 1
    d2.display();

    Date d3(13, 31, 2023); // test Month > 12
    d3.display();

    cout << "Setters test section:\n";
    // test setters
    d1.setMonth(88); // validation will work here
    d1.setDay(88);
    d1.setYear(8888);
    d1.display();

    cout << "Getters test section:\n";
    // test getters
    cout << "Get Month " << d1.getMonth() << "\n";
    cout << "Get Day " << d1.getDay() << "\n";
    cout << "Get Year " << d1.getYear() << "\n";   
}
