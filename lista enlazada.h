#pragma once
#include "Nodo.h"
class ListaEnlazada
{
private:
	Nodo* primero;
	Nodo* ultimo;
public:
	ListaEnlazada();
	void agregarAnimal(string nombre, string habitat, string estado);
	void eliminarAnimal(string nombre);
	void buscarAnimal(string nombre);
	void mostarLista();
};

