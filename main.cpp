#include <cstdlib>
#include "iostream"
#include "Biblioteca.h"
#include "Objeto.h"
#include "Libro.h"
#include "JuegoDeMesa.h"
#include "Nino.h"

using namespace std;

int main() {

	Biblioteca* biblioteca = new Biblioteca();

	cout << biblioteca->ninosToString();
	cout << biblioteca->objetosToString();
	cout << "_______________________________________" << endl;




	return 0;
}




