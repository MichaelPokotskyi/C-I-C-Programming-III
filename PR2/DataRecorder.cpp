//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// DataRecorder.cpp
// Win10, Visual C++ 2022, ISO C17
// DataRecorder class implementation

// includes
#include "DataRecorder.h"
#include <iomanip>

// constructor
Project2::DataRecorder::DataRecorder(ostream& out) : out(out) {
}

// output formatted data
void Project2::DataRecorder::log(
  Project2::Time timestamp, string sensorName, 
  double sensorVoltage, string sensorUnits) {
  out << timestamp << " - " << sensorName << " - " << fixed << setprecision(2) << sensorVoltage << " "
      << sensorUnits << "\n"; 
}
