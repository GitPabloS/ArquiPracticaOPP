#include "Animal.h"
Animal::Animal() {
}
Animal::~Animal() {

}
void Animal::llamar() {
	cin >> nombre;
	cout << nombre << " veni!..";
}