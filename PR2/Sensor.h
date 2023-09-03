//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// Sensor.h
// Win10, Visual C++ 2022, ISO C17
// Sensor class prototypes

// include guard
#ifndef PROJECT2_SENSOR_H
#define PROJECT2_SENSOR_H
// includes
#include "Signal.h"
#include "Time.h"
#include "DataRecorder.h"

namespace Project2 {
    class Sensor {
    public:
        // constructor
        Sensor(string name, Project2::Signal& source);
        // destructor
        virtual ~Sensor();
        // log output
        void takeReading(Project2::Time t, Project2::DataRecorder& recorder) const;
        // virtual
        virtual string getUnits() const = 0;
        // getters
        string getName() const;
        Project2::Signal& getSource() const;
    private:
        // class fields
        string name;
        Project2::Signal& source;
    };
}
#endif

