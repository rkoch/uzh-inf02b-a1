//
//  Authored by Remo Koch
//  Public repository at https://github.com/rkoch/uzh-inf02b-a1
//

#include <iostream>
#include "Wheel.h"

Wheel::Wheel(bool isSummerWheel) {
	size_in_inches = 25.4f;
	model = isSummerWheel;
}

Wheel::~Wheel() {

}

float Wheel::size() {
	return size_in_inches;
}

bool Wheel::isSummerWheel() {
	return model;
}
