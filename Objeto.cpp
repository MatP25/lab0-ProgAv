/*
 * Objeto.cpp
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#include "Objeto.h"

Objeto::Objeto() {
	//constructor por defecto
}

Objeto::~Objeto() {
	//destructor por defecto
	//romper link con nino
}

string Objeto::estadoToString(){
	if (this->condicion == Nuevo) {
		return "Nuevo";
	} else if (this->condicion == BienConservado) {
		return "Bien Conservado";
	} else if (this->condicion == Roto) {
		return "Roto";
	}
	return "Error: sin estado";
}

string Objeto::getNombre() {
	return this->nombre;
}

bool Objeto::estaPrestado() {
	return this->prestadoA != nullptr;
}

void Objeto::setPrestadoA(Nino* prestadoA) {
	this->prestadoA = prestadoA;
}

Nino* Objeto::perteneceA() {
	return this->prestadoA;
}
