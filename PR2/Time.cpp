//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Time.cpp
// Win10, Visual C++ 2022, ISO C17
// Time class implementation

// includes
#include "Time.h"

// constructor
Project2::Time::Time(int hours, int minutes, int seconds)
    : hours(hours), minutes(minutes), seconds(seconds) {
}
// getter
int Project2::Time::getTotalTimeAsSeconds() const {
    return (seconds + (minutes * Project2::MIN_TO_SEC) +
        (hours * Project2::HOUR_TO_SEC));
}
// add time
Project2::Time& Project2::Time::operator+=(const Project2::Time& rhs) {
    int totalSeconds = getTotalTimeAsSeconds() + rhs.getTotalTimeAsSeconds();
    this->hours = totalSeconds / Project2::HOUR_TO_SEC;              // hours
    totalSeconds -= this->hours * Project2::HOUR_TO_SEC;
    this->minutes = totalSeconds / Project2::MIN_TO_SEC;             // min
    totalSeconds -= this->minutes * Project2::MIN_TO_SEC;
    this->seconds = totalSeconds;                                    // sec
    return *this;
}
// string format h: m: s:
ostream& Project2::operator<<(ostream& os, const Project2::Time& rhs) {
    if (os) {
        os << rhs.hours << "h:" << rhs.minutes << "m:" << rhs.seconds << "s";
    }
    return os;
}
