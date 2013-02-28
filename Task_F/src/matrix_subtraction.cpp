/*
 *  Created by Radhika Garg on 14/03/12.
 *  Updated by Rafael Ballester on 10/01/13.
 *  Copyright 2013 University of Zurich. All rights reserved.
 *
 *  Authored by Remo Koch
 *  Public repository at https://github.com/rkoch/uzh-inf02b-a1
 *
 */

#include <iostream>
#include "matrix_subtraction.h"

using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main() {
	int **r, **p, **q, row1, row2, col1, col2;
	cout << "Matrix Subtraction Program: \n";
	cout << "Enter the number of rows for the first matrix: ";
	cin >> row1;
	cout << "Enter the number of columns for the first matrix: ";
	cin >> col1;
	cout << "Enter the number of rows for the second matrix: ";
	cin >> row2;
	cout << "Enter the number of columns for the second matrix: ";
	cin >> col2;
	if (col1 != col2 || row1 != row2) {
		cout << "Subtraction not possible (size mismatch)";
		return 0;
	}
	initialiseMemory(p, row1, col1);
	initialiseMemory(q, row2, col2);
	p[0][0] = 3;          // TODO: what the hell is that doing here?
	fill(p, row1, col1);
	fill(q, row2, col2);
	r = subtractMatrices(p, q, row1, col1);
	cout << "First matrix: " << endl;
	display(p, row1, col1);
	cout << "Second matrix: " << endl;
	display(q, row2, col2);
	cout << "Subtraction result: " << endl;
	display(r, row1, col2);
	deallocateMemory(p, row1, col1);
	deallocateMemory(q, row2, col2);
	deallocateMemory(r, row1, col2);
	cout << "Deallocation completed." << endl;
	cout << "Program finished." << endl;
}

// Task 1)
void initialiseMemory(int **&x, int row, int col) {
	x = new int*[row];
	for (int i = 0; i < row; i++) {
		x[i] = new int[col];
		for (int j = 0; j < col; j++) {
			x[i][j] = 0;
		}
	}
}

void fill(int **&x, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Enter element (" << i << "," << j << "): ";
			cin >> x[i][j];
			cerr << "We did it " << endl;
		}
	}
}

// Task 2)
int **subtractMatrices(int **x, int **y, int row, int col) {
	int** ret;
	initialiseMemory(ret, row, col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			ret[i][j] = x[i][j] - y[i][j];
		}
	}

	return ret;
}

void display(int **val, int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++)
			cout << val[i][j] << " ";
		cout << endl;
	}
}

// Task 3)
void deallocateMemory(int **&val, int x, int y) {
	for (int i = 0; i < x; i++) {
		delete[] val[i];
	}
	delete[] val;
}
