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
	string NombreObjeto;
	bool Prestado;
	string NombreNino;
public:
	DTObjetoRoto();
	DTObjetoRoto(Objeto* NombreObjeto);
	virtual ~DTObjetoRoto();
};

#endif /* DTOBJETOROTO_H_ */
