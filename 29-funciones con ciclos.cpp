/*
		Propósito: Funciones con ciclos
		
		Autor: Ernesto Brizuela
		Fecha: 26/07/2022
		Hora: 4:00 PM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
void imprimirCaracteres(char caracter, int ciclos)
{
	for (int i = 0; i < ciclos; i++)
	{
		cout << caracter;
	}
	
	cout << endl;
}

int main(int argc, char const *argv[])
{
	imprimirCaracteres('@', 10);
	imprimirCaracteres('#', 5);
	cout << "Hola Mundo" << endl;
	imprimirCaracteres('@', 10);
	return 0;
}

