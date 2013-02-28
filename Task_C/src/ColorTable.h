/*
 *
 *  Created by Matthias Thöny on 2/3/12.
 *  Updated by Rafael Ballester on 09.01.13.
 *  Copyright (c) 2013 Uni Zürich. All rights reserved.
 *
 *  Authored by Remo Koch
 *  Public repository at https://github.com/rkoch/uzh-inf02b-a1
 *
 */

#ifndef COLORTABLE_H
#define COLORTABLE_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::string;

struct Color
{
	string name;
    int r, g, b;
};

class ColorTable
{
public:
	ColorTable();
    
    void readColorTable(string filename);
    bool getColor(string name, Color *foundColor);
    
private:
    Color colors[8];
};

#endif
