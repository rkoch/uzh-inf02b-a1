//
//  main.cpp
//  House_Buying
//
//  Created by Fabian Hofstetter on 07.02.12.
//  Adapted and updated by Rafael Ballester on 09.01.13.
//  Copyright 2013 Universität Zürich. All rights reserved.
//
//  Authored by Remo Koch
//  Public repository at https://github.com/rkoch/uzh-inf02b-a1
//

#include <iostream>
#include <cmath>
#include "House.h"

using std::cout;
using std::endl;
using std::sqrt;

struct Desires {
	int rooms;
	int squareMeters;
	double price;
};

bool checkRooms(House* myHouse, Desires myDesire);
bool checkSquareMeters(House* myHouse, Desires myDesire);
void printHouseDescription(House* myHouse);
bool checkPrice(House* myHouse, Desires myDesire);

int main(int argc, const char * argv[]) {

	House dreamHouse(5, 1200, 25000.55, "Musterstrasse", "4", "8050", "Zürich");
	printHouseDescription(&dreamHouse);

	/*
	 * 5c) declare a Desires instance called "myDesire" in the heap. Remember
	 *     to delete it later, when it is no longer needed
	 */
	Desires* myDesire = new Desires();
	myDesire->rooms = 2;
	myDesire->squareMeters = 1000;
	myDesire->price = 750000.00;

	if (checkRooms(&dreamHouse, *myDesire) && checkPrice(&dreamHouse, *myDesire)) {
		printHouseDescription(&dreamHouse);
	}

	/*
	 * 5c) Delete myDesire when it's no longer needed.
	 */
	delete myDesire;

	return 0;
}

/*
 * 1) this method should check, if there are enough rooms in the house
 */
bool checkRooms(House* myHouse, Desires myDesire) {
	return myHouse->getRooms() >= myDesire.rooms;
}

/*
 * 2) this method should check, if the price isn't too high
 */
bool checkPrice(House* myHouse, Desires myDesire) {
	return myHouse->getPrice() <= myDesire.price;
}

/*
 * 4) this method should calculate the perimeter of the house,
 * supposing it has a square shape
 */
float getPerimeter(House* myHouse) {
	return sqrt(myHouse->getSquareMeters()) * 4;
}

/*
 * 6) this method should print out a short description about the given house
 */
void printHouseDescription(House* myHouse) {
	cout << "Address:" << endl;
	cout << myHouse->getAddress() << endl;
	cout << "Rooms: " << myHouse->getRooms() << endl;
	float perimeter = getPerimeter(myHouse);
	cout << "Space: " << myHouse->getSquareMeters() << " (Perimeter: " << perimeter << ")" << endl;
	cout << "Price: " << myHouse->getPrice() << endl;
}
