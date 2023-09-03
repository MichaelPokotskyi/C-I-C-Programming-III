//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// ConstantSignal.cpp
// Win10, Visual C++ 2022, ISO C17
// ConstantSignal class implementation

// includes
#include "ConstantSignal.h"

// constructor
Project2::ConstantSignal::ConstantSignal(
  double voltageOffset, Project2::Time timeOffset)
    : Signal(voltageOffset, timeOffset) {
  }

// getter
double 
Project2::ConstantSignal::getVoltageAtTime(Project2::Time t) const {
  return getVoltageOffset();
}
