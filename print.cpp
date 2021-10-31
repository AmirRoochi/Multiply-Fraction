#include"Fraction.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include<string>
#include"Print.h"
using namespace std;





void PrintArray(Fraction **Arr, int &den) {
	
	for (int i = 0; i < den; i++) {
		
		for (int j = 0; j < den; j++) {
			
			cout <<right<< Arr[i][j]<<'\t';
			
		}
		cout <<'\n';
		
	}
}