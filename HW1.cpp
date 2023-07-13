#include <iostream>
using std::cout;
using std::cerr;

class Date {
    const int DEFAULT_MONTH = 1;
private:
    // object fields
    int Month;
    int Day;
    int Year;

    // month validation
    void monthValidation(int Month) {
        if (Month < 1 || Month > 12) {
            this->Month = DEFAULT_MONTH;
            cerr << "1-12 expected for Month but " << Month << " found." << "\n";
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
    // tests
    Date d1(12, 31, 23);
    d1.display();

    Date d2(0, 31, 23);
    d2.display();

    Date d3(13, 31, 23);
    d3.display();

}