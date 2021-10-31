#include"Fraction.h"
#include"Print.h"
#include"SetArray.h"
#include"GetArray.h"
#include"DeleteArray.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include<string>
using namespace std;

int main() {
	cout << "Enter Denominator: " << endl;
	int den;
	cin >> den;
	GetArray(den);
}

//Enter Denominator :
//-7
//Only Positive Numbers
//Enter New Denominator : 7
//0 / 7     1 / 7     2 / 7     3 / 7     4 / 7     5 / 7     6 / 7
//1 / 7     1 / 49    2 / 49    3 / 49    4 / 49    5 / 49    6 / 49
//2 / 7     2 / 49    4 / 49    6 / 49    8 / 49    10 / 49   12 / 49
//3 / 7     3 / 49    6 / 49    9 / 49    12 / 49   15 / 49   18 / 49
//4 / 7     4 / 49    8 / 49    12 / 49   16 / 49   20 / 49   24 / 49
//5 / 7     5 / 49    10 / 49   15 / 49   20 / 49   25 / 49   30 / 49
//6 / 7     6 / 49    12 / 49   18 / 49   24 / 49   30 / 49   36 / 49
//Array Deleted!
//Press any key to continue . . .






















	//Fraction frac1[7][7];
	//Fraction frac2;
	//frac2.SetDen(7);
	//int n=0;
	//for (int i = 0; i < 7; i++) {
	//	frac2.SetNum(i);
	//	frac1[n][i] = frac2;
	//	//cout << frac1[n][i] << endl;
	//}
	//for (int i = 0; i < 7; i++) {
	//	frac2.SetNum(i);
	//	frac1[i][n] = frac2;
	//	//cout << frac1[i][n] << endl;
	//}
	//for (int i = 1; i < 7; i++) {
	//	for (int j = 1; j < 7; j++) {
	//		frac1[i][j] = frac1[0][j] * frac1[i][0];
	//		//cout << frac1[i][j] << endl;
	//	}
	//}
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < 7; j++) 
	//		//frac1[i][j] = frac1[0][j] * frac1[i][0];
	//		cout <<" "<< frac1[i][j];
	//}
	/*frac2->SetDen(den);

	for (int i = 0; i < den; i++) {
	frac2->SetNum(i);
	frac1[0][i] = *frac2;
	}
	for (int i = 0; i < 7; i++) {
	frac2->SetNum(i);
	frac1[i][0] = *frac2;

	}
	for (int i = 1; i < 7; i++) {
	for (int j = 1; j < 7; j++) {
	frac1[i][j] = frac1[0][j] * frac1[i][0];

	}
	}*/
	/*for (int i = 0; i < 7; i++) {
	for (int j = 0; j < 7; j++) {
	cout << " " << frac1[i][j];
	}
	cout << endl;
	}*/
	//Enter Denominator :
	//7
	//0 / 7     1 / 7     2 / 7     3 / 7     4 / 7     5 / 7     6 / 7
	//1 / 7     1 / 49    2 / 49    3 / 49    4 / 49    5 / 49    6 / 49
	//2 / 7     2 / 49    4 / 49    6 / 49    8 / 49    10 / 49   12 / 49
	//3 / 7     3 / 49    6 / 49    9 / 49    12 / 49   15 / 49   18 / 49
	//4 / 7     4 / 49    8 / 49    12 / 49   16 / 49   20 / 49   24 / 49
	//5 / 7     5 / 49    10 / 49   15 / 49   20 / 49   25 / 49   30 / 49
	//6 / 7     6 / 49    12 / 49   18 / 49   24 / 49   30 / 49   36 / 49
	//Press any key to continue . . .
	/*try {
	Fraction**frac1 = new (nothrow)Fraction*[den];
	for (int i = 0; i < den; i++) {
	frac1[i] = new Fraction[den];
	}


	Fraction *frac2 = new Fraction;
	frac2->SetDen(den);
	SetArray(frac1, frac2, den);
	PrintArray(frac1, den);
	DeleteArray(frac1, frac2, den);

	}
	catch (bad_alloc err)
	{
	cout << "Memory Allocation Failed!" << endl;
	}
	*/
