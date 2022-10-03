#include<iostream>

using namespace std;

typedef struct {
	int varsta;
	char nume[100];
	double salariu;
} angajat;


void main() {
	angajat a;
	strcpy_s(a.nume, "Ion Popescu");
	a.salariu = 3500.99;
	a.varsta = 39;

	cout << a.nume << " " << a.varsta << " " << a.salariu << "\n\n";


	int x = 66;
	cout << "Adresa VARIABILEI X este: " << &x << endl;

	cout << "================\n\n";

	int* px = &x; //acest pointer px va pointa catre o variabila de pe stack -> NU AI VOIE sa o dezaloci!
	cout << "Adresa variabilei pointer PX este: " << &px << endl;

	cout << "Valoarea lui PX este: " << px << endl;

	cout << "Ce se afla la adresa valorii pointer-ului PX: " << *px << endl; //indirectare

	

	int* py = new int(20);//se creaza pe heap o zona de memorie ce contine variabila 20
	cout << "valoarea din variabila py" << py << endl;
	cout << "py = "<< *py << endl;
	delete py;


	//vectori

	int k[100];

	cout << "afisare adresa vector k = " << &k << endl;
	cout << "afisare adresa k[0] = " << &k[0] << endl;
}