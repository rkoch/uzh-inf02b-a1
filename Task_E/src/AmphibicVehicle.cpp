/*
 *  AmphibicVehicle.cpp
 *
 *  Authored by Remo Koch
 *
 */
#include <iostream>
#include <string>
#include "AmphibicVehicle.h"

AmphibicVehicle::AmphibicVehicle(bool pPutSummerWheels)
		: Car(pPutSummerWheels), Ship() {

	mUsageMode = car;          // Initial usage mode is car
}

std::string AmphibicVehicle::printUsageMode() {
	if (mUsageMode == car) {
		return "Car";
	}
	return "Ship";
}

std::string AmphibicVehicle::changeUsageMode() {
	if (mUsageMode == car) {
		mUsageMode = ship;
		return "Car -> Ship";
	} else {
		mUsageMode = car;
		return "Ship -> Car";
	}
}