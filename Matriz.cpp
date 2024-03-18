#include "Matriz.h"
#include <iostream>
using namespace std;

Matriz::Matriz() {

}
Matriz::~Matriz() {

}
void Matriz::set_fil(int _fil) {
	fil = _fil;
}
int Matriz::get_fil() {
	return fil;
}
int Matriz::get_columna() {
	return columna;
}
void Matriz::set_columna(int _columna) {
	columna = _columna;
}
void Matriz::mostrarmat(int MAT[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << MAT[i][j] << "\t";
		}
		cout << endl;
	}
}
void Matriz::cargarmat(int MAT[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cout << "MAT[" << i << "][" << j << "]= ";
			cin >> MAT[i][j];
		}
}
float Matriz::promedio(int MAT[MAX][MAX], int m, int n) {
	float prom, s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			s = s + MAT[i][j];
	prom = s / (m * n);
	return prom;
}
int Matriz::mayor(int MAT[MAX][MAX], int m, int n) {
	int may = MAT[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (MAT[i][j] > may)
				may = MAT[i][j];
	return may;
}
