/*
Ejercicio 9: Realice un programa que lea una cadena de caracteres de la entrada estándar
y muestre en la salida estándar cuántas ocurrencias de cada vocal existen en la cadena.
*/
#include<iostream>
#include<cstring>

using namespace std;


int main() {

	char frase[25];
	int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

	cout << "Digite una frase: ";
	cin.getline(frase, 25);

	for (int i = 0; i < 25; i++) {

		switch (frase[i])
		{
		case 'a':vocal_a++; break;
		case 'e':vocal_e++; break;
		case 'i':vocal_i++; break;
		case 'o':vocal_o++; break;
		case 'u':vocal_u++; break;
		}
	}

	cout << "La concidenca en a es: " << vocal_a << endl;
	cout << "La concidenca en e es: " << vocal_e << endl;
	cout << "La concidenca en i es: " << vocal_i << endl;
	cout << "La concidenca en o es: " << vocal_o << endl;
	cout << "La concidenca en u es: " << vocal_u << endl;

	cin.get();
	return 0;
}
