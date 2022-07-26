/*
		Propósito: Calculadora con funciones
		
		Autor: Ernesto Brizuela
		Fecha: 26/07/2022
		Hora: 2:00 PM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
using namespace std;

int sumar(int a, int b)
{
	return a + b;
}

int calculadora(int a, int b, char operador)
{
	if (operador == '+'){
		return sumar(a,b);
	}
	
	return -1;
}

int main(int argc, char const *argv[])
{
	int n1 = 0;
	int n2 = 0;
	char operador;
	
	cout << "Ingrese a: ";
	cin >> n1;
	cout << "Ingrese b: ";
	cin >> n2;
	cout << "Ingrese el operador (+, -, *, /): ";
	cin >> operador;
	
	cout << endl;
	
	cout << "Resultado de " << n1 << operador << n2 << " es: ";
	cout << calculadora(n1, n2, operador);
	
	return 0;
}
