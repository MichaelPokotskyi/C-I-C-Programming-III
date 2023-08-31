//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// HW8.cpp
// Win10, Visual C++ 2022, ISO C17
//
// Tests for person class implementation.

#include "Person.h"

#include <fstream>
using std::ifstream;

#include <iostream>
using std::cout;
using std::endl;


int main()
{
  //stringstream output;
  string temp;
  ifstream input ("hw8-input.txt");

  if (input.is_open()) {
    while (getline(input, temp)) {
      cout << temp << endl;
    }
    input.close();
  }
}
