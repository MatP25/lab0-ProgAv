/*
 * Biblioteca.cpp
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#include "Biblioteca.h"
#include "DTObjetoRoto.h"
#include "stdio_ext.h"

class Nino;
class Objeto;

Biblioteca::Biblioteca() {
	//creo objetos de prueba
	Objeto* objetos[] = {
		new Libro("Las Malas",2022,Nuevo,"Camila Sosa Villada",240),
		new Libro("Nacidos en la bruma: El imperio final",2022,Roto,"Brandon Sanderson",688),
		new Libro("El cocodrilo al que no le gustaba el agua",2016,Roto,"Gemma Merino",32),
		new JuegoDeMesa("Juego Uno",7,Roto,2022,10),
		new JuegoDeMesa("Mazo de Cartas",7,Nuevo,2019,4),
		new JuegoDeMesa("Dados",2,Roto,2020,6)
	};
	//creo niños de prueba
	Nino* ninos[] = {
		new Nino("Maria Laura", 10, "Nueva Palmira 1521", "099298190"),
		new Nino("Alex", 5, "Humberto Primo 1501", "29094141")
	};
	//agrego las referencias a la coleccion de objetos de la biblioteca
	for (int i = 0; i<6; i++) {
		this->insertarNuevoObjeto(objetos[i]);
	}
	//agrego las referencias a la coleccion de niños de la biblioteca
	for (int i = 0; i < 2; i++) {
		this->insertarNuevoNino(ninos[i]);
	}

	//creo los enlaces entre los objetos
	ninos[0]->pedirObjeto(objetos[4]);
	ninos[0]->pedirObjeto(objetos[1]);
	ninos[0]->pedirObjeto(objetos[5]);
	ninos[1]->pedirObjeto(objetos[3]);
	ninos[1]->pedirObjeto(objetos[2]);

}

Biblioteca::~Biblioteca() {
	//destructor por defecto
}

void Biblioteca::insertarNuevoNino(Nino* nuevoNino) {
	this->ninos.insert(nuevoNino);
	//cout << "::::::Se insertó el niño::::::\n" << nuevoNino->getNombre();
}

void Biblioteca::insertarNuevoObjeto(Objeto* nuevoObjeto) {
	this->objetos.insert(nuevoObjeto);
	//cout << "::::::Se insertó el objeto::::::\n" << nuevoObjeto->toString();
}

void Biblioteca::removerObjeto(string nombreObjeto) {
	Objeto* obj = this->getObjeto(nombreObjeto);
	if (obj == nullptr) {
		cout
			<< "No se encontró un objeto con el nombre ["
			<< nombreObjeto << "]"
			<< endl;
	} else {
		//delete del objeto
	}
}

Nino* Biblioteca::getNino(string nombreNino) {
	for (Nino* ptr : this->ninos) {
		if (ptr->getNombre() == nombreNino) {
			return ptr;
		}
	}
	return nullptr;
}

Objeto* Biblioteca::getObjeto(string nombreObjeto){
	for (Objeto* ptr : this->objetos) {
		if (ptr->getNombre() == nombreObjeto) {
			return ptr;
		}
	}
	return nullptr;
}

string Biblioteca::ninosToString() {
	string listadoNinos = "";
	for (Nino* ptr : this->ninos) {
		listadoNinos += ptr->getNombre() + "\n";
	}
	return listadoNinos;
}

string Biblioteca::objetosToString() {
	string listadoObjetos = "";
	for (Objeto* ptr : this->objetos) {
		listadoObjetos += ptr->toString() + "\n";
	}
	return listadoObjetos;
}

void Biblioteca::listarTodosObjetosPrestados() {

	for (Nino* ptrNino : this->ninos) {
		cout << "\nObjetos prestados por " << ptrNino->getNombre() << endl;
		for (string str : ptrNino->listarObjetosPrestados()) {
			cout << str << endl;
		}
	}
}

void Biblioteca::listarObjetosRotos(){
	string listadoObjetosRotos = "";
	for (Objeto* ptr : this->objetos){
		if (ptr->estadoToString() == "Roto"){
			DTObjetoRoto* ObjRoto = new DTObjetoRoto(ptr);
			cout<<ObjRoto<<endl;
			delete ObjRoto;
		}
	}
}

void Biblioteca::imprimirListado(){
	cout<<"Bienvenido a nuestra Biblioteca\n"<<endl;
	cout<<"1. Consultar por objetos creados"<<endl;
	cout<<"2. Consultar por los objetos prestados"<<endl;
	cout<<"3. Listar objetos rotos"<<endl;
	cout<<"0. Salir del sistema\n"<<endl;
}

void Biblioteca::consulta(){
	char out;
	this->imprimirListado();
	cout << "Ingrese valor deseado: ";
	cin >> out;
	system("clear");

	while(out != '0'){
		switch(out){
		case '1': {
			cout << this->objetosToString();
			break;
			}
		case '2': {
			this->listarTodosObjetosPrestados();
			break;
			}
		case '3': {
			this->listarObjetosRotos();
			break;
			}
		default: cout << "Error" << endl;

		}
		__fpurge(stdin);
		cout<<"Presione cualquier tecla para continuar: ";
		getchar();
		system("clear");
		this->imprimirListado();
		cout << "Ingrese valor deseado: ";
		cin >> out;
	}
}
