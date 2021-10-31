#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
#include"Fraction.h"

#ifndef Fraction_h
#define Fraction_h
#endif // !Fraction_h
using namespace std;



Fraction::Fraction() {
	numerator = 0;
	denominator = 1;
	WhNum = 0;
	//cout << "object Created" << endl;
}
Fraction::Fraction(int n, int d) {
	SetNum(n);
	SetDen(d);
	WhNum = 0;
}
Fraction::Fraction(int w, int n, int d) {
	SetNum(n);
	SetDen(d);
	SetWho(w);
}
Fraction::~Fraction() {
	numerator = 0;
	denominator = 1;
	WhNum = 0;
	//cout << "object Destroyed" << endl;
}
Fraction::Fraction(const Fraction &obj) {
	numerator = obj.numerator;
	denominator = obj.denominator;
	WhNum = obj.WhNum;
}
int Fraction::GetNum()const {
	return numerator;
}
int Fraction::GetDen()const {
	return denominator;
}
int Fraction::GetWhol()const {
	return WhNum;
}
void Fraction::SetNum(int num) {
	if (num < 0) {
		cout << "Only Positive Numbers Are Allowed" << endl;
		num = abs(num);
	}
	numerator = num;
}
void Fraction::SetDen(int den) {
	if (den == 0) {
		cout << "Denominator can not be Zero" << endl;
		den = 1;
	}
	else if (den < 0) {
		cout << "Only Positive Numbers Are Allowed" << endl;
		den = -den;
	}
	denominator = den;
}
void Fraction::SetWho(int who) {
	if (who < 0) {
		cout << "Only Positive Numbers Are Allowed" << endl;
		who = -who;
	}
	WhNum = who;
}
void Fraction::Print() const {
	if (WhNum != 0) {
		cout << WhNum << " ";

	}
	cout << numerator << "/" << denominator;
}
//void Fraction::printArray()const {
//	for (int i = 0; i < 100; i++)
//		cout << Array[i] << endl;
//}


Fraction Fraction::operator+(const Fraction &obj) {
	Fraction temp;
	if (this->WhNum == 0 && obj.WhNum == 0) {
		temp.denominator = this->denominator*obj.denominator;
		temp.numerator = (this->denominator*obj.numerator) + (this->numerator*obj.denominator);
	}
	else if (this->WhNum != 0 && obj.WhNum != 0) {
		int TempNum;
		int TempNum2;
		TempNum = (this->WhNum*this->denominator) + this->numerator;
		TempNum2 = (obj.WhNum*obj.denominator) + obj.numerator;
		temp.denominator = this->denominator*obj.denominator;
		temp.numerator = (this->denominator*TempNum2) + (TempNum*obj.denominator);
	}
	else if (this->WhNum == 0 && obj.WhNum != 0) {
		int TempNum;
		TempNum = (obj.WhNum*obj.denominator) + obj.numerator;
		temp.denominator = this->denominator*obj.denominator;
		temp.numerator = (this->denominator*TempNum) + (this->numerator*obj.denominator);
	}
	else if (this->WhNum != 0 && obj.WhNum == 0) {
		int TempNum;
		TempNum = (this->WhNum*this->denominator) + this->numerator;
		temp.denominator = this->denominator*obj.denominator;
		temp.numerator = (this->denominator*obj.numerator) + (TempNum*obj.denominator);
	}
	return temp;
}
Fraction Fraction::operator*(const Fraction &obj) {
	Fraction temp;
	if (this->WhNum == 0 && obj.WhNum == 0) {
		temp.denominator = this->denominator*obj.denominator;
		temp.numerator = this->numerator*obj.numerator;
	}
	else if (this->WhNum != 0 && obj.WhNum != 0) {
		int TempNum;
		int TempNum2;
		TempNum = (this->WhNum*this->denominator) + this->numerator;
		TempNum2 = (obj.WhNum*obj.denominator) + obj.numerator;
		temp.denominator = this->denominator*obj.denominator;
		temp.numerator = (TempNum*TempNum2);
	}
	else if (this->WhNum == 0 && obj.WhNum != 0) {
		int TempNum;
		TempNum = (obj.WhNum*obj.denominator) + obj.numerator;
		temp.denominator = this->denominator*obj.denominator;
		temp.numerator = this->numerator*TempNum;
	}
	else if (this->WhNum != 0 && obj.WhNum == 0) {
		int TempNum;
		TempNum = (this->WhNum*this->denominator) + this->numerator;
		temp.denominator = this->denominator*obj.denominator;
		temp.numerator = TempNum * obj.numerator;
	}
	return temp;
}
Fraction &Fraction::operator[](int index){
	return Array[index];
}
bool Fraction::operator==(const Fraction &obj)const {
	return (WhNum*denominator + numerator)*obj.denominator == (obj.WhNum*obj.denominator + obj.numerator)*denominator;
}
//Fraction Fraction::operator[](int index) {
//	return Array[index];
//}
ostream &operator<<(ostream &output, const Fraction &obj) {
	if (obj.WhNum != 0) {
		output << obj.WhNum ;

	}
	output << obj.numerator << "/" << obj.denominator;
	return output;
}
istream &operator>>(istream  &input, Fraction &obj) {
	int w, n, d;
	cout << "Enter WholeNumber, Numerator and denominator:" << endl;
	input >> w >> n >> d;
	obj.SetWho(w);
	obj.SetNum(n);
	obj.SetDen(d);
	return input;
}