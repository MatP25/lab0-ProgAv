/*
 * Biblioteca.h
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include "Objeto.h"
#include "Nino.h"
#include "set"

class Biblioteca {
private:
	set<Objeto*> objetos;
	set<Nino*> ninos;

public:
	Biblioteca();
	virtual ~Biblioteca();
	void insertarNuevoNino(Nino* nuevoNnino);
	void insertarNuevoObjeto(Objeto* nuevoObjeto);
	void removerObjeto(string nombreObjeto);
	Nino* getNino(string nombreNino);
	Objeto* getObjeto(string nombreObjeto);
	string ninosToString();
	string objetosToString();
	void listarTodosObjetosPrestados();
};

#endif /* BIBLIOTECA_H_ */
