#include "Cadenas.h"

Cadenas::Cadenas() {
}

Cadenas::~Cadenas() {
}

int Cadenas::get_longitud(string _l) {
    return _l.length();
}

bool Cadenas::comparacion(string str1, string str2) {
    return str1 == str2;
}

int Cadenas::contar_vocales(string str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
            count++;
        }
    }
    return count;
}

string Cadenas::sacar_substring(string str, int inicio, int longitud) {
    return str.substr(inicio, longitud);
}

void Cadenas::intercambiar(string& str1, string& str2) {
    string temp = str1;
    str1 = str2;
    str2 = temp;
}

int Cadenas::encontrar_caracteres(string str, char caracter) {
    int count = 0;
    for (char c : str) {
        if (c == caracter) {
            count++;
        }
    }
    return count;
}

string Cadenas::invertir_frase(string str) {
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

bool Cadenas::es_palindromo(string str) {
    string reversedStr = invertir_frase(str);
    return str == reversedStr;
}
