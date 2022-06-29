/*
		Propósito: 12. Ciclos While
		
		Autor: Ernesto Brizuela
		Fecha: 29/06/2022
		Hora: 12:00 PM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main(int argc, char** argv)
 {
	 int a = 5;
	 int b = 2;
	 
	 while(a > b){
	 	cout << "Ingrese el valor de a: " << endl;
	 	cin >> a;
	 }
	 
	 cout << endl;
	 cout << "Saliste del ciclo!";

	 return 0;
	 
 }

