//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// SawtoothSignal.h
// Win10, Visual C++ 2022, ISO C17
// PressureSensor class prototypes

// include guard
#ifndef PROJECT2_SAWTOOTHSIGNAL_H
#define PROJECT2_SAWTOOTHSIGNAL_H

// includes
#include "PeriodicSignal.h"
#include "Time.h"
namespace Project2 {
  class SawtoothSignal : public PeriodicSignal {
    public:
        //constructor
        SawtoothSignal(double voltageOffset, Project2::Time timeOffset,
          double minVoltage, double maxVoltage, Project2::Time period);
        // virtual
        virtual double getVoltageAtTime(Project2::Time t) const;
  };
}
#endif
