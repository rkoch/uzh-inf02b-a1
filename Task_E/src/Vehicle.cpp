//
//  Authored by Remo Koch
//  Public repository at https://github.com/rkoch/uzh-inf02b-a1
//

#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(float pMaximumVelocity) {
	maximumVelocity = pMaximumVelocity;
}

float Vehicle::getLength() {
	return length;
}

float Vehicle::getMaximumVelocity() {
	return maximumVelocity;
}
