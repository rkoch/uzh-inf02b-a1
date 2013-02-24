//
//  house.cpp
//  House_Buying
//
//  Created by Fabian Hofstetter on 07.02.12.
//  Copyright 2012 Universität Zürich. All rights reserved.
//
//  Authored by Remo Koch
//  Public repository at https://github.com/rkoch/uzh-inf02b-a1
//

#include <iostream>
#include "House.h"

/*
 * 5) constructor inherited from House.h
 */
House::House(int rooms_, int squareMeters_, double price_, std::string street_, std::string roadNumber_, std::string postalCode_, std::string city_) {
	rooms = rooms_;
	squareMeters = squareMeters_;
	price = price_;
	street = street_;
	roadNumber = roadNumber_;
	postalCode = postalCode_;
	city = city_;
}

/*
 * 5b) destructor
 */
House::~House() {
	// Nothing to do
}

int House::getRooms() {
	return rooms;
}

int House::getSquareMeters() {
	return squareMeters;
}

float House::getPrice() {
	return price;
}

/*
 * 3) return a string with a address in it
 */
std::string House::getAddress() {
	std::string ret;

	ret += street + " " + roadNumber + "\n";
	ret += postalCode + " " + city + "\n";

	return ret;
}
