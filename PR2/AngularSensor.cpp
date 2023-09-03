//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// AngularSensor.cpp
// Win10, Visual C++ 2022, ISO C17
// AngularSensor interprets Signal voltages class implementation

// includes
#include "AngularSensor.h"
#include "Sensor.h"
#include "Signal.h"

// constructor
Project2::AngularSensor::AngularSensor(string name, Project2::Signal &source)
  : Sensor(name, source) {

}
// destructor
Project2::AngularSensor::~AngularSensor() {

}
// getter
string Project2::AngularSensor::getUnits() const {
  return "Radians";
}
