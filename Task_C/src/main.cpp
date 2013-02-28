//
//  main.cpp
//  ColorTable
//
//  Created by Mathias Thöny on 15.02.12.
//  Updated by Rafael Ballester on 09.01.13.
//  Copyright (c) 2013 Uni Zürich. All rights reserved.
//
//  Authored by Remo Koch
//  Public repository at https://github.com/rkoch/uzh-inf02b-a1
//

#include <iostream>
#include "ColorTable.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
	ColorTable* colorTable = new ColorTable();
	/*
	 * 3) read the table, then allow the user to interactively query colors
	 */
	colorTable->readColorTable("src/colors.txt");

	bool quit = false;
	string input;
	while (!quit) {
		cout << "Please enter a color name: ";
		cin >> input;

		Color* foundColor = new Color();
		if (input == "quit") {
			quit = true;
		} else if (colorTable->getColor(input, foundColor)) {
			cout << foundColor->name << " = (" << foundColor->r << ", " << foundColor->g << ", " << foundColor->b << ")" << endl;
		} else {
			cout << "Could not find color \"" << input << "\"" << endl;
		}
	}

	cout << "Thanks and goodbye!" << endl;

	delete colorTable;
	return 0;
}
