#pragma once
#include <string>
using namespace std;
class Nodo
{
public:
	string nombre;
	string habitat;
	string estadoConservacion;
	Nodo* siguiente;
	Nodo(string n, string h, string estado);
};
