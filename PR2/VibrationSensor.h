//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// VibrationSensor.h
// Win10, Visual C++ 2022, ISO C17
// VibrationSensor class prototypes

// include guard
#ifndef PROJECT2_VIBRATIONSENSOR_H
#define PROJECT2_VIBRATIONSENSOR_H
// includes
#include "Sensor.h"
#include "Signal.h"

namespace Project2 {
  class VibrationSensor : public Sensor {
    public:
        // constructor
        VibrationSensor(string name, Project2::Signal &source);
        // virtual
        virtual ~VibrationSensor();
        // getter
        virtual string getUnits() const;
  };
}
#endif
