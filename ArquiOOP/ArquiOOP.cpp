// ArquiOOP.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
int main()
{
	Perro fido;
	fido.llamar();
	fido.excavar();
	fido.grito();
	cout << "\n";
	Gato gato;
	gato.llamar();
	gato.serCretino();
	gato.grito();
    //std::cout << "Hello World!\n";
}
