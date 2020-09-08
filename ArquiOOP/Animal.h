#pragma once
#include <iostream>
#include <string>
using namespace std;
class Animal
{
private:
	int edad;
	string nombre;
	string raza;
public:
	Animal();
	~Animal();
	void llamar();
	virtual void grito()=0;
};

