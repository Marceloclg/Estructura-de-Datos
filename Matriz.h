#pragma once
#define MAX 20
class Matriz
{
private:
	int fil;
	int columna;
	int matriz[MAX][MAX];
public:
	Matriz();
	~Matriz();
	int get_fil();
	void set_fil(int _fil);
	int get_columna();
	void set_columna(int _columna);
	void mostrarmat(int MAT[MAX][MAX], int m, int n);
	void cargarmat(int MAT[MAX][MAX], int m, int n);
	float promedio(int MAT[MAX][MAX], int m, int n);
	int mayor(int MAT[MAX][MAX], int m, int n);
};
