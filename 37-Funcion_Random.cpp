/*
		Propósito: Tarea 9
		
		Autor: Ernesto Brizuela
		Fecha: 20/07/2022
		Hora: 12:00 PM
*/
 
 #include <iostream>
 #include <stdlib.h>
 #include <time.h>
 
 using namespace std;
 
 int main(int argc, char const *argv[])
 {
	 int numero = 0;
	 
	 srand(time(NULL));	 
	 
	 for(int i = 0; i < 2; i++)
	 {
	 	numero = rand() % 6 + 1;
	 	cout << "Numero de dado: " << numero << endl;
	 }

	 return 0;
	 
 }

