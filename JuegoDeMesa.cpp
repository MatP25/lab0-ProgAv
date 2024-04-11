/*
 * JuegoDeMesa.cpp
 *
 *  Created on: Apr 8, 2024
 *      Author: mat
 */

#include "JuegoDeMesa.h"

JuegoDeMesa::JuegoDeMesa() {
	// constructor por defecto

}

JuegoDeMesa::JuegoDeMesa(string nombre,
			int edadRecomendada,
			estado condicion,
			int anioComprado,
			int cantJugadores) {
	this->nombre = nombre;
	this->prestadoA = nullptr;
	this->edadRecomendada = edadRecomendada;
	this->condicion = condicion;
	this->anioComprado = anioComprado;
	this->cantJugadores = cantJugadores;
}

JuegoDeMesa::~JuegoDeMesa() {
	// destructor por defecto
}

string JuegoDeMesa::toString() {
	string datosJuego = "";
	datosJuego += this->nombre + "\n";
	datosJuego += "Año de compra: " + to_string(this->anioComprado) + "\n";
	datosJuego += "Condición: " + this->estadoToString() + "\n";
	datosJuego += "Cantidad de jugadores: " + to_string(this->cantJugadores) + "\n";
	datosJuego += "Edad recomendada: " + to_string(this->edadRecomendada) + "\n";

	return datosJuego;
}
