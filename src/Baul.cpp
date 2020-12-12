#include <string>
#include "Baul.h"

using namespace std;

/*
 * Diseñar la especificación e implementar el TDA Baul. Debe proveer operaciones para:
    • crear el Baul recibiendo como parámetro el peso máximo [kg] que puede cargar.
    • agregar elemento, recibiendo como parámetro el peso [kg] del elemento a agregar.
    • calcular el peso actual [kg] de la carga.
    • vaciar el Baul.
    • calcular la cantidad de veces que fue usado, es decir que estando con carga fue vaciado.
 */


Baul::Baul(int peso) {

	if (peso < 0) {
		throw string("El peso maximo del baul debe ser mayor a 0");
	}

	this->pesoMaximoBaul = peso;
	this->vecesVaciado = 0;
	this->pesoActual = 0;
}


void Baul::agregarElemento(unsigned int peso) {

	if (peso < 1) {
		throw string("Debe tener un peso valido para agregar");
	}
	unsigned int pesoActualDelBaul = obtenerPesoActual();
	unsigned int pesoMaximoDelBaul = obtenerPesoMaximo();
	if(peso + pesoActualDelBaul > pesoMaximoDelBaul)
	{
		throw string("Sobrepasa el peso maximo del baul");
	}
	else
	{
		this->pesoActual += peso;
	}
	
}

void Baul::vaciarBaul() {

	if(pesoActual == 0)
	{
		throw string("Ya se encuentra vacio el Baul");
	}
	this->pesoActual = 0;
	this->vecesVaciado++;
}

unsigned int Baul::contarVecesVaciadas()
{
	return this->vecesVaciado;
}

unsigned int Baul::obtenerPesoActual()
{
	return this->pesoActual;
}

unsigned int Baul::obtenerPesoMaximo()
{
	return this->pesoMaximoBaul;
}

float Baul::obtenerPorcentajeDeLlenado()
{
	unsigned int pesoActualDelBaul = obtenerPesoActual();
	unsigned int pesoMaximoDelBaul = obtenerPesoMaximo();
	float porcentajeLlenado;
	if (pesoActualDelBaul = 0)
	{
		porcentajeLlenado = 0;
	}
	else
	{
		porcentajeLlenado = (float)pesoActualDelBaul / (float)pesoMaximoDelBaul * 100;
	}
	
	return porcentajeLlenado;
}
