/*
		Propósito: 20. Suma de Pares
		
		Autor: Ernesto Brizuela
		Fecha: 29/06/2022
		Hora: 5:00 PM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main(int argc, char const *argv[])
 {
	 int pares = 0;
	 
	 for (int i = 1; i <= 100; i++)
	 {
	 	if(i % 2 == 0){
	 		pares = pares + i;
		 }
	 }
	 
	 cout << endl;
	 cout << endl;
	 cout << "Total pares: " << pares;

	 return 0;
	 
 }

