//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Time.h
// Win10, Visual C++ 2022, ISO C17
// Time class prototypes

// includes guard
#ifndef PROJECT2_TIME_H
#define PROJECT2_TIME_H
// includes
#include <iostream>
using namespace std;

namespace Project2 {
    const int MIN_TO_SEC = 60;
    const int HOUR_TO_SEC = MIN_TO_SEC * 60;
    class Time {
        // string format h: m: s:
        friend ostream& operator<<(ostream& os, const Time& rhs);
    public:
        // constructor
        Time(int hours, int minutes, int seconds);
        // getter
        int getTotalTimeAsSeconds() const;
        // add time
        Time& operator+=(const Time& rhs);
    private:
        // class fields
        int hours;
        int minutes;
        int seconds;
    };
    ostream& operator<<(ostream& os, const Time& rhs);
}
#endif
