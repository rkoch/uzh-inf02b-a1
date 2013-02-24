/*
 *  Wheel.h
 *  task_3
 *
 *  Created by Matthias Thöny on 2/3/12.
 *  Copyright 2012 University of Zurich. All rights reserved.
 *
 *  Authored by Remo Koch
 *  Public repository at https://github.com/rkoch/uzh-inf02b-a1
 *
 */

#ifndef WHEEL_H
#define WHEEL_H

#include "Wheel.h"

class Wheel {

public:
	Wheel(bool);
	~Wheel();

	float size();
	bool isSummerWheel();

private:

	bool model;
	float size_in_inches;

};

#endif
