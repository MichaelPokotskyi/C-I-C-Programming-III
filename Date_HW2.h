#ifndef DATE_HW2_H
#define DATE_HW2_H

// defined namespace
namespace MichaelPokotsky
{
    class Date {
    private:
        //month, day and year validation
        void monthValidation(int Month);
        void yearValidation(int Year);
        void dayValidation(int Day, int Month);

        // class fields
        int Month;
        int Day;
        int Year;
    public:
        // default constructor
        Date();

        // three arg constructor
        Date(int Month, int Day, int Year);

       // display
       void const display();

       // explicit inline getters
       inline int getMonth();
       inline int getDay();
       inline int getYear();
    };

    // getters implementation
    int Date::getMonth() {
        return Month;
    }
    int Date::getDay() {
        return Day;
    }
    int Date::getYear() {
        return Year;
    }
}
#endif
