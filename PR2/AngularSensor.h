//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// AngularSensor.h
// Win10, Visual C++ 2022, ISO C17
// AngularSensor interprets Signal voltages class prototypes

// include guard
#ifndef PROJECT2_ANGULARSENSOR_H
#define PROJECT2_ANGULARSENSOR_H

// includes
#include "DataRecorder.h"
#include "Sensor.h"
#include "Signal.h"
#include "Time.h"

namespace Project2 {
  class AngularSensor : public Sensor {
    public:
        // constructor
        AngularSensor(string name, Project2::Signal &source);
        // destructor
        virtual ~AngularSensor();
        // getter
        virtual string getUnits() const;
  };
}
#endif

