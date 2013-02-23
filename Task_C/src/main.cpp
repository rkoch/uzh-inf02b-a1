//
//  main.cpp
//  ColorTable
//
//  Created by Mathias Thöny on 15.02.12.
//  Updated by Rafael Ballester on 09.01.13.
//  Copyright (c) 2013 Uni Zürich. All rights reserved.
//
//  Authored by Remo Koch
//

#include <iostream>
#include "ColorTable.h"

int main(int argc, const char * argv[]) {
	ColorTable* colorTable = new ColorTable();
	/*
	 * 3) read the table, then allow the user to interactively query colors
	 */
	colorTable->readColorTable("src/colors.txt");

	bool quit = false;
	std::string input;
	while (!quit) {
		std::cout << "Please enter a color name: ";
		std::cin >> input;

		Color* foundColor = new Color();
		if (input == "quit") {
			quit = true;
		} else if (colorTable->getColor(input, foundColor)) {
			std::cout << foundColor->name << " = (" << foundColor->r << ", " << foundColor->g << ", " << foundColor->b << ")" << std::endl;
		} else {
			std::cout << "Could not find color \"" << input << "\"" << std::endl;
		}
	}

	std::cout << "Thanks and goodbye!" << std::endl;

	delete colorTable;
	return 0;
}
