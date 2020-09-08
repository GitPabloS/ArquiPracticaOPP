#include "Perro.h"

Perro::Perro() {
}
Perro::~Perro() {

}
void Perro::llamar() {
	cout << "inserte nombre del perro" << endl;
	Animal::llamar();
	cout << " perro hermoso" << endl;
}
void Perro::excavar() {
	cout << "Estoy excavando!" << endl;
}
void Perro::grito() {
	cout << "Bawau wuaf!" << endl;
}