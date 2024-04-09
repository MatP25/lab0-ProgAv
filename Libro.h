/*
 * Libro.h
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#ifndef LIBRO_H_
#define LIBRO_H_

#include "Objeto.h"

class Libro : public Objeto {
private:
	string autor;
	int cantPaginas;
public:
	Libro();
	Libro(string nombre,
			int anioComprado,
			estado condicion,
			string autor,
			int cantPaginas);
	virtual ~Libro();
	string toString();
};

#endif /* LIBRO_H_ */
