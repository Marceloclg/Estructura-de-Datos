#include "ListaEnlazada.h"
#include <iostream>
ListaEnlazada::ListaEnlazada()
{
	primero = nullptr;
	ultimo = nullptr;
}
void ListaEnlazada::agregarAnimal(string n, string habitat, string estado)
{
	Nodo* nuevonodo = new Nodo(n, habitat, estado);
	if (primero == NULL)
	{
		primero = nuevonodo;
		ultimo = nuevonodo;
	}
	else
	{
		ultimo->siguiente = nuevonodo;
		ultimo = nuevonodo;
	}
}
void ListaEnlazada::eliminarAnimal(string nombre)
{
	Nodo* actual = primero;
	Nodo* anterior = nullptr;
	while (actual != nullptr && actual->nombre != nombre)
	{
		anterior = actual;
		actual = actual->siguiente;
	}
	if (actual == nullptr)
	{
		cout << "No se encuentra el animal en la lista" << endl;
		return;
	}
	if (actual == primero)
		primero = primero->siguiente;
	else
		anterior->siguiente = actual->siguiente;
	delete actual;
}

void ListaEnlazada::buscarAnimal(string nombre)
{
	Nodo* actual = primero;
	while (actual != nullptr)
	{
		if (actual->nombre == nombre)
		{
			cout << "Nombre: " << actual->nombre;
			cout << "Habitat: " << actual->habitat;
			cout << "Estado: " << actual->estadoConservacion;
		}
		actual = actual->siguiente;
	}
	cout << "Animal no encontrado";
}

void ListaEnlazada::mostarLista()
{
	Nodo* actual = primero;
	while (actual != nullptr)
	{
		cout << "Nombre: " << actual->nombre;
		cout << "Habitat: " << actual->habitat;
		cout << "Estado: " << actual->estadoConservacion;
		actual = actual->siguiente;
	}
}
