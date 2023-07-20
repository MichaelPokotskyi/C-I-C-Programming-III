#ifndef DATE_HW2_H
#define DATE_HW2_H


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

        //setters
        void setMonth(int Month);
        void setDay(int Day);
        void setYear(int Year);

        // getters
        int getMonth();
        int getDay();
        int getYear();

       // display
       void display();
    };
}
#endif
