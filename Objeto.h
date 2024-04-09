/*
 * Objeto.h
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#ifndef OBJETO_H_
#define OBJETO_H_

#include "string"
#include "iostream"

#include "Nino.h"

using namespace std;

class Nino;

enum estado {Nuevo, BienConservado, Roto};

class Objeto {
protected:
	string nombre;
	int anioComprado;
	estado condicion;
	Nino* prestadoA;
public:
	Objeto();
	virtual ~Objeto();
	virtual string toString() = 0;
	string estadoToString();
	string getNombre();
	bool estaPrestado();

};

#endif /* OBJETO_H_ */
