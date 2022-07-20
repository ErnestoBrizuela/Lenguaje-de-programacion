/*
		Propósito: Tarea 8
		
		Autor: Ernesto Brizuela
		Fecha: 20/07/2022
		Hora: 11:00 AM
*/
 
 #include <iostream>
 #include <math.h>
 
 using namespace std;
 
 int main(int argc, char const *argv[])
 {	 
	 double a = 0;
	 double raiz = 0;
	 
	 cout << "Ingrese el numero que quiere sacar la raiz: ";
	 cin >> a;
	 
	 raiz = sqrt(a);
	 
	 cout << "La raiz de " << a << " es: " << raiz;   
	 return 0;
	 
 }
 
