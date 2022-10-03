#include<iostream>

using namespace std;

void fct1() {
	cout << "fct1" << endl;
}

double suma(double a, int b) {
	return a + b;
}


void fct2(int a, int b) {

	cout << "a = " << a << " b = " << b << endl;

	a = 200;
	b = 300;
}


void fct3(int& c, int& d) {

	cout << "c = " << c << " d = " << d << endl;

	c = 900;
	d = 1100;
}

void main() {
	cout << "merge" << endl << "\n";

	int a = 22, b = 34;
	fct2(a, b);
	cout << "a = " << a << " b = " << b << endl;


	fct3(a, b);
	cout << "a = " << a << " b = " << b << endl;
}