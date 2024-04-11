/*
 * Libro.cpp
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#include "Libro.h"
#include "iostream"

Libro::Libro() {
	// constructor por defecto
}

Libro::~Libro() {
	// destructor por defecto
}

Libro::Libro(string nombre,
		int anioComprado,
		estado condicion,
		string autor,
		int cantPaginas) {

	this->nombre = nombre;
	this->prestadoA = nullptr;
	this->anioComprado = anioComprado;
	this->condicion = condicion;
	this->autor = autor;
	this->cantPaginas = cantPaginas;

}

string Libro::toString() {
	string datosLibro = "";
	datosLibro += this->nombre + "\n";
	datosLibro += "Autor: " + this->autor + "\n";
	datosLibro += "Cantidad de páginas: " + to_string(this->cantPaginas) + "\n";
	datosLibro += "Año de compra: " + to_string(this->anioComprado) + "\n";
	datosLibro += "Condición: " + this->estadoToString() + "\n";


	return datosLibro;
}
