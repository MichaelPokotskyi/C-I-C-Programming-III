//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// ConstantSignal.h
// Win10, Visual C++ 2022, ISO C17
// ConstantSignal class prototypes

// include guard
#ifndef PROJECT2_CONSTANTSIGNAL_H
#define PROJECT2_CONSTANTSIGNAL_H

//includes
#include "Signal.h"
#include "Time.h"

namespace Project2 {
  class ConstantSignal : public Project2::Signal {
    public:
        // constructor
        ConstantSignal(double voltageOffset, Project2::Time timeOffset);
        // getter
        virtual double getVoltageAtTime(Project2::Time t) const;    
  };
}

#endif
