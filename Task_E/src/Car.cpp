//
//  Authored by Remo Koch
//

#include <iostream>
#include "Car.h"

Car::Car(bool putSummerWheels)
		: Vehicle(10) {
	length = 10;
	for (int i = 0; i < 4; i++) {          // Create wheels
		wheels[i] = new Wheel(putSummerWheels);
	}
}

Car::~Car() {
	delete[] wheels;
}

int Car::getNumberOfSeats() {
	return number_of_seats;
}

bool Car::hasSummerWheels() {
	for (int i = 0; i < 4; i++) {
		if (!wheels[i]->isSummerWheel()) {
			return false;
		}
	}
	return true;
}

float Car::getLength() {
	// As this getLength() has no special modifications you could remove it from
	// Car.h and use the inherited one from Vehicle.h instead. (Then you would not need to
	// implement the method in Car.cpp)
	return Vehicle::getLength();
}
