/*
		Propósito: 15. Do While
		
		Autor: Ernesto Brizuela
		Fecha: 29/06/2022
		Hora: 12:00 PM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main(int argc, char const *argv[])
 {
	 int a = 2;
	 int b = 1;
	 
	 while(a > b){
	 	cout << "(while) a > b" << endl;
	 	break;
	 }
	 
	 do {
	 	cout << "(do while) a > b" << endl;
	 	break;
	 } while (a > b);

	 return 0;
	 
 }

