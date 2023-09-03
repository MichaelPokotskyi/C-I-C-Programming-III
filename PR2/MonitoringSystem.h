//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// MonitoringSystem.h
// Win10, Visual C++ 2022, ISO C17
// MonitoringSystem class prototypes

// includes
#include "Sensor.h"
#include "Time.h"
#include <iostream>
using std::ostream;
#include <vector>

namespace Project2 {
  class MonitoringSystem {
   public:
      // constructor
      MonitoringSystem(ostream& out);
      // add new sensor
      void addSensor(Project2::Sensor *s);
      // outputs data
      void takeReading(Project2::Time t);
  private:
      // class fields
      vector <Project2::Sensor*> sensors;
      ostream &out;
  };
}
