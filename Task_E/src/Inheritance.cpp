//
//  Authored by Remo Koch
//  Public repository at https://github.com/rkoch/uzh-inf02b-a1
//

#include <iostream>
#include "Car.h"
#include "Ship.h"
#include "AmphibicVehicle.h"

using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {

	Car *myCar = new Car(true);
	Ship *myShip = new Ship();

	// 1)
	cout << "Vehicles velocity:" << endl;
	cout << "Car: " << myCar->getMaximumVelocity() << endl;
	cout << "Ship: " << myShip->getMaximumVelocity() << endl;
	cout << endl;

	// 2)
	cout << "Vehicles length:" << endl;
	cout << "Car: " << myCar->getLength() << endl;
	cout << "Ship: " << myShip->getLength() << endl;
	cout << endl;

	// 3)
	AmphibicVehicle *myAmphibicVehicle = new AmphibicVehicle(true);
	cout << "Amphibic vehicle: " << endl;
	cout << "Current mode: " << myAmphibicVehicle->printUsageMode() << endl;
	cout << "Change mode: " << myAmphibicVehicle->changeUsageMode() << endl;
	cout << "Current mode: " << myAmphibicVehicle->printUsageMode() << endl;
	cout << "Change mode: " << myAmphibicVehicle->changeUsageMode() << endl;
	cout << "Current mode: " << myAmphibicVehicle->printUsageMode() << endl;
	cout << endl;

	// 4)
	cout << "Car wheels:" << endl;
	cout << "Has summer wheels: " << myCar->hasSummerWheels() << endl;
	cout << endl;

	// free the memory
	// Hint: see the reference to the keyword delete
	// [1] http://www.cplusplus.com/doc/tutorial/dynamic/
	delete myCar;
	delete myShip;
	delete myAmphibicVehicle;

	return 0;
}
