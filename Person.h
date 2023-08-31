//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Person.h
// Win10, Visual C++ 2022, ISO C17
//
// Person class implementation.

// include guard
#ifndef PERSON_H_
#define PERSON_H_

#include <string>
using std::string;

#include <iostream>
using std::istream;
using std::ostream;

// defined namespace
namespace MichaelPokotskyi 
{
  class Person {
    // friend function operator overload
    friend istream &operator>>(istream &in, Person &person);
    friend ostream &operator<<(ostream &out, const Person &person);
  public:
    // Constructor
    Person(string firstName, string lastName, int ageYears,
           double heightInches, double weightPounds);
  private:
    // class fields
    string firstName;
    string lastName;
    int ageYears;
    double heightInches;
    double weightPounds;
  };

  // friend function operator overload
  istream &operator>>(istream &in, Person &person);
  ostream &operator<<(ostream &out, const Person &person);
}

#endif
