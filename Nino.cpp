/*
 * Nene.cpp
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#include "Nino.h"
#include "Objeto.h"

Nino::Nino() {
	//constructor por defecto
}

Nino::Nino(string nombre, int edad, string direccion, string telefono) {
	this->nombre = nombre;
	this->edad = edad;
	this->direccion = direccion;
	this->telefono = telefono;
}

Nino::~Nino() {
	// destructor por defecto
	// romper link con objetos en prestamo
}

string Nino::getNombre() {
	return this->nombre;
}

void Nino::pedirObjeto(Objeto* objeto) {

	if (objeto->estaPrestado()) {
		if (objeto->perteneceA() == this) {
			cout
				<< "El objeto ["
				<< objeto->getNombre()
				<< "] ya pertenece a "
				<< this->getNombre()
				<< "." << endl;
		} else {
			cout
				<<"El objeto ["
				<< objeto->getNombre()
				<<"] ya ha sido tomado por otro niño."
				<< endl;
		}
	} else {
		this->objetosEnPrestamo.insert(objeto);
		objeto->setPrestadoA(this);
	}

}

set<string> Nino::listarObjetosPrestados() {
	set<string> objetosPrestados;

	for (Objeto* ptrObj : this->objetosEnPrestamo) {
		objetosPrestados.insert(ptrObj->toString());
	}

	return objetosPrestados;
}

/*
ostream& operator<<(ostream& os, set<string> objetosPrestados) {

	string st = "";

	for (string str : objetosPrestados) {
		st += str;
	}

	os << "Objetos prestados: \n" << st << endl;

	return os;
}
*/
