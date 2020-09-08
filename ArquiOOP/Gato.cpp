#include "Gato.h"

Gato::Gato() {
}
Gato::~Gato() {

}
void Gato::llamar() {
	cout << "inserte nombre del gato" << endl;
	Animal::llamar();
	cout << "gato maldito" << endl;
}
void Gato::serCretino() {
	cout << "Creo que voy a tirar tu taza al piso" << endl;
}
void Gato::grito() {
	cout << "Meow... si soy aburrido" << endl;
}