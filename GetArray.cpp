#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include<string>
#include"Fraction.h"
#include"GetArray.h"
#include"SetArray.h"
#include"DeleteArray.h"
#include"Print.h"
using namespace std;

void GetArray(int &den) {
	bool Exit = true;
	do {
		if (den > 0) {
			try {
				Fraction**frac1 = new Fraction*[den];
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
			Exit = false;
		}else if (den <= 0) {
			cout << "Only Non-Zero Positive Numbers" << endl;
			cout << "Enter New Denominator: ";
			cin >> den;
		}
		} while (Exit);
}
	