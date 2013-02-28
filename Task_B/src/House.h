//
//  house.h
//  House_Buying
//
//  Created by Fabian Hofstetter on 07.02.12.
//  Updated by Rafael Ballester on 09.01.13.
//  Copyright 2013 Universität Zürich. All rights reserved.
//
//  Authored by Remo Koch
//  Public repository at https://github.com/rkoch/uzh-inf02b-a1
//

#include <string>

using std::string;

#ifndef Test_house_h
#define Test_house_h


class House{
public:
    House(int rooms_, int squareMeters_, double price_, string street_, string roadNumber_, string postalCode_, string city_);
    /*
     * 5b) declare a destructor
     */
    ~House();
    int getRooms();
    int getSquareMeters();
    float getPrice();
    string getAddress();
    
private:
    string street;
    string roadNumber;
    string postalCode;
    string city;
    int rooms;
    int squareMeters;
    double price;
    
};


#endif
