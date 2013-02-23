//
//  Authored by Remo Koch
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
