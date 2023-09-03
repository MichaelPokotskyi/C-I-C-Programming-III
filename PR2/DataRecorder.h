//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// DataRecorder.cpp
// Win10, Visual C++ 2022, ISO C17
// DataRecorder class prototypes

// include guard
#ifndef PROJECT2_DATARECORDER_H
#define PROJECT2_DATARECORDER_H

// includes
#include "Time.h"

// defined namespace
namespace Project2 {
  class DataRecorder {
    public:
      // constructor
      DataRecorder(ostream& out);
      // output formatted data
      void log(Project2::Time timestamp, string sensorName,
          double sensorVoltage, string sensorUnits);
    private:
        // class fields
        ostream& out;
  };
}
#endif
