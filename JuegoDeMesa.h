/*
 * JuegoDeMesa.h
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#ifndef JUEGODEMESA_H_
#define JUEGODEMESA_H_

#include "Objeto.h"

class JuegoDeMesa : public Objeto {
private:
	int edadRecomendada;
	int cantJugadores;
public:
	JuegoDeMesa();
	JuegoDeMesa(string nombre,
			int edadRecomendada,
			estado condicion,
			int anioComprado,
			int cantJugadores);
	virtual ~JuegoDeMesa();
	string toString();
};

#endif /* JUEGODEMESA_H_ */
