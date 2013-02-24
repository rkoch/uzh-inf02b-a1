/*
 *  Vehicle.h
 *  task_3
 *
 *  Created by Matthias Thöny on 2/3/12.
 *  Copyright 2012 University of Zurich. All rights reserved.
 *
 *  Authored by Remo Koch
 *  Public repository at https://github.com/rkoch/uzh-inf02b-a1
 *
 */

#ifndef VEHICLE_H
#define VEHICLE_H

#include "Vehicle.h"

class Vehicle {

public:
	// Notice:
	// Instead of messing with the constructor you could change the member maximumVelocity to protected or add
	// a protected setter for this. On the other side on messing with the constructor you assure that the member
	// maximum velocity is always set on creating a new instance.
	Vehicle(float);

	float getLength();
	float getMaximumVelocity();

protected:

	float length;

private:
	float maximumVelocity;

};

#endif
