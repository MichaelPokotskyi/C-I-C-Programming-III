#include <iostream>
using namespace std;

class Date {
private:
    int Month;
    int Day;
    int Year;

public:
    // constructor
    Date(int month, int day, int year) {
        this->Month = month;
        this->Day = day;
        this->Year = year;
    }
    //setters
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
        //cout << date.getMonth() << date.getDay() << date.getYear();
        cout << getMonth() << getDay() << getYear();
    }
};

int main() {
    // tests
    Date d1(12, 31, 23);
    d1.display();
    return 0;
}