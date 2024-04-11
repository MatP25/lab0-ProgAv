/*
 * Biblioteca.cpp
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#include "Biblioteca.h"
#include "JuegoDeMesa.h"
#include "Libro.h"
class Nino;
class Objeto;

Biblioteca::Biblioteca() {
	Objeto* objetos[] = {
		new Libro("Las Malas",2022,Nuevo,"Camila Sosa Villada",240),
		new Libro("Nacidos en la bruma: El imperio final",2022,Roto,"Brandon Sanderson",688),
		new Libro("El cocodrilo al que no le gustaba el agua",2016,Roto,"Gemma Merino",32),
		new JuegoDeMesa("Juego Uno",7,Roto,2022,10),
		new JuegoDeMesa("Mazo de Cartas",7,Nuevo,2019,4),
		new JuegoDeMesa("Dados",2,Roto,2020,6)
	};

	Nino* ninos[] = {
		new Nino("Maria Laura", 10, "Nueva Palmira 1521", "099298190"),
		new Nino("Alex", 5, "Humberto Primo 1501", "29094141")
	};

	for (int i = 0; i<6; i++) {
		this->insertarNuevoObjeto(objetos[i]);
	}
	for (int i = 0; i < 2; i++) {
		this->insertarNuevoNino(ninos[i]);
	}
}

Biblioteca::~Biblioteca() {
	//destructor por defecto
}

void Biblioteca::insertarNuevoNino(Nino* nuevoNino) {
	this->ninos.insert(nuevoNino);
	//cout << "::::::Se insertó el niño::::::\n" << nuevoNino->getNombre();
}

void Biblioteca::insertarNuevoObjeto(Objeto* nuevoObjeto) {
	this->objetos.insert(nuevoObjeto);
	//cout << "::::::Se insertó el objeto::::::\n" << nuevoObjeto->toString();
}

void Biblioteca::removerObjeto(string nombreObjeto) {
	Objeto* obj = this->getObjeto(nombreObjeto);
	if (obj == nullptr) {
		cout
			<< "No se encontró un objeto con el nombre ["
			<< nombreObjeto << "]"
			<< endl;
	} else {
		//seteo en null del puntero en el niño que lo tenga prestado
		//seteo en null del puntero hacia el niño que lo posea en el objeto
		//delete del objeto de la coleccion
	}
}

Nino* Biblioteca::getNino(string nombreNino) {
	for (Nino* ptr : this->ninos) {
		if (ptr->getNombre() == nombreNino) {
			return ptr;
		}
	}
	return nullptr;
}

Objeto* Biblioteca::getObjeto(string nombreObjeto){
	for (Objeto* ptr : this->objetos) {
		if (ptr->getNombre() == nombreObjeto) {
			return ptr;
		}
	}
	return nullptr;
}

string Biblioteca::ninosToString() {
	string listadoNinos = "";
	for (Nino* ptr : this->ninos) {
		listadoNinos += ptr->getNombre() + "\n";
	}
	return listadoNinos;
}

string Biblioteca::objetosToString() {
	string listadoObjetos = "";
	for (Objeto* ptr : this->objetos) {
		listadoObjetos += ptr->toString() + "\n";
	}
	return listadoObjetos;
}
