//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// SineSignal.cpp
// Win10, Visual C++ 2022, ISO C17
// SineSignal class implementation

// includes
#include "SineSignal.h"
#include "Time.h"
#include <cmath>

// constructor
Project2::SineSignal::SineSignal( double voltageOffset, Project2::Time timeOffset, double minVoltage, 
  double maxVoltage,Project2::Time period)
  : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period) {
}
//destructor
Project2::SineSignal::~SineSignal() {
}
// Signal formula
// V(t) = voltageOffset + min + (max - min) / 2
// + sine((t + timeOffset) * 2 * PI / period) * (max - min) / 2
double Project2::SineSignal::getVoltageAtTime(Project2::Time t) const {
  double voltageOffset = getVoltageOffset();
  double max = getMaxVoltage();
  double min = getMinVoltage();
  double difference = max - min;
  t += getTimeOffset();
  int timeSum = t.getTotalTimeAsSeconds();
  double period = getPeriod().getTotalTimeAsSeconds();
  double sine = sin(timeSum * 2 * Project2::PI / period);
  return (voltageOffset + min + difference / 2 + sine * difference / 2);
}
