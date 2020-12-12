#include "Baul.h"

int main() {

	Baul miBaul(55);

	miBaul.agregarElemento(5);

	miBaul.agregarElemento(7);

	miBaul.obtenerPesoActual();

	miBaul.vaciarBaul();

	miBaul.agregarElemento(8);

	miBaul.obtenerPorcentajeDeLlenado();

	miBaul.vaciarBaul();

	miBaul.contarVecesVaciadas();

	return 0;

}