#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include<string>
#include"Fraction.h"
using namespace std;

void DeleteArray(Fraction**Array, Fraction *Frac, int &den) {
	for (int i = 0; i < den; ++i) {
		delete[] Array[i];
	}
	delete[] Array;
	delete Frac;
	cout << "Array Deleted!" << endl;
}