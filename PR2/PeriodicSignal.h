//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// MonitoringSystem.h
// Win10, Visual C++ 2022, ISO C17
// PeriodicSignal class prototypes

// include guard
#ifndef PROJECT2_PERIODICSIGNAL_H
#define PROJECT2_PERIODICSIGNAL_H
// includes
#include "Time.h"
#include "Signal.h"

namespace Project2 {
  class PeriodicSignal : public Project2::Signal {
    public:
        // constructor
        PeriodicSignal(double voltageOffset, Project2::Time timeOffset, double minVoltage, 
        double maxVoltage, Project2::Time period);
        // destructor
        virtual ~PeriodicSignal();
        // virtual
        virtual double getVoltageAtTime(Project2::Time t) const = 0;
        // getter min V
        double getMinVoltage() const;
        // getter max V
        double getMaxVoltage() const;
        // get period
        Project2::Time getPeriod() const;
    private:
        // class fields
        double minVoltage;
        double maxVoltage;
        Project2::Time period;
  };
}
#endif
