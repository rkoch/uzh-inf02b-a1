/*
 * Basic Exercise - Algorithms and Datastructures
 * University of Zurich
 * Author: Genc Mazlami 09-923-061
 * Updated by Rafael Ballester on 10.01.13.
 * 
 * Authored by Remo Koch
 * Public repository at https://github.com/rkoch/uzh-inf02b-a1
 *
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>

using std::string;
using std::strlen;
using std::strcat;
using std::strcpy;
using std::cout;
using std::endl;
using std::flush;
using std::setfill;
using std::setw;

//TASK 1)*************************************
int getSize(char* string) {
	return strlen(string);
}
//********************************************

//TASK 2)*************************************
void concatenate(char str1[], char str2[]) {
	int len = getSize(str1) + getSize(str2);
	char* buf = new char[len + 1]; // +1 for termination symbol

	strcpy(buf, str1);
	strcat(buf, str2);
	cout << buf; // no endl because this is done in main

	delete buf; // delete after new
}
//********************************************

//TASK 3)*************************************
bool isPalindrome(string str) {
	string rev = string(str.rbegin(), str.rend());
	return str == rev;
}
//********************************************

//TASK 4)*************************************
void printShape(int level, char character) {
	for (int i = 0; i < level; i++) {
		cout << setfill(' ') << setw(level - i - 1) << "" << flush;
		cout << setfill(character) << setw(i * 2 + 1) << "" << endl;
	}
}
//********************************************

//If you want to make changes to the main-function to test your results, you can. But please comment out or delete your changes before
// submitting the exercise.
int main(int argc, char** argv) {

	//Testing task 1)
	cout << endl << endl;
	cout << "TASK 1)" << endl;
	cout << "---------------------" << endl;

	char example[] = "abcdef";
	cout << "The size of " << example << " is " << getSize(example);

	//Testing task 2)
	cout << endl << endl;
	cout << "TASK 2)" << endl;
	cout << "---------------------" << endl;

	char str1[] = "Let's concatenate this string ";
	char str2[] = "with this one.";
	concatenate(str1, str2);

	//Testing task 3)
	cout << endl << endl;
	cout << "TASK 3)" << endl;
	cout << "---------------------" << endl;

	string myString = "aabbcbbaa";
	if (isPalindrome(myString))
		cout << myString << " is a palindrome" << endl;
	else
		cout << myString << " is not a palindrome" << endl;
	myString = "aabcdaa";
	if (isPalindrome(myString))
		cout << myString << " is a palindrome" << endl;
	else
		cout << myString << " is not a palindrome" << endl;

	//Testing task 4)
	cout << endl << endl;
	cout << "TASK 4)" << endl;
	cout << "---------------------" << endl;

	printShape(9, '*');

	return 0;
}
