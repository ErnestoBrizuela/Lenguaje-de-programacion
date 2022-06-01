/*
		Propósito: Calculadora de Números
		
		Autor: Ernesto Brizuela
		Fecha: 01/06/2022
		Hora: 10:00 AM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main()
 {
	 setlocale(LC_CTYPE, "Spanish");
	 cout << setprecision(10);
	 
	 int a = 0;
	 int b = 0;
	 
	 int suma = 0, resta = 0, multiplicacion = 0, division = 0;
	 
	 cout << "Ingrese el valor de la variable a: ";
	 cin >> a;
	 
	 cout << "Ingrese el valor de la variable b: ";
	 cin >> b;
	 
	 suma = a + b;
	 
	 resta = a - b;
	 
	 multiplicacion = a*b;
	 
	 division = a/b;
	 
	 cout << "La suma de a + b es: " << suma << endl;
	 
	 cout << "La resta de a - b es: " << resta << endl;
	 
	 cout << "La multiplicación de a * b es: " << multiplicacion << endl;
	 
	 cout << "La division de a / b es: " << division << endl;

	 return 0;
	 
 }

