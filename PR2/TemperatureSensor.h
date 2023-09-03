//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// TemperatureSensor.h
// Win10, Visual C++ 2022, ISO C17
// TemperatureSensor class prototypes

// include guard
#ifndef PROJECT2_TEMPERATURESENSOR_H
#define PROJECT2_TEMPERATURESENSOR_H
// includes
#include "Sensor.h"
#include "Signal.h"

namespace Project2 {
    class TemperatureSensor : public Sensor {
    public:
        // constructor
        TemperatureSensor(string name, Project2::Signal& source);
        // destructor
        ~TemperatureSensor();
        //  getter
        virtual string getUnits() const;
    };
}

#endif
