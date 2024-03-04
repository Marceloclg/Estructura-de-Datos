#include <iostream>
#include <string>

using namespace std;

class Estudiante
{
private:
	string nombre;
	int edad;
	string materia;
	float calificacion;

public:
	Estudiante();
	~Estudiante();
	void set_nombre(string n);
	string get_nombre();
};
