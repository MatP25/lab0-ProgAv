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
	string nombreNino;
	string nombreObjeto;
	bool prestado;
public:
	DTObjetoRoto();
	DTObjetoRoto(Objeto* NombreObjeto);
	virtual ~DTObjetoRoto();
	string getNombreNino();
	string getNombreObjeto();
	string estaPrestado();
	friend ostream& operator<<(ostream& os, DTObjetoRoto*& ObjRoto);
};

#endif /* DTOBJETOROTO_H_ */
