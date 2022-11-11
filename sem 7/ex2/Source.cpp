#include<iostream>


using namespace std;

class ABC {

};

class Electrocasnice {
	//has A vector of ABC - compunere
	ABC* vector;
};

//is A Electrocasnice - mostenire
class Televizor :Electrocasnice {

};

//is A Electrocasnice - mostenire
class Frigider :Electrocasnice {

};