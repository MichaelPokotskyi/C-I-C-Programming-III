#include <iostream>
using namespace std;

class Date {
private:
    // object fields
    int Month;
    int Day;
    int Year;

public:
    // constructor
    Date(int Month, int Day, int Year) {
        this->Month = Month;
        this->Day = Day;
        this->Year = Year;
    }
    // destructor
    ~Date() 
    {
        //obj terminated here
    }
    // setters
    void setMonth(int month) {
        this->Month = month;
    }
    void setDay(int day) {
        this->Day = day;
    }
    void setYear(int year) {
        this->Year = year;
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
        cout << getMonth() << getDay() << getYear();
    }
};

int main() {
    // tests
    Date d1(12, 31, 23);
    d1.display();
    return 0;
}