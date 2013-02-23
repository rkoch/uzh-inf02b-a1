/*
 * Basic Exercise - Algorithms and Datastructures
 * University of Zurich
 * Author: Genc Mazlami 09-923-061
 * Updated by Rafael Ballester on 10.01.13.
 * 
 * Authored by Remo Koch
 *
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>

//TASK 1)*************************************
int getSize(char* string) {
	return std::strlen(string);
}
//********************************************

//TASK 2)*************************************
void concatenate(char str1[], char str2[]) {
	int len = getSize(str1) + getSize(str2);
	char* buf = new char[len + 1]; // +1 for termination symbol

	std::strcat(buf, str1);
	std::strcat(buf, str2);
	std::cout << buf; // no endl because this is done in main

	delete buf; // delete after new
}
//********************************************

//TASK 3)*************************************
bool isPalindrome(std::string str) {
	std::string rev = std::string(str.rbegin(), str.rend());
	return str == rev;
}
//********************************************

//TASK 4)*************************************
void printShape(int level, char character) {
	for (int i = 0; i < level; i++) {
		std::cout << std::setfill(' ') << std::setw(level - i - 1) << "" << std::flush;
		std::cout << std::setfill(character) << std::setw(i * 2 + 1) << "" << std::endl;
	}
}
//********************************************

//If you want to make changes to the main-function to test your results, you can. But please comment out or delete your changes before
// submitting the exercise.
int main(int argc, char** argv) {

	//Testing task 1)
	std::cout << std::endl << std::endl;
	std::cout << "TASK 1)" << std::endl;
	std::cout << "---------------------" << std::endl;

	char example[] = "abcdef";
	std::cout << "The size of " << example << " is " << getSize(example);

	//Testing task 2)
	std::cout << std::endl << std::endl;
	std::cout << "TASK 2)" << std::endl;
	std::cout << "---------------------" << std::endl;

	char str1[] = "Let's concatenate this string ";
	char str2[] = "with this one.";
	concatenate(str1, str2);

	//Testing task 3)
	std::cout << std::endl << std::endl;
	std::cout << "TASK 3)" << std::endl;
	std::cout << "---------------------" << std::endl;

	std::string myString = "aabbcbbaa";
	if (isPalindrome(myString))
		std::cout << myString << " is a palindrome" << std::endl;
	else
		std::cout << myString << " is not a palindrome" << std::endl;
	myString = "aabcdaa";
	if (isPalindrome(myString))
		std::cout << myString << " is a palindrome" << std::endl;
	else
		std::cout << myString << " is not a palindrome" << std::endl;

	//Testing task 4)
	std::cout << std::endl << std::endl;
	std::cout << "TASK 4)" << std::endl;
	std::cout << "---------------------" << std::endl;

	printShape(9, '*');

	return 0;
}