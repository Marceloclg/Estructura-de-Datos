#include "Nodo.h"

Nodo::Nodo(string n, string h, string estado)
{
	this->nombre = 0;
	this->habitat = h;
	this->estadoConservacion = estado;
	siguiente = nullptr;
}
