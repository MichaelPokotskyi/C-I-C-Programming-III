//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// PressureSensor.cpp
// Win10, Visual C++ 2022, ISO C17
// PressureSensor class implementation

// includes
#include "PressureSensor.h"
// constructor
Project2::PressureSensor::PressureSensor
  (string name, Project2::Signal &source):
    Sensor(name, source) {
}
// destructor
Project2::PressureSensor::~PressureSensor(){
}
// getter
string Project2::PressureSensor::getUnits() const {
  return "Pounds per square inch (PSI)";
}
