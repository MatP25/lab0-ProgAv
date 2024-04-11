/*
 * DTObjetoRoto.h
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#ifndef DTOBJETOROTO_H_
#define DTOBJETOROTO_H_

#include <string>
#include "Objeto.h"
using namespace std;

class DTObjetoRoto {

private:
	string nombreObjeto;
	bool prestado;
	string nombreNino;
public:
	DTObjetoRoto();
	DTObjetoRoto(Objeto* NombreObjeto);
	virtual ~DTObjetoRoto();
	void setNombreNino(string NombreNino);
	string getNombreNino();
	void setNombreObjeto(string NombreObjeto);
	string getNombreObjeto();
	void setPrestado(bool Prestado);
	bool esPrestado();
};

#endif /* DTOBJETOROTO_H_ */
