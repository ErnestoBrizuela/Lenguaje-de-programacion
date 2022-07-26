/*
		Propósito: Nombre Completo
		 
		Autor: Ernesto Brizuela
		Fecha: 26/07/2022
		Hora: 3:00 PM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 string nombreCompleto(string nombre, string apellido)
 {
 	return nombre + " " + apellido;
 }

int main(int argc, char const *argv[])
{
	string primerNombre = "";
	string primerApellido = "";
	
	cout << "Ingrese su primer nombre: ";
	cin >> primerNombre;
	cout << "Ingrese su primer apellido: ";
	cin >> primerApellido;
	
	cout << endl;
	
	cout << "Nombre completo: "
	<< nombreCompleto(primerNombre, primerApellido);
}

