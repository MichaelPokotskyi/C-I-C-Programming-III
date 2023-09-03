//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// SineSignal.h
// Win10, Visual C++ 2022, ISO C17
// SineSignal class prototypes

// include guard
#ifndef PROJECT2_SINESIGNAL_H
#define PROJECT2_SINESIGNAL_H

// includes
#include "PeriodicSignal.h"
#include "Time.h"

namespace Project2 {
  double const PI = 3.14159265358979323846;
  class SineSignal : public PeriodicSignal {
    public:
        // constructor
        SineSignal(double voltageOffset, Project2::Time timeOffset, double minVoltage, 
            double maxVoltage, Project2::Time period);
        // destructor
        virtual ~SineSignal();
        // virtual
        virtual double getVoltageAtTime(Project2::Time t) const;
  };
}
#endif
