//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// TemperatureSensor.cpp
// Win10, Visual C++ 2022, ISO C17
// TemperatureSensor class implementation

// includes
#include "TemperatureSensor.h"

// constructor
Project2::TemperatureSensor::TemperatureSensor(string name, Project2::Signal& source)
    : Sensor(name, source) {
}
// destructor
Project2::TemperatureSensor::~TemperatureSensor(){
}
// getter
string
Project2::TemperatureSensor::getUnits() const {
    return "Degrees Celsius";
}