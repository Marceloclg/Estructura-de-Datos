#include "Estudiante.h"
#include <iostream>
#include <string>

using namespace std;

Estudiante::Estudiante()
{
}

Estudiante::~Estudiante()
{
}

void Estudiante::set_nombre(string n)
{
	nombre = n;
}

string Estudiante::get_nombre()
{
	return nombre;
}
