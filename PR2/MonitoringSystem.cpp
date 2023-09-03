//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming III CSE-40477
// Raymond Mitchell III
// MonitoringSystem.cpp
// Win10, Visual C++ 2022, ISO C17
// MonitoringSystem class implementation

// includes
#include "MonitoringSystem.h"

// constructor
Project2::MonitoringSystem::MonitoringSystem(ostream &out)
	: out(out) {
}

// add new sensor
void
Project2::MonitoringSystem::addSensor(Project2::Sensor *s) {
	sensors.push_back(s);
}

// outputs data
void
Project2::MonitoringSystem::takeReading(Project2::Time t) {
	for (size_t i = 0; i < sensors.size(); ++i) {	
		Project2::DataRecorder dr(out);
		dr.log(t, (*sensors[i]).getName(), (*sensors[i]).getSource().getVoltageAtTime(t),
			(*sensors[i]).getUnits()
		);
	}
}
