/*
		Propósito: 4. Imprimir todas las variables en un programa
		
		Autor: Ernesto Brizuela
		Fecha: 29/06/2022
		Hora: 10:00 AM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main(int argc, char const *argv[])
 {
	 bool valorBoolean;
	 valorBoolean = true;
	 
	 int valorEntero = 15;
	 double valorDouble = 20.99;
	 string valorString = "Hola como estan";
	 char valorChar = 'B';
	 
	 cout << "Valor Boolean: " << valorBoolean << endl;
	 cout << "Valor Entero: " << valorEntero << endl;
	 cout << "Valor Double: " << valorDouble << endl;
	 cout << "Valor String: " << valorString << endl;
	 cout << "Valor Char: " << valorChar << endl;
	 
	 return 0;
	 
 }

