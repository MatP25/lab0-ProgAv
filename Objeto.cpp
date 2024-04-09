/*
 * Objeto.cpp
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#include "Objeto.h"

Objeto::Objeto() {
	// TODO Auto-generated constructor stub

}

Objeto::~Objeto() {
	// TODO Auto-generated destructor stub
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
