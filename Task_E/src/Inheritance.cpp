//
//  Authored by Remo Koch
//  Public repository at https://github.com/rkoch/uzh-inf02b-a1
//

#include <iostream>
#include "Car.h"
#include "Ship.h"
#include "AmphibicVehicle.h"

int main(int argc, const char * argv[]) {

	Car *myCar = new Car(true);
	Ship *myShip = new Ship();

	// 1)
	std::cout << "Vehicles velocity:" << std::endl;
	std::cout << "Car: " << myCar->getMaximumVelocity() << std::endl;
	std::cout << "Ship: " << myShip->getMaximumVelocity() << std::endl;
	std::cout << std::endl;

	// 2)
	std::cout << "Vehicles length:" << std::endl;
	std::cout << "Car: " << myCar->getLength() << std::endl;
	std::cout << "Ship: " << myShip->getLength() << std::endl;
	std::cout << std::endl;

	// 3)
	AmphibicVehicle *myAmphibicVehicle = new AmphibicVehicle(true);
	std::cout << "Amphibic vehicle: " << std::endl;
	std::cout << "Current mode: " << myAmphibicVehicle->printUsageMode() << std::endl;
	std::cout << "Change mode: " << myAmphibicVehicle->changeUsageMode() << std::endl;
	std::cout << "Current mode: " << myAmphibicVehicle->printUsageMode() << std::endl;
	std::cout << "Change mode: " << myAmphibicVehicle->changeUsageMode() << std::endl;
	std::cout << "Current mode: " << myAmphibicVehicle->printUsageMode() << std::endl;
	std::cout << std::endl;

	// 4)
	std::cout << "Car wheels:" << std::endl;
	std::cout << "Has summer wheels: " << myCar->hasSummerWheels() << std::endl;
	std::cout << std::endl;

	// free the memory
	// Hint: see the reference to the keyword delete
	// [1] http://www.cplusplus.com/doc/tutorial/dynamic/
	delete myCar;
	delete myShip;
	delete myAmphibicVehicle;

	return 0;
}
