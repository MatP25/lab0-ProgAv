/*
 * Nene.h
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#ifndef NINO_H_
#define NINO_H_

class Objeto;

#include "Objeto.h"
#include "set"

using namespace std;

class Nino {
private:
	string nombre;
	int edad;
	string direccion;
	string telefono;
	set<Objeto*> objetosEnPrestamo;
public:
	Nino();
	Nino(string nombre, int edad, string direccion, string telefono);
	virtual ~Nino();
	set<string> listarObjetosPrestados();
	string getNombre();
	void pedirObjeto(Objeto* objeto);
	void devolverObjeto(Objeto* objeto, Nino* nino);
};

#endif /* NINO_H_ */
