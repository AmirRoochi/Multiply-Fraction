#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include<string>
#include"Fraction.h"
#include"SetArray.h"
using namespace std;

void SetArray(Fraction **Array, Fraction *Frac,int &den) {
	Frac->SetDen(den);

	for (int i = 0; i < den; i++) {
		Frac->SetNum(i);
		Array[0][i] = *Frac;
	}
	for (int i = 0; i < den; i++) {
		Frac->SetNum(i);
		Array[i][0] = *Frac;

	}
	for (int i = 1; i < den; i++) {
		for (int j = 1; j < den; j++) {
		Array[i][j] = Array[0][j] * Array[i][0];
			
		}
	}
	
}