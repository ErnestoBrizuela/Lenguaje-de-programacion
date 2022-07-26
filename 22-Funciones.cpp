/*
		Propósito: Funciones
		
		Autor: Ernesto Brizuela
		Fecha: 26/07/2022
		Hora: 1:00 PM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
int sumar(){
	return 5 + 7;
}

string nombreCompleto(){
	string nombre = "Juan";
	string apellido = "Perez";
	
	return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
	int resultado = sumar();
	string nombreyApellido = nombreCompleto();
	
	cout << resultado;
	
	cout << endl;
}

