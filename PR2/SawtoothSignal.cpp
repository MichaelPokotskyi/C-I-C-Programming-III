//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// SawtoothSignal.cpp
// Win10, Visual C++ 2022, ISO C17
// SawtoothSignal class implementation

// includes
#include "SawtoothSignal.h"
#include <cmath>

// constructor
Project2::SawtoothSignal::SawtoothSignal(double voltageOffset, Project2::Time timeOffset,
  double minVoltage, double maxVoltage, Project2::Time period)
  : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period) {
}
// Signal formula
// V(t) = voltageOffset + min + 
// ((t + timeOffset) * (max-min) / period) % (max-min)
double
Project2::SawtoothSignal::getVoltageAtTime(Project2::Time t) const {
  double voltageOffset = getVoltageOffset();
  double max = getMaxVoltage();
  double min = getMinVoltage();
  double difference = max - min;
  t += getTimeOffset();
  int timeSum = t.getTotalTimeAsSeconds();
  double period = getPeriod().getTotalTimeAsSeconds();
  // fmod
  return (voltageOffset + min + std::fmod((timeSum * difference / period), difference));
}
