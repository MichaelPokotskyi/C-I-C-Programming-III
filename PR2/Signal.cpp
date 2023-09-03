//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Signal.cpp
// Win10, Visual C++ 2022, ISO C17
// Signal class implementation

// includes
#include "Signal.h"

// constructor
Project2::Signal::Signal(double voltageOffset, Project2::Time timeOffset)
  : voltageOffset(voltageOffset), timeOffset(timeOffset) {
}
// destructor
Project2::Signal::~Signal(){
}
// getter
double Project2::Signal::getVoltageOffset() const {
  return voltageOffset;
}
// getter
Project2::Time Project2::Signal::getTimeOffset() const {
  return timeOffset;
}
