//
//  Authored by Remo Koch
//

#ifndef AMPHIBIC_VEHICLE_H_
#define AMPHIBIC_VEHICLE_H_

#include <iostream>
#include <string>
#include "Car.h"
#include "Ship.h"

class AmphibicVehicle: public Car, public Ship {

public:

	AmphibicVehicle(bool);

	std::string printUsageMode();
	std::string changeUsageMode();

private:

	enum Mode {
		car, ship
	} mUsageMode;

};

#endif
