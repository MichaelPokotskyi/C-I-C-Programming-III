//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Person.cpp
// Win10, Visual C++ 2022, ISO C17
//
// Person class implementation.

#include "Person.h"

#include <iomanip>
using std::fixed;
using std::showpoint;
using std::setprecision;

MichaelPokotskyi::Person::Person(string firstName, string lastName, int  ageYears,
                                   double heightInches, double weightPounds):
    firstName(firstName), lastName(lastName), ageYears(ageYears),
    heightInches(heightInches), weightPounds(weightPounds) 
{
}

// Overloaded stream extraction operator
istream &
MichaelPokotskyi::operator>>(istream &in, Person &person) {
  return in;
}

// Overloaded stream insertion operator
ostream &
MichaelPokotskyi::operator<<(ostream &out, const Person &person) {
  out << fixed << showpoint << setprecision(2) << person.firstName << " " <<
         fixed << showpoint << setprecision(2) << person.lastName << " " <<
         fixed << showpoint << setprecision(2) << person.ageYears << " " <<
         fixed << showpoint << setprecision(2) << person.heightInches << " " <<
         fixed << showpoint << setprecision(2) << person.weightPounds << "\n";
  return out;
}
