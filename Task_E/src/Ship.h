/*
 *  Ship.h
 *  task_3
 *
 *  Created by Matthias Thöny on 2/3/12.
 *  Copyright 2012 University of Zurich. All rights reserved.
 *
 *  Authored by Remo Koch
 *  Public repository at https://github.com/rkoch/uzh-inf02b-a1
 *
 */

#ifndef SHIP_H
#define SHIP_H

#include "Vehicle.h"

class Ship: public Vehicle {

public:
	Ship();

	int getNumberOfSeats();
	float getLength();

private:

	int number_of_seats;
	int number_of_passengers;
	float engineLength;

};

#endif
