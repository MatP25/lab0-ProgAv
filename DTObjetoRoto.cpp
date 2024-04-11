/*
 * DTObjetoRoto.cpp
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#include "DTObjetoRoto.h"

#include <string>
#include "Objeto.h"

using namespace std;

DTObjetoRoto::DTObjetoRoto() {
	// constructor por defecto

}

DTObjetoRoto::~DTObjetoRoto() {
	// destructor por defecto
}

DTObjetoRoto::DTObjetoRoto(Objeto* ObjetoRoto) {
	this->nombreObjeto = ObjetoRoto->getNombre();

	if ( ObjetoRoto->estaPrestado()){ // pregunta si el objeto esta prestado, si lo esta guarda en el data value que si lo esta

		this->nombreNino = ObjetoRoto->perteneceA()->getNombre(); // Obtiene el nombre del niño
		this->prestado = true;  // Si esta asociado a un niño setea el valor a true, sino a false  no se si es redundante, si se inicializa por defecto en true es innecesario

	}else{
		this->nombreNino = "";
		this->prestado = false;
	}
}

void DTObjetoRoto::setNombreNino(string nombreNino) {
    this->nombreNino = nombreNino;
}

string DTObjetoRoto::getNombreNino() {
    return this->nombreNino;
}

bool DTObjetoRoto::esPrestado() {
    return this->prestado;
}

void DTObjetoRoto::setNombreObjeto(string nombreObjeto) {
    this->nombreObjeto = nombreObjeto;
}

string DTObjetoRoto::getNombreObjeto() {
    return this->nombreObjeto;
}

void DTObjetoRoto::setPrestado(bool prestado) {
    this->prestado = prestado;
}

