#pragma once
#include <string>
#include <iostream>

using namespace std;

class Cadenas {
private:
    string cadena;
public:
    Cadenas();
    ~Cadenas();
    int get_longitud(string _l);
    bool comparacion(string str1, string str2);
    int contar_vocales(string str);
    string sacar_substring(string str, int inicio, int longitud);
    void intercambiar(string& str1, string& str2);
    int encontrar_caracteres(string str, char caracter);
    string invertir_frase(string str);
    bool es_palindromo(string str);
};
