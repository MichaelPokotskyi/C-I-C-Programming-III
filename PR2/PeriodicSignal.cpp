//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// MonitoringSystem.cpp
// Win10, Visual C++ 2022, ISO C17
// PeriodicSignal class implementation

// includes
#include "PeriodicSignal.h"
#include "Time.h"

// constructor
Project2::PeriodicSignal::PeriodicSignal(
  double voltageOffset, Project2::Time timeOffset, double minVoltage, 
  double maxVoltage, Project2::Time period)
  : Signal(voltageOffset, timeOffset),
    minVoltage(minVoltage), maxVoltage(maxVoltage), period(period) {
}
// destructor
Project2::PeriodicSignal::~PeriodicSignal(){
}
// getter min V
double Project2::PeriodicSignal::getMinVoltage() const {
  return minVoltage;
}
// getter max V
double Project2::PeriodicSignal::getMaxVoltage() const {
  return maxVoltage;
}
// get period
Project2::Time Project2::PeriodicSignal::getPeriod() const {
  return period;
}
