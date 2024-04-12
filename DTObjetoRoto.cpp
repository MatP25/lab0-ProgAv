#include "DTObjetoRoto.h"
#include "Objeto.h"
using namespace std;

DTObjetoRoto::DTObjetoRoto() {
	// constructor por defecto
	this->nombreNino = "";
	this->nombreObjeto = "";
	this->prestado = false;
}

DTObjetoRoto::~DTObjetoRoto() {
	// destructor por defecto
}

DTObjetoRoto::DTObjetoRoto(Objeto* ObjetoRoto) {
	this->nombreObjeto = ObjetoRoto->getNombre();
	// si el obj esta prestado lo guarda en el data value
	if ( ObjetoRoto->estaPrestado() ) {
		// Obtiene el nombre del niño
		this->nombreNino = ObjetoRoto->perteneceA()->getNombre();
		this->prestado = true;
	}else{
		this->nombreNino = "";
		this->prestado = false;
	}
}

string DTObjetoRoto::estaPrestado(){
	if (this->prestado) return "SI";
	else return "NO";
}

string DTObjetoRoto::getNombreNino() {
    return this->nombreNino;
}

string DTObjetoRoto::getNombreObjeto() {
    return this->nombreObjeto;
}

ostream& operator<<(ostream& os,  DTObjetoRoto*& ObjRoto){
	os << ObjRoto->getNombreObjeto()
		<< ", Prestado: "
		<< ObjRoto->estaPrestado()
		<< ", "
		<< ObjRoto->getNombreNino()
		<< endl;
	return os;
}
