//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// VibrationSensor.cpp
// Win10, Visual C++ 2022, ISO C17
// VibrationSensor class implementation

// includes
#include "VibrationSensor.h"

// constructor
Project2::VibrationSensor::VibrationSensor(string name, Project2::Signal &source)
  : Sensor(name, source) {
}
// destructor
Project2::VibrationSensor::~VibrationSensor(){
}
// getter
string 
Project2::VibrationSensor::getUnits() const {
  return "Hertz (Hz)";
}
