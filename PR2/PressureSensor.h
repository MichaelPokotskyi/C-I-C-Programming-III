//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// PressureSensor.h
// Win10, Visual C++ 2022, ISO C17
// PressureSensor class prototypes

// include guard
#ifndef PROJECT2_PRESSURE_SENSOR_H
#define PROJECT2_PRESSURE_SENSOR_H

//includes
#include "DataRecorder.h"
#include "Sensor.h"
#include "Signal.h"
#include "Time.h"

namespace Project2 {
  class PressureSensor : public Sensor {
    public:
        // constructor
        PressureSensor(string name, Project2::Signal &source);
        // destructor
        virtual ~PressureSensor();
        //getter
        virtual string getUnits() const;
  };
}
#endif
