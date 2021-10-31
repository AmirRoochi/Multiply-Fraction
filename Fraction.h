#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

class Fraction {
private:
	int numerator;
	int denominator;
	int WhNum;
	Fraction *Array;
public:
	//Fraction * Array = new Fraction[100];
	Fraction();
	Fraction(int n, int d);
	Fraction(int n, int d, int w);
	Fraction(const Fraction &obj);

	~Fraction();

	virtual int GetNum()const;
	inline int GetDen()const;
	inline int GetWhol()const;
	void Print() const;
	/*void printArray()const;*/

	void SetNum(int num);
	void SetDen(int den);
	void SetWho(int who);

	Fraction operator+(const Fraction &obj);
	Fraction operator*(const Fraction &obj);
	Fraction& operator[](int index);
	bool operator==(const Fraction &obj)const;
	

	friend istream &operator>>(istream  &input, Fraction &obj);
	friend ostream &operator<<(ostream &output, const Fraction &obj);
};
