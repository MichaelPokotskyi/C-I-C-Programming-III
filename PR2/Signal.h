//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Signal.h
// Win10, Visual C++ 2022, ISO C17
// Signal class prototypes

// include guard
#ifndef PROJECT2_SIGNAL_H
#define PROJECT2_SIGNAL_H
// includes
#include "Time.h"

namespace Project2 {
  class Signal {
   public:
      // constructor
      Signal(double voltageOffset, Project2::Time timeOffset);
      // destructor
      virtual ~Signal();
      // virtual
      virtual double getVoltageAtTime(Project2::Time t) const = 0;
      // getters
      double getVoltageOffset() const;
      Project2::Time getTimeOffset() const; 
   private:
      double voltageOffset;
      Project2::Time timeOffset;
  };
}

#endif
