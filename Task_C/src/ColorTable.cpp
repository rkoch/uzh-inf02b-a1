/*
 *
 *  Created by Matthias Thöny.
 *  Updated by Rafael Ballester on 09.01.13.
 *  Copyright (c) 2013 Uni Zürich. All rights reserved.
 *
 *  Authored by Remo Koch
 *  Public repository at https://github.com/rkoch/uzh-inf02b-a1
 *
 */

#include <iostream>
#include <fstream>
#include "ColorTable.h"

using std::ifstream;
using std::string;

ColorTable::ColorTable() {

}

/*
 * 1) Implement reading a specific colortable given by a filename and put the color values in the color structure.
 */
void ColorTable::readColorTable(string filename) {
	ifstream colorFile(filename.c_str()); // open stream for given file

	string tname;
	int tr, tg, tb;
	int idx = 0;
	while ((idx < 8) && (colorFile >> tname >> tr >> tg >> tb)) {
		Color* color = new Color();
		color->name = tname;
		color->r = tr;
		color->g = tg;
		color->b = tb;
		colors[idx] = *color;
		idx++;
	}
}

/*
 * 2) look for a color
 */
bool ColorTable::getColor(string name, Color *foundColor) {
	for (int i = 0; i < 8; i++) {
		if (colors[i].name == name) {
			foundColor->name = colors[i].name;
			foundColor->r = colors[i].r;
			foundColor->g = colors[i].g;
			foundColor->b = colors[i].b;
			return true;
		}
	}

	return false;
}
