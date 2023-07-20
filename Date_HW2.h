#ifndef DATE_HW2_H
#define DATE_HW2_H

// defined namespace
namespace MichaelPokotsky
{
    class Date {
    private:
        // class fields
        int Month;
        int Day;
        int Year;
        
        //month adn day validation
        void monthValidation(int Month);
        void dayValidation(int Day, int Month);

    public:
        // default constructor
        Date();

        // three arg constructor
        Date(int Month, int Day, int Year);

        // getters
        int getMonth();
        int getDay();
        int getYear();

       // display
       void display();

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
