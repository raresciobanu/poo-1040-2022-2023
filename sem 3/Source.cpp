#include<iostream>
#include<string>

using namespace std;

enum GEN { FEMEIE, BARBAT = 3, NECUNOSCUT = 20 };

//private/protected/public
class Student {
	//by default totul e private de aici in jos
	const int ID_MATRICOL;
	GEN gen;

	int nrNote;
	double* note;
public:
	char* nume;
	int varsta = 22;
	string telefon = "0763 803 909";


	//constr. default
	Student() :ID_MATRICOL(333) {
		this->nume = new char[strlen("Anonim") + 1];
		strcpy_s(this->nume, strlen("Anonim") + 1, "Anonim");

		this->varsta = 20;
		this->telefon = "0769 769 896";
		this->gen = FEMEIE;

		this->nrNote = 0;
		this->note = nullptr;
	}

	Student(int idMatricol, GEN gen, int nrNote, double* note,
		const char* nume, int varsta, string telefon) :ID_MATRICOL(idMatricol) {

		this->gen = gen;
		this->nrNote = nrNote;

		this->note = new double[nrNote];
		for (int i = 0; i < nrNote; i++) {
			this->note[i] = note[i];
		}

		this->nume = new char[strlen(nume) + 1];
		strcpy_s(this->nume, strlen(nume) + 1, nume);

		this->varsta = varsta;

		this->telefon = telefon;
	}


	Student(GEN gen, int nrNote, double* note) :ID_MATRICOL(222) {
		this->gen = gen;

		this->nrNote = nrNote;

		this->note = new double[nrNote];
		for (int i = 0; i < nrNote; i++) {
			this->note[i] = note[i];
		}


		this->nume = new char[strlen("Anonim") + 1];
		strcpy_s(this->nume, strlen("Anonim") + 1, "Anonim");

		this->telefon = "0786332329";
		this->varsta = 39;
	}

	int getIdMatricol() {
		return this->ID_MATRICOL;
	}

	int getVarsta() {
		return this->varsta;
	}

	char* getNume() {
		return this->nume;
	}

	string getTelefon() {
		return this->telefon;
	}

	GEN getGen() {
		return this->gen;
	}

	int getNrNote() {
		return this->nrNote;
	}

	double* getNote() {
		return this->note;
	}

	void afisare() {
		cout << "id matricol: " << ID_MATRICOL << endl;

		cout << "nume: " << nume << endl;
		cout << "gen: " << gen << endl;
		cout << "varsta: " << varsta << endl;
		cout << "telefon: " << telefon << endl;
		cout << "nrNote: " << nrNote << endl;
		cout << "note: ";
		for (int i = 0; i < nrNote; i++) {
			cout << note[i] << " ";
		}

		cout << endl << endl;
	}
};

void main() {
	Student s1, s2, s3;

	double note1[2] = { 7.7,8.5 };
	Student s4(FEMEIE, 2, note1);
	double note2[3] = { 3.7,9.5, 6.5 };

	Student s5(1000, GEN::BARBAT, 3, note2, "Marcel Popescu", 22, "0793 788 333");

	s1.afisare();
	s2.afisare();
	s3.afisare();

	s4.afisare();
	s5.afisare();
}