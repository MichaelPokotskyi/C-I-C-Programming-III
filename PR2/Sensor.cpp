//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Sensor.cpp
// Win10, Visual C++ 2022, ISO C17
// Sensor class implementation

// includes
#include "Sensor.h"

// constructor
Project2::Sensor::Sensor(string name, Project2::Signal &source)
  : name(name), source(source) {
}
// destructor
Project2::Sensor::~Sensor(){
}
// getter
string Project2::Sensor::getName() const {
  return name;
}
// getter
Project2::Signal &Project2::Sensor::getSource() const {
  return source;
}
// log output
void Project2::Sensor::takeReading(Project2::Time t, Project2::DataRecorder &recorder) const {
  recorder.log(t, getName(), getSource().getVoltageAtTime(t), getUnits());
}
