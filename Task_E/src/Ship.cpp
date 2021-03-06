//
//  Authored by Remo Koch
//  Public repository at https://github.com/rkoch/uzh-inf02b-a1
//

#include <iostream>
#include "Ship.h"

Ship::Ship()
		: Vehicle(15) {
	engineLength = 2;
	length = 10;
}

int Ship::getNumberOfSeats() {
	return 0;
}

float Ship::getLength() {
	return Vehicle::getLength() + engineLength;
}
