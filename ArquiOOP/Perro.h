#pragma once
#include "Animal.h"
class Perro : public Animal
{
public:
	Perro();
	~Perro();
	void llamar();
	void excavar();
	void grito();
};

