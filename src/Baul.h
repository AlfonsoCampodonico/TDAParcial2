#ifndef BAUL_H_
#define BAUL_H_

class Baul {

private:
	unsigned int pesoMaximoBaul;
	unsigned int pesoActual;
	unsigned int vecesVaciado;
public:

	/*
	 * pre : 'pesoMaximo' debe ser un valor mayor a 0.
	 * post: el Baul tendra un peso maximo como lo indique el usuario
	 */
	Baul(int pesoMaximo);

	/*
	 * pre : Debe de existir el baul, y debe ser mayor que 0 el peso a introducir y no puede superar el peso maximo del baul
	 * 
	 * post: agrega peso usado al Baul
	 */
	void agregarElemento(unsigned int peso);

	/*
	 * pre :Debe tener peso que haya sido usado en el baul
	 *
	 * post: Modifica el pesoActual para que no tenga peso.
	 */
	void vaciarBaul();

	/*
	 * pre :
	 *
	 * post: Devuelve cuantas veces fue vaciado el baul.
	 */
	unsigned int contarVecesVaciadas();

	/*
	 * pre :
	 *
	 * post: Devuelve el peso que tiene utilizado el Baul
	 */
	unsigned int obtenerPesoActual();

	/*
	 * pre :
	 *
	 * post: Devuelve el peso maximo del Baul
	 */
	unsigned int obtenerPesoMaximo();
	
	/*
	 * pre :
	 *
	 * post: Devuelve que tan lleno esta el Baul, en base a lo usado y al peso maximo.
	 */
	float obtenerPorcentajeDeLlenado();
};


#endif /* BAUL_H_ */